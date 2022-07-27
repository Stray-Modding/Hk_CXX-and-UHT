#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARAltitudeSource.h"
#include "ARGeoAnchorUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARGeoAnchorUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadOnly)
    float Longitude;
    
    UPROPERTY(BlueprintReadOnly)
    float Latitude;
    
    UPROPERTY(BlueprintReadOnly)
    float AltitudeMeters;
    
    UPROPERTY(BlueprintReadOnly)
    EARAltitudeSource AltitudeSource;
    
    UPROPERTY(BlueprintReadOnly)
    FString AnchorName;
    
    AUGMENTEDREALITY_API FARGeoAnchorUpdatePayload();
};

