#pragma once
#include "CoreMinimal.h"
#include "EMagicLeapPlaneQueryFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MagicLeapPlanesQuery.generated.h"

class UBoxComponent;

USTRUCT(BlueprintType)
struct MAGICLEAPPLANES_API FMagicLeapPlanesQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EMagicLeapPlaneQueryFlags> Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* SearchVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinHoleLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPlaneArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SearchVolumePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat SearchVolumeOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SearchVolumeExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SimilarityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSearchVolumeTrackingSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResultTrackingSpace;
    
    FMagicLeapPlanesQuery();
};

