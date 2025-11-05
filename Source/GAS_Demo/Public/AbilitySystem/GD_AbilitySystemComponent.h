// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GD_AbilitySystemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAS_DEMO_API UGD_AbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UGD_AbilitySystemComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
		                           FActorComponentTickFunction* ThisTickFunction) override;
protected:
	virtual void BeginPlay() override;
	
};
