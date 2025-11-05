// MJSun


#include "Player/GD_PlayerState.h"
#include "Player/GD_PlayerState.h"
#include "AbilitySystem/GD_AbilitySystemComponent.h"

AGD_PlayerState::AGD_PlayerState()
{
	SetNetUpdateFrequency(100.f);

	AbilitySystemComponent = CreateDefaultSubobject<UGD_AbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
}

UAbilitySystemComponent* AGD_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
