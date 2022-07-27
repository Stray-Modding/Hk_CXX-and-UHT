#pragma once
#include "CoreMinimal.h"
#include "DataAsset.h"
#include "PerPlatformInt.h"
#include "PerPlatformBool.h"
#include "SkeletalMeshLODGroupSettings.h"
#include "SkeletalMeshLODSettings.generated.h"

UCLASS(DefaultConfig, MinimalAPI)
class USkeletalMeshLODSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FPerPlatformInt MinLOD;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FPerPlatformBool DisableBelowMinLodStripping;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bOverrideLODStreamingSettings;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FPerPlatformBool bSupportLODStreaming;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FPerPlatformInt MaxNumStreamedLODs;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FPerPlatformInt MaxNumOptionalLODs;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FSkeletalMeshLODGroupSettings> LODGroups;
    
public:
    USkeletalMeshLODSettings();
};

