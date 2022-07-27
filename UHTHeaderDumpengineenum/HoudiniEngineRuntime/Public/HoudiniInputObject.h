#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EHoudiniInputObjectType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "HoudiniInputObject.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UObject> InputObject;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    EHoudiniInputObjectType Type;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputNodeId;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputObjectNodeId;
    
    UPROPERTY(DuplicateTransient)
    FGuid Guid;
    
protected:
    UPROPERTY(DuplicateTransient)
    bool bHasChanged;
    
    UPROPERTY(DuplicateTransient)
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY(DuplicateTransient)
    bool bTransformChanged;
    
    UPROPERTY()
    bool bImportAsReference;
    
    UPROPERTY()
    bool bImportAsReferenceRotScaleEnabled;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
public:
    UHoudiniInputObject();
};

