#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EScreenLoggerVerbosity.h"
#include "ScreenLoggerSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class SCREENLOGGERRUNTIME_API UScreenLoggerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToScreenVerbosity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrintToScreenDuration;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EScreenLoggerVerbosity> PrintToConsoleVerbosity;
    
    UScreenLoggerSettings();
};

