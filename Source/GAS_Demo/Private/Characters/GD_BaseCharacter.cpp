// MJSun


#include "GAS_Demo/Public/Characters/GD_BaseCharacter.h"


AGD_BaseCharacter::AGD_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Tick and refresh bone transforms whether rendered or not - for bone updates on a dedicated server
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}

UAbilitySystemComponent* AGD_BaseCharacter::GetAbilitySystemComponent() const
{
	return nullptr;
}

