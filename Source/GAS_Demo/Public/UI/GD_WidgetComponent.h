// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/GD_AbilitySystemComponent.h"
#include "AbilitySystem/GD_AttributeSet.h"
#include "Characters/GD_BaseCharacter.h"
#include "Components/WidgetComponent.h"
#include "GD_WidgetComponent.generated.h"

class AGD_BaseCharacter;
class UGD_AbilitySystemComponent;
class UGD_AttributeSet;
class UAbilitySystemComponent;
class UAttributeSet;



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAS_DEMO_API UGD_WidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	
protected:
	virtual void BeginPlay() override;

private:
	TWeakObjectPtr<AGD_BaseCharacter> GasCharacter;
	TWeakObjectPtr<UGD_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<UGD_AttributeSet> AttributeSet;

	void InitAbilitySystemData();
	bool IsASCInitialized() const;

	UFUNCTION()
	void OnASCInitialized(UAbilitySystemComponent* ASC, UAttributeSet* AS);
};
