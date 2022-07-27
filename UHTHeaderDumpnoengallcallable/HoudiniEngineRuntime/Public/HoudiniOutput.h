#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHoudiniOutputType.h"
#include "HoudiniInstancedOutput.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniOutputObject.h"
#include "HoudiniOutput.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniOutput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniOutputType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInterface*> AssignementMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInterface*> ReplacementMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLandscapeWorldComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HoudiniCreatedSocketActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HoudiniAttachedSocketActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditableNode;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasEditableNodeBuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpdating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeleteHoudiniNodes;
    
public:
    UHoudiniOutput();
};

