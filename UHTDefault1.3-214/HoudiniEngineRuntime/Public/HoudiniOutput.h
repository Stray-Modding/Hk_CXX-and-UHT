#pragma once
#include "CoreMinimal.h"
#include "HoudiniInstancedOutput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHoudiniOutputType.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniOutputObject.h"
#include "HoudiniOutput.generated.h"

class UMaterialInterface;
class AActor;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniOutput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EHoudiniOutputType Type;
    
    UPROPERTY()
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;
    
    UPROPERTY(DuplicateTransient)
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;
    
    UPROPERTY()
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;
    
    UPROPERTY()
    TMap<FString, UMaterialInterface*> AssignementMaterials;
    
    UPROPERTY()
    TMap<FString, UMaterialInterface*> ReplacementMaterials;
    
    UPROPERTY()
    bool bLandscapeWorldComposition;
    
    UPROPERTY()
    TArray<AActor*> HoudiniCreatedSocketActors;
    
    UPROPERTY()
    TArray<AActor*> HoudiniAttachedSocketActors;
    
private:
    UPROPERTY()
    bool bIsEditableNode;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasEditableNodeBuilt;
    
    UPROPERTY()
    bool bIsUpdating;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
public:
    UHoudiniOutput();
};

