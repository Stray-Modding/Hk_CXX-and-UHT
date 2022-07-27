#ifndef UE4SS_SDK_BPL_GlobalFunctions_HPP
#define UE4SS_SDK_BPL_GlobalFunctions_HPP

class UBPL_GlobalFunctions_C : public UBlueprintFunctionLibrary
{

    void FindHKHUD(class UObject* __WorldContext, class ABP_HKHUD_C*& HUD);
    void Is Save in Progress(class UObject* __WorldContext, bool& IsSaveInProgress);
    void Start Global Dialog Class Free(TSubclassOf<class ADialog> Conversation, FText Speaker Name, class UObject* __WorldContext);
    void StartGlobalDialogFree(class ADialog* Conversation, FText Speaker Name, class UObject* __WorldContext);
    void GetHKSaveInstance(class UObject* __WorldContext, class UBP_HKSaveInstance_C*& SaveInstance);
    void GetUnlockedMemoriesPercentage(int32 Offset, class UObject* __WorldContext, int32& Percentage);
    void Open Unlocked Memory Widget(FName memoryId, class UObject* __WorldContext);
    void FindToolPostProcessFogSky(class UObject* __WorldContext, class ATool_PostpProcessFogSky_New_C*& PostProcessFogSky);
    void SetActorIdle(class AActor* Actor, class UAnimSequence* Animation, bool Skip Blend If Droid, class UObject* __WorldContext);
    void PopFadeToBlack(float FadeDuration, class UObject* __WorldContext);
    void PushFadeToBlack(float FadeDuration, class UObject* __WorldContext);
    void IsIngameCinematicModeEnabled(class UObject* __WorldContext, bool& Enabled);
    void PopIngameCinematicModeEnabled(float FadeTime, class UObject* __WorldContext);
    void PushIngameCinematicModeEnabled(float FadeTime, class UObject* __WorldContext);
    void FindPlayerBackpack(class UObject* __WorldContext, class ABP_Backpack_C*& Backpack);
    void GetStreamingGroupManager(class UObject* __WorldContext, class ABP_StreamingGroupManager_C*& StreamingGroupManager);
    void GetHKSessionSaveData(class UObject* __WorldContext, class UBP_HKSessionSaveData_C*& HKSessionSaveData);
    void GetHKGameInstance(class UObject* __WorldContext, class UBP_HKGameInstance_C*& HKGame Instance);
    void GetHKPersistentSaveData(class UObject* __WorldContext, class UBP_HKPersistentSaveData_C*& HKPersistentSaveData);
    void ForceWaitForStreamingAndLoading(float FadeOutTime, class UObject* __WorldContext);
    void UnsuspendGame(class UObject* __WorldContext);
    void SuspendGame(TEnumAsByte<EGameSuspendedReason> Reason, class UObject* __WorldContext);
    void FindPlayerDrone(class UObject* __WorldContext, class ABP_Drone_C*& Drone);
    void GetActorIdManager(class UObject* __WorldContext, class ABP_ActorIdManager_C*& ActorIdManager);
    void GetZoneManager(class UObject* __WorldContext, class ABP_ZoneManager_C*& ZoneManager);
    void Assert(bool Condition, FString Message, class UObject* __WorldContext);
    void Start Global Dialog Class(TSubclassOf<class ADialog> Conversation, FText Speaker Name, bool AllowMovement, class UObject* __WorldContext);
    void FindCameraManager(class UObject* __WorldContext, class ABP_HKPlayerCameraManager_C*& CameraManager);
    void FindItemInInventory(FName ID, class UObject* __WorldContext, class ULootableComponent*& Lootable);
    void IsItemInInventory(FName ID, class UObject* __WorldContext, bool& IsItemInInventory);
    void StartDialog(class UTalkableComponent* talkable, class UObject* __WorldContext);
    void Draw Vision Cone(float Vision Angle In Degrees, int32 Num Arc Segments, FVector Origin, FVector Direction, float Sight Radius, FLinearColor Line Color, float Thickness, float Duration, class UObject* __WorldContext);
    void Emit Gameplay Noise(class AActor* Emitter, FVector Origin, float Radius, float GrowingTime, float SustainTime, class UObject* __WorldContext);
    void Is Point In Cone(FVector Origin, FVector Direction, float Vision Angle In Degrees, float Sight Radius, FVector Test Point, class UObject* __WorldContext, bool& Return Value);
    void Is Point In Sphere(FVector Sphere Center, float Sphere Radius, FVector Test Point, class UObject* __WorldContext, bool& Return Value);
    void GetZurgManager(class UObject* __WorldContext, class ABP_ZurgManager_C*& Zurg Manager);
    void DampedRotatorLerp(FRotator Base, FRotator Target, float Ratio, float Delta Seconds, class UObject* __WorldContext, FRotator& Result);
    void StringToCharArray(FString String, class UObject* __WorldContext, TArray<int32>& CharArray);
    void StartGlobalDialog(class ADialog* Conversation, FText Speaker Name, bool AllowMovement, class UObject* __WorldContext);
    void ClampAngle(float Value, float Min, float Max, class UObject* __WorldContext, float& Out);
    void DampedLerp(float Base, float Target, float Ratio, float DeltaSeconds, class UObject* __WorldContext, float& Out);
    void FindHKPlayerController(class UObject* __WorldContext, class ABP_HKPlayerController_C*& HKPlayerController);
    void FindPlayerCatPawn(class UObject* __WorldContext, class ABP_CatPawn_C*& cat);
    void GetAudioManager(class UObject* __WorldContext, class ABP_AudioManager_C*& AudioManager);
}; // Size: 0x28

#endif
