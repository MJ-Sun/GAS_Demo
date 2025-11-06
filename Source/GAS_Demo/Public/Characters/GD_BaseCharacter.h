// MJSun

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GD_BaseCharacter.generated.h"

class UGameplayAbility;
class UGameplayEffect;

UCLASS(Abstract)
class GAS_DEMO_API AGD_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AGD_BaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	void GiveStartupAbilities();
	void InitializeAttributes() const;
private:	
	UPROPERTY(EditAnywhere, Category = "Gas|Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupAbilities;

	UPROPERTY(EditAnywhere, Category = "Gas|Effects")
	TSubclassOf<UGameplayEffect> InitializeAttributesEffect;
};
