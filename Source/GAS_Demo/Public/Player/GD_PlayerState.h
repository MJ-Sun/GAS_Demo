// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemReplicationProxyInterface.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GD_PlayerState.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class GAS_DEMO_API AGD_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGD_PlayerState();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Gas|Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
