#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkTransformStaticData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLocationSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsRotationSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsScaleSupported;
    
    FLiveLinkTransformStaticData();
};

