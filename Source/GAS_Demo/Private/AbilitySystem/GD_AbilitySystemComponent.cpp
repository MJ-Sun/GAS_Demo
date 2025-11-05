// MJSun


#include "AbilitySystem/GD_AbilitySystemComponent.h"


UGD_AbilitySystemComponent::UGD_AbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UGD_AbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	
}


void UGD_AbilitySystemComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                               FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

