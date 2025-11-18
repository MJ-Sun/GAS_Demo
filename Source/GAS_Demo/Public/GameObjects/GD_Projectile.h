// MJSun

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GD_Projectile.generated.h"

class UGameplayEffect;
class UProjectileMovementComponent;

UCLASS()
class GAS_DEMO_API AGD_Projectile : public AActor
{
	GENERATED_BODY()

public:
	AGD_Projectile();
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gas|Damage", meta = (ExposeOnSpawn, ClampMin = "0.0"))
	float Damage{-25.f};

	UFUNCTION(BlueprintImplementableEvent, Category = "Gas|Projectile")
	void SpawnImpactEffects();
	
private:
	
	UPROPERTY(VisibleAnywhere, Category = "Gas|Projectile")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, Category = "Gas|Damage")
	TSubclassOf<UGameplayEffect> DamageEffect;
};
