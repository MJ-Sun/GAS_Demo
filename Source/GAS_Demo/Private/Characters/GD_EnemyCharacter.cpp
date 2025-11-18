// MJSun


#include "Characters/GD_EnemyCharacter.h"

#include "AIController.h"
#include "AbilitySystem/GD_AbilitySystemComponent.h"
#include "AbilitySystem/GD_AttributeSet.h"
#include "Components/TimelineComponent.h"


AGD_EnemyCharacter::AGD_EnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	AbilitySystemComponent = CreateDefaultSubobject<UGD_AbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UGD_AttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AGD_EnemyCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAttributeSet* AGD_EnemyCharacter::GetAttributeSet() const
{
	return AttributeSet;
}

void AGD_EnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(GetAbilitySystemComponent())) return;

	GetAbilitySystemComponent()->InitAbilityActorInfo(this, this);
	OnASCInitialized.Broadcast(GetAbilitySystemComponent(), GetAttributeSet());

	if (!HasAuthority()) return;

	GiveStartupAbilities();
	InitializeAttributes();

	UGD_AttributeSet* GD_AttributeSet = Cast<UGD_AttributeSet>(GetAttributeSet());
	if (!IsValid(GD_AttributeSet)) return;
	
	GetAbilitySystemComponent()->GetGameplayAttributeValueChangeDelegate(GD_AttributeSet->GetHealthAttribute()).AddUObject(this, &ThisClass::OnHealthChanged);
}

void AGD_EnemyCharacter::HandleDeath()
{
	Super::HandleDeath();


	AAIController* AIController = GetController<AAIController>();
	if (!IsValid(AIController)) return;
	AIController->StopMovement();
}

