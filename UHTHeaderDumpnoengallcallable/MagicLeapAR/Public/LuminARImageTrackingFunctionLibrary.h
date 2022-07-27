#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MagicLeapImageTracker -ObjectName=EMagicLeapImageTargetOrientation -FallbackName=EMagicLeapImageTargetOrientation
#include "LuminARImageTrackingFunctionLibrary.generated.h"

class UTexture2D;
class ULuminARCandidateImage;
class UARSessionConfig;

UCLASS(Blueprintable)
class MAGICLEAPAR_API ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuminARImageTrackingFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation);
    
    UFUNCTION(BlueprintCallable)
    static ULuminARCandidateImage* AddLuminRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
    
};

