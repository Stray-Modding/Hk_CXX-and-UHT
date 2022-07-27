#pragma once
#include "CoreMinimal.h"
#include "DelegateRuntimeBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "WidgetBlueprintGeneratedClass.generated.h"

class UWidgetTree;
class UWidgetAnimation;

UCLASS()
class UMG_API UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UWidgetTree* WidgetTree;
    
    UPROPERTY()
    uint8 bClassRequiresNativeTick: 1;
    
public:
    UPROPERTY()
    TArray<FDelegateRuntimeBinding> Bindings;
    
    UPROPERTY()
    TArray<UWidgetAnimation*> Animations;
    
    UPROPERTY()
    TArray<FName> NamedSlots;
    
    UWidgetBlueprintGeneratedClass();
};

