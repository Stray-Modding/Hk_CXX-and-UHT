#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StreamableRenderAsset.generated.h"

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UStreamableRenderAsset : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    double ForceMipLevelsToBeResidentTimestamp;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 NumCinematicMipLevels;
    
protected:
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 StreamingIndex;
    
    UPROPERTY(Transient)
    int32 CachedCombinedLODBias;
    
public:
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    uint8 NeverStream: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bGlobalForceMipLevelsToBeResident: 1;
    
    UPROPERTY(NonTransactional, Transient)
    uint8 bHasStreamingUpdatePending: 1;
    
    UPROPERTY(Transient)
    uint8 bForceMiplevelsToBeResident: 1;
    
    UPROPERTY(Transient)
    uint8 bIgnoreStreamingMipBias: 1;
    
protected:
    UPROPERTY(Transient)
    uint8 bUseCinematicMipLevels: 1;
    
public:
    UStreamableRenderAsset();
};

