#include "LuminARImageTrackingFunctionLibrary.h"

class UARSessionConfig;
class ULuminARCandidateImage;
class UTexture2D;

ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImageEx(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation) {
    return NULL;
}

ULuminARCandidateImage* ULuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(UARSessionConfig* SessionConfig, UTexture2D* CandidateTexture, const FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary) {
    return NULL;
}

ULuminARImageTrackingFunctionLibrary::ULuminARImageTrackingFunctionLibrary() {
}

