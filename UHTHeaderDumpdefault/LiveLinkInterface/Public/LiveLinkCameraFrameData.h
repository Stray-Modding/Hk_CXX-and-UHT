#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTransformFrameData.h"
#include "ELiveLinkCameraProjectionMode.h"
#include "LiveLinkCameraFrameData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Aperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    ELiveLinkCameraProjectionMode ProjectionMode;
    
    FLiveLinkCameraFrameData();
};

