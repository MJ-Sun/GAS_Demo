// MJSun

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Components/WidgetComponent.h"
#include "GD_WidgetComponent.generated.h"

class AGD_BaseCharacter;
class UGD_AbilitySystemComponent;
class UGD_AttributeSet;
class UAbilitySystemComponent;



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAS_DEMO_API UGD_WidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TMap<FGameplayAttribute, FGameplayAttribute> AttributeMap;
	

private:
	TWeakObjectPtr<AGD_BaseCharacter> GasCharacter;
	TWeakObjectPtr<UGD_AbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<UGD_AttributeSet> AttributeSet;

	void InitAbilitySystemData();
	bool IsASCInitialized() const;
	void InitializeAttributesDelegate();
	void BindWidgetToAttributeChanges(UWidget* WidgetObject, const TTuple<FGameplayAttribute, FGameplayAttribute>& Pair) const;

	UFUNCTION()
	void OnASCInitialized(UAbilitySystemComponent* ASC, UAttributeSet* AS);

	UFUNCTION()
	void BindToAttributeChanges();
};
