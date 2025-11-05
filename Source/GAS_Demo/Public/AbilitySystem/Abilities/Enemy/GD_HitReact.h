// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GD_GameplayAbility.h"
#include "GD_HitReact.generated.h"

/**
 * 
 */
UCLASS()
class GAS_DEMO_API UGD_HitReact : public UGD_GameplayAbility
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Gas|Abilities")
	void CacheHitDirectionVectors(AActor* Instigator);
	
	UPROPERTY(BlueprintReadOnly, Category = "Gas|Abilities")
	FVector AvatarForward;

	UPROPERTY(BlueprintReadOnly, Category = "Gas|Abilities")
	FVector ToInstigator;
	
};
