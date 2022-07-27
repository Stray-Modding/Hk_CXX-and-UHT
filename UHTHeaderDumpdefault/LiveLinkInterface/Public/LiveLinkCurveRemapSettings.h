#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSourceSettings.h"
#include "LiveLinkCurveConversionSettings.h"
#include "LiveLinkCurveRemapSettings.generated.h"

UCLASS(DefaultConfig)
class LIVELINKINTERFACE_API ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FLiveLinkCurveConversionSettings CurveConversionSettings;
    
    ULiveLinkCurveRemapSettings();
};

