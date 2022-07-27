#pragma once
#include "CoreMinimal.h"
#include "MagicLeapGraphicsClientPerformanceInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapHeadTrackingState.h"
#include "EMagicLeapHeadTrackingMapEvent.h"
#include "MagicLeapHMDFunctionLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class MAGICLEAP_API UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapHMDFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetStabilizationDepthActor(const AActor* InStabilizationDepthActor, bool bSetFocusActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetFocusActor(const AActor* InFocusActor, bool bSetStabilizationActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseRotation(const FRotator& InBaseRotation);
    
    UFUNCTION(BlueprintCallable)
    static void SetBasePosition(const FVector& InBasePosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseOrientation(const FQuat& InBaseOrientation);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAppReady();
    
    UFUNCTION(BlueprintPure)
    static bool IsRunningOnMagicLeapHMD();
    
    UFUNCTION(BlueprintPure)
    static int32 GetPlatformAPILevel();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMLSDKVersionRevision();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMLSDKVersionMinor();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMLSDKVersionMajor();
    
    UFUNCTION(BlueprintPure)
    static FString GetMLSDKVersion();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinimumAPILevel();
    
    UFUNCTION(BlueprintPure)
    static bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);
    
    UFUNCTION(BlueprintPure)
    static bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);
    
};

