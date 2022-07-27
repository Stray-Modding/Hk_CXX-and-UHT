#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapGraphicsClientPerformanceInfo.h"
#include "EMagicLeapHeadTrackingMapEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MagicLeapHeadTrackingState.h"
#include "MagicLeapHMDFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunningOnMagicLeapHMD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlatformAPILevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMLSDKVersionRevision();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMLSDKVersionMinor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMLSDKVersionMajor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMLSDKVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMinimumAPILevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);
    
};

