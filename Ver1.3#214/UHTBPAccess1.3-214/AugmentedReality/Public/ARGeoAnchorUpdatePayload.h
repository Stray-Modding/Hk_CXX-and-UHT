#pragma once
#include "CoreMinimal.h"
#include "EARAltitudeSource.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARGeoAnchorUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARGeoAnchorUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Longitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Latitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AltitudeMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARAltitudeSource AltitudeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnchorName;
    
    AUGMENTEDREALITY_API FARGeoAnchorUpdatePayload();
};

