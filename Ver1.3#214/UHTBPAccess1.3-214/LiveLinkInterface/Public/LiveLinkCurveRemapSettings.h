#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSourceSettings.h"
#include "LiveLinkCurveConversionSettings.h"
#include "LiveLinkCurveRemapSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class LIVELINKINTERFACE_API ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkCurveConversionSettings CurveConversionSettings;
    
    ULiveLinkCurveRemapSettings();
};

