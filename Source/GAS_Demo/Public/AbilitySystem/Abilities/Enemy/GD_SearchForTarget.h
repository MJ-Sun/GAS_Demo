// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/GD_GameplayAbility.h"
#include "GD_SearchForTarget.generated.h"

namespace EPathFollowingResult
{
	enum Type : int;
}

class UAITask_MoveTo;
class AGD_BaseCharacter;
class UAbilityTask_WaitDelay;
class AGD_EnemyCharacter;
class AAIController;
class UGD_WaitGameplayEvent;

UCLASS()
class GAS_DEMO_API UGD_SearchForTarget : public UGD_GameplayAbility
{
	GENERATED_BODY()
public:
	UGD_SearchForTarget();
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	TWeakObjectPtr<AGD_EnemyCharacter> OwningEnemy;
	TWeakObjectPtr<AAIController> OwningAIController;
	TWeakObjectPtr<AGD_BaseCharacter> TargetBaseCharacter;

private:

	UPROPERTY()
	TObjectPtr<UGD_WaitGameplayEvent> WaitGameplayEventTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitDelay> SearchDelayTask;

	UPROPERTY()
	TObjectPtr<UAITask_MoveTo> MoveToLocationOrActorTask;

	UPROPERTY()
	TObjectPtr<UAbilityTask_WaitDelay> AttackDelayTask;

	void StartSearch();

	UFUNCTION()
	void EndAttackEventReceived(FGameplayEventData Payload);

	UFUNCTION()
	void Search();

	void MoveToTargetAndAttack();

	UFUNCTION()
	void AttackTarget(TEnumAsByte<EPathFollowingResult::Type> Result, AAIController* AIController);

	UFUNCTION()
	void Attack();
};