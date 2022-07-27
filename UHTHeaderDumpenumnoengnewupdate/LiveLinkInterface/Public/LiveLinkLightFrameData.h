#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "LiveLinkTransformFrameData.h"
#include "LiveLinkLightFrameData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkLightFrameData : public FLiveLinkTransformFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float InnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float OuterConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SoftSourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SourceLength;
    
    FLiveLinkLightFrameData();
};

