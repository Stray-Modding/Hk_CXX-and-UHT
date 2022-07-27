#pragma once
#include "CoreMinimal.h"
#include "BlueprintCore.h"
#include "EBlueprintType.h"
#include "BPComponentClassOverride.h"
#include "Blueprint.generated.h"

class USimpleConstructionScript;
class UActorComponent;
class UTimelineTemplate;
class UInheritableComponentHandler;

UCLASS()
class ENGINE_API UBlueprint : public UBlueprintCore {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* ParentClass;
    
    UPROPERTY(AssetRegistrySearchable)
    TEnumAsByte<EBlueprintType> BlueprintType;
    
    UPROPERTY(Config)
    uint8 bRecompileOnLoad: 1;
    
    UPROPERTY(Transient)
    uint8 bHasBeenRegenerated: 1;
    
    UPROPERTY(Transient)
    uint8 bIsRegeneratingOnLoad: 1;
    
    UPROPERTY()
    int32 BlueprintSystemVersion;
    
    UPROPERTY()
    USimpleConstructionScript* SimpleConstructionScript;
    
    UPROPERTY(Export)
    TArray<UActorComponent*> ComponentTemplates;
    
    UPROPERTY()
    TArray<UTimelineTemplate*> Timelines;
    
    UPROPERTY()
    TArray<FBPComponentClassOverride> ComponentClassOverrides;
    
    UPROPERTY()
    UInheritableComponentHandler* InheritableComponentHandler;
    
    UBlueprint();
};

