#ifndef UE4SS_SDK_MagicLeapAR_HPP
#define UE4SS_SDK_MagicLeapAR_HPP

#include "MagicLeapAR_enums.hpp"

class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration);
};

class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool LuminARLineTrace(class UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults);
    ELuminARTrackingState GetTrackingState();
};

class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{

    class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation);
    class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};

class ALuminAROrigin : public AAROriginActor
{
    class UMRMeshComponent* MRMeshComponent;
    class UMaterialInterface* PlaneSurfaceMaterial;
    class UMaterialInterface* WireframeMaterial;

};

class ULuminARSessionConfig : public UARSessionConfig
{
    FMagicLeapPlanesQuery PlanesQuery;
    int32 MaxPlaneQueryResults;
    int32 MinPlaneArea;
    bool bArbitraryOrientationPlaneDetection;
    FVector PlaneSearchExtents;
    TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags;
    bool bDiscardZeroExtentPlanes;
    bool bDefaultUseUnreliablePose;

};

class ULuminARLightEstimate : public UARBasicLightEstimate
{
    TArray<float> AmbientIntensityNits;

    TArray<float> GetAmbientIntensityNits();
};

class ULuminARCandidateImage : public UARCandidateImage
{
    bool bUseUnreliablePose;
    bool bImageIsStationary;
    EMagicLeapImageTargetOrientation AxisOrientation;

    bool GetUseUnreliablePose();
    bool GetImageIsStationary();
    EMagicLeapImageTargetOrientation GetAxisOrientation();
};

#endif
