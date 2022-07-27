#ifndef UE4SS_SDK_MagicLeapImageTracker_HPP
#define UE4SS_SDK_MagicLeapImageTracker_HPP

#include "MagicLeapImageTracker_enums.hpp"

class UMagicLeapImageTrackerComponent : public USceneComponent
{
    class UTexture2D* TargetImageTexture;
    FString Name;
    float LongerDimension;
    bool bIsStationary;
    bool bUseUnreliablePose;
    EMagicLeapImageTargetOrientation AxisOrientation;
    FMagicLeapImageTrackerComponentOnSetImageTargetSucceeded OnSetImageTargetSucceeded;
    void MagicLeapSetImageTargetSucceededMulti();
    FMagicLeapImageTrackerComponentOnSetImageTargetFailed OnSetImageTargetFailed;
    void MagicLeapSetImageTargetFailedMulti();
    FMagicLeapImageTrackerComponentOnImageTargetFound OnImageTargetFound;
    void MagicLeapImageTargetFoundMulti();
    FMagicLeapImageTrackerComponentOnImageTargetLost OnImageTargetLost;
    void MagicLeapImageTargetLostMulti();
    FMagicLeapImageTrackerComponentOnImageTargetUnreliableTracking OnImageTargetUnreliableTracking;
    void MagicLeapImageTargetUnreliableTrackingMulti(const FVector& LastTrackedLocation, const FRotator& LastTrackedRotation, const FVector& NewUnreliableLocation, const FRotator& NewUnreliableRotation);

    bool SetTargetAsync(class UTexture2D* ImageTarget);
    bool RemoveTargetAsync();
};

class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
    bool IsImageTrackingEnabled();
    int32 GetMaxSimultaneousTargets();
    void EnableImageTracking(bool bEnable);
};

struct FMagicLeapImageTargetState
{
    EMagicLeapImageTargetStatus TrackingStatus;
    FVector Location;
    FRotator Rotation;

};

struct FMagicLeapImageTargetSettings
{
    class UTexture2D* ImageTexture;
    FString Name;
    float LongerDimension;
    bool bIsStationary;
    bool bIsEnabled;

};

#endif
