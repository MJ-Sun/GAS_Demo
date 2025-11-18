// MJSun



#include "AbilitySystem/AbilityTasks/GD_WaitGameplayEvent.h"

UGD_WaitGameplayEvent* UGD_WaitGameplayEvent::WaitGameplayEventToActorProxy(AActor* TargetActor, FGameplayTag EventTag,
	bool OnlyTriggerOnce, bool OnlyMatchExact)
{
	UGD_WaitGameplayEvent* MyObj = NewObject<UGD_WaitGameplayEvent>();
	MyObj->SetAbilityActor(TargetActor);
	MyObj->Tag = EventTag;
	MyObj->OnlyTriggerOnce = OnlyTriggerOnce;
	MyObj->OnlyMatchExact = OnlyMatchExact;
	return MyObj;
}

void UGD_WaitGameplayEvent::StartActivation()
{
	Activate();
}