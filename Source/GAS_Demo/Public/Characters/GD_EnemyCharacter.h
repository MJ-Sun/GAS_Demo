// MJSun

#pragma once

#include "CoreMinimal.h"
#include "GD_BaseCharacter.h"
#include "GD_EnemyCharacter.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class GAS_DEMO_API AGD_EnemyCharacter : public AGD_BaseCharacter
{
	GENERATED_BODY()

public:
	AGD_EnemyCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual UAttributeSet* GetAttributeSet() const override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gas|AI")
	float AcceptanceRadius{500.f};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gas|AI")
	float MinAttackDelay{0.1f};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Gas|AI")
	float MaxAttackDelay{0.5f};

	UFUNCTION(BlueprintImplementableEvent)
	float GetTimelineLength();
protected:
	virtual void BeginPlay() override;
	virtual void HandleDeath() override;

private:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
