#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTransformStaticData.h"
#include "LiveLinkLightStaticData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkLightStaticData : public FLiveLinkTransformStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsTemperatureSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsIntensitySupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLightColorSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsInnerConeAngleSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOuterConeAngleSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAttenuationRadiusSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSourceLenghtSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSourceRadiusSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSoftSourceRadiusSupported;
    
    FLiveLinkLightStaticData();
};

