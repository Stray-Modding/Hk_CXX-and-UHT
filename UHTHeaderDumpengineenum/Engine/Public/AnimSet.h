#pragma once
#include "CoreMinimal.h"
#include "AnimSetMeshLinkup.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimSet.generated.h"

UCLASS(MinimalAPI)
class UAnimSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint8 bAnimRotationOnly: 1;
    
public:
    UPROPERTY()
    TArray<FName> TrackBoneNames;
    
private:
    UPROPERTY(Transient)
    TArray<FAnimSetMeshLinkup> LinkupCache;
    
    UPROPERTY(Transient)
    TArray<uint8> BoneUseAnimTranslation;
    
    UPROPERTY(Transient)
    TArray<uint8> ForceUseMeshTranslation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UseTranslationBoneNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ForceMeshTranslationBoneNames;
    
public:
    UPROPERTY()
    FName PreviewSkelMeshName;
    
    UPROPERTY()
    FName BestRatioSkelMeshName;
    
    UAnimSet();
};

