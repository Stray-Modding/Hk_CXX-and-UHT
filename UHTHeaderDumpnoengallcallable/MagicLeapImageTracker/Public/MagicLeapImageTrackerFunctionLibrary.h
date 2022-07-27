#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapImageTrackerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPIMAGETRACKER_API UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapImageTrackerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsImageTrackingEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxSimultaneousTargets();
    
    UFUNCTION(BlueprintCallable)
    static void EnableImageTracking(bool bEnable);
    
};

