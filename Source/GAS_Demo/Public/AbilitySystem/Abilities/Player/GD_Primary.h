// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GD_GameplayAbility.h"
#include "GD_Primary.generated.h"

/**
 * 
 */
UCLASS()
class GAS_DEMO_API UGD_Primary : public UGD_GameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Gas|Abilities")
	void HitBoxOverlapTest();

private:

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxRadius = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxForwardOffset = 200.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxElevationOffset = 20.0f;
};
