#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTransformStaticData.h"
#include "LiveLinkCameraStaticData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFieldOfViewSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAspectRatioSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFocalLengthSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsProjectionModeSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilmBackWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FilmBackHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsApertureSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFocusDistanceSupported;
    
    FLiveLinkCameraStaticData();
};

