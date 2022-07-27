#ifndef UE4SS_SDK_MagicLeapARPin_HPP
#define UE4SS_SDK_MagicLeapARPin_HPP

#include "MagicLeapARPin_enums.hpp"

struct FMagicLeapARPinState
{
    float Confidence;
    float ValidRadius;
    float RotationError;
    float TranslationError;
    EMagicLeapARPinType PinType;

};

class UMagicLeapARPinComponent : public USceneComponent
{
    FString ObjectUID;
    int32 UserIndex;
    EMagicLeapAutoPinType AutoPinType;
    bool bShouldPinActor;
    TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass;
    TSet<EMagicLeapARPinType> SearchPinTypes;
    class USphereComponent* SearchVolume;
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;
    void PersistentEntityPinned(bool bRestoredOrSynced);
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;
    void PersistentEntityPinLost();
    FMagicLeapARPinComponentOnPinDataLoadAttemptCompleted OnPinDataLoadAttemptCompleted;
    void MagicLeapARPinDataLoadAttemptCompleted(bool bDataRestored);
    FGuid PinnedCFUID;
    class USceneComponent* PinnedSceneComponent;
    class UMagicLeapARPinSaveGame* PinData;

    void UnPin();
    class UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> InPinDataClass, bool& OutPinDataValid);
    bool PinToRestoredOrSyncedID();
    bool PinToID(const FGuid& PinId);
    void PinToBestFit();
    bool PinSceneComponent(class USceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(class AActor* ActorToPin);
    void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
    void PersistentEntityPinLost__DelegateSignature();
    void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);
    bool IsPinned();
    bool GetPinState(FMagicLeapARPinState& State);
    bool GetPinnedPinID(FGuid& PinId);
    class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
    void AttemptPinDataRestorationAsync();
    bool AttemptPinDataRestoration();
};

struct FMagicLeapARPinQuery
{
    TSet<EMagicLeapARPinType> Types;
    int32 MaxResults;
    FVector TargetPoint;
    float Radius;
    bool bSorted;

};

class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UnBindToOnMagicLeapContentBindingFoundDelegate(const FUnBindToOnMagicLeapContentBindingFoundDelegateDelegate& Delegate);
    void UnBindToOnMagicLeapARPinUpdatedDelegate(const FUnBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
    EMagicLeapPassableWorldError SetGlobalQueryFilter(const FMagicLeapARPinQuery& InGlobalFilter);
    void SetContentBindingSaveGameUserIndex(int32 UserIndex);
    EMagicLeapPassableWorldError QueryARPins(const FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);
    bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId);
    bool IsTrackerValid();
    EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);
    int32 GetContentBindingSaveGameUserIndex();
    EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinId);
    EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    FString GetARPinStateToString(const FMagicLeapARPinState& State);
    EMagicLeapPassableWorldError GetARPinState(const FGuid& PinId, FMagicLeapARPinState& State);
    bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    bool GetARPinPositionAndOrientation(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    EMagicLeapPassableWorldError DestroyTracker();
    EMagicLeapPassableWorldError CreateTracker();
    void BindToOnMagicLeapContentBindingFoundDelegate(const FBindToOnMagicLeapContentBindingFoundDelegateDelegate& Delegate);
    void BindToOnMagicLeapARPinUpdatedDelegate(const FBindToOnMagicLeapARPinUpdatedDelegateDelegate& Delegate);
    FString ARPinIdToString(const FGuid& ARPinId);
};

class AMagicLeapARPinInfoActorBase : public AActor
{
    FGuid PinId;
    bool bVisibilityOverride;

    void OnUpdateARPinState();
};

class AMagicLeapARPinRenderer : public AActor
{
    bool bInfoActorsVisibilityOverride;
    TMap<class FGuid, class AMagicLeapARPinInfoActorBase*> AllInfoActors;
    TSubclassOf<class AMagicLeapARPinInfoActorBase> ClassToSpawn;

    void SetVisibilityOverride(const bool InVisibilityOverride);
};

class UMagicLeapARPinSettings : public UObject
{
    float UpdateCheckFrequency;
    FMagicLeapARPinState OnUpdatedEventTriggerDelta;

};

class UMagicLeapARPinSaveGame : public USaveGame
{
    FGuid PinnedID;
    FTransform ComponentWorldTransform;
    FTransform PinTransform;
    bool bShouldPinActor;

};

struct FMagicLeapARPinObjectIdList
{
    TSet<FString> ObjectIdList;

};

class UMagicLeapARPinContentBindings : public USaveGame
{
    TMap<class FGuid, class FMagicLeapARPinObjectIdList> AllContentBindings;

};

#endif
