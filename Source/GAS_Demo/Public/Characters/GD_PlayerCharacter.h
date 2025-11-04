// MJSun

#pragma once

#include "CoreMinimal.h"
#include "GD_BaseCharacter.h"
#include "GD_PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class GAS_DEMO_API AGD_PlayerCharacter : public AGD_BaseCharacter
{
	GENERATED_BODY()

public:

	AGD_PlayerCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:

	UPROPERTY(VisibleAnyWhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnyWhere, Category = "Camera")
	TObjectPtr<UCameraComponent> FollowCamera;
};
