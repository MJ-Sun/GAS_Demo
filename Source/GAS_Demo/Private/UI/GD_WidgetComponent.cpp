// MJSun


#include "UI/GD_WidgetComponent.h"

void UGD_WidgetComponent::BeginPlay()
{
	Super::BeginPlay();

	InitAbilitySystemData();

	if (!IsASCInitialized())
	{
		GasCharacter->OnASCInitialized.AddDynamic(this, &ThisClass::OnASCInitialized);
	}
}

void UGD_WidgetComponent::InitAbilitySystemData()
{
	GasCharacter = Cast<AGD_BaseCharacter>(GetOwner());
	AttributeSet = Cast<UGD_AttributeSet>(GasCharacter->GetAttributeSet());
	AbilitySystemComponent = Cast<UGD_AbilitySystemComponent>(GasCharacter->GetAbilitySystemComponent());
}

bool UGD_WidgetComponent::IsASCInitialized() const
{
	return AbilitySystemComponent.IsValid() && AttributeSet.IsValid();
}

void UGD_WidgetComponent::OnASCInitialized(UAbilitySystemComponent* ASC, UAttributeSet* AS)
{
	AbilitySystemComponent = Cast<UGD_AbilitySystemComponent>(ASC);
	AttributeSet = Cast<UGD_AttributeSet>(AS);
}

