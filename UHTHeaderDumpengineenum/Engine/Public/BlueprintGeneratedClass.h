#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Class -FallbackName=Class
#include "BPComponentClassOverride.h"
#include "BlueprintCookedComponentInstancingData.h"
#include "BlueprintGeneratedClass.generated.h"

class USimpleConstructionScript;
class UDynamicBlueprintBinding;
class UActorComponent;
class UTimelineTemplate;
class UInheritableComponentHandler;
class UStructProperty;
class UFunction;

UCLASS()
class ENGINE_API UBlueprintGeneratedClass : public UClass {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    int32 NumReplicatedProperties;
    
    UPROPERTY()
    uint8 bHasNativizedParent: 1;
    
    UPROPERTY()
    uint8 bHasCookedComponentInstancingData: 1;
    
    UPROPERTY()
    TArray<UDynamicBlueprintBinding*> DynamicBindingObjects;
    
    UPROPERTY(Export)
    TArray<UActorComponent*> ComponentTemplates;
    
    UPROPERTY()
    TArray<UTimelineTemplate*> Timelines;
    
    UPROPERTY()
    TArray<FBPComponentClassOverride> ComponentClassOverrides;
    
    UPROPERTY()
    USimpleConstructionScript* SimpleConstructionScript;
    
    UPROPERTY()
    UInheritableComponentHandler* InheritableComponentHandler;
    
    UPROPERTY()
    UStructProperty* UberGraphFramePointerProperty;
    
    UPROPERTY()
    UFunction* UberGraphFunction;
    
    UPROPERTY()
    TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;
    
    UBlueprintGeneratedClass();
};

