#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInputObjectType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "HoudiniInputObject.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> InputObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniInputObjectType Type;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    int32 InputNodeId;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    int32 InputObjectNodeId;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasChanged;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransformChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportAsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportAsReferenceRotScaleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeleteHoudiniNodes;
    
public:
    UHoudiniInputObject();
};

