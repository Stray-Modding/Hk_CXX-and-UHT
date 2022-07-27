#ifndef UE4SS_SDK_BP_Backpack_HPP
#define UE4SS_SDK_BP_Backpack_HPP

class ABP_Backpack_C : public ABackpack
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class UAudioComponent* Vibration_On_Controller;                                   // 0x03F8 (size: 0x8)
    class UAudioComponent* Audio_On_Controller;                                       // 0x0400 (size: 0x8)
    class UStaticMeshComponent* Badge_PoliceStation;                                  // 0x0408 (size: 0x8)
    class UStaticMeshComponent* Badge_ShopSafe;                                       // 0x0410 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0418 (size: 0x8)
    class UStaticMeshComponent* Badge_Plant;                                          // 0x0420 (size: 0x8)
    class UStaticMeshComponent* Badge_Music;                                          // 0x0428 (size: 0x8)
    class UStaticMeshComponent* Badge_Trashzone;                                      // 0x0430 (size: 0x8)
    class UStaticMeshComponent* Badge_Outsider;                                       // 0x0438 (size: 0x8)
    class UArrowComponent* DefaultDialogDroneSocket;                                  // 0x0440 (size: 0x8)
    class UAudioComponent* b12_radio_sin_loop_01;                                     // 0x0448 (size: 0x8)
    class UAudioComponent* b_12_actual_radio_noise_loop_01;                           // 0x0450 (size: 0x8)
    class USceneComponent* B12HelpDroneSocket;                                        // 0x0458 (size: 0x8)
    class USceneComponent* ItemRendererAttach;                                        // 0x0460 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0468 (size: 0x8)
    class UWidgetComponent* BackpackScreen;                                           // 0x0470 (size: 0x8)
    class UArrowComponent* DroneFolded;                                               // 0x0478 (size: 0x8)
    class UCOMP_Voice_C* B12VoiceComponent;                                           // 0x0480 (size: 0x8)
    bool HasPendingDialog;                                                            // 0x0488 (size: 0x1)
    float currentRadioSinPitch;                                                       // 0x048C (size: 0x4)
    float phasor;                                                                     // 0x0490 (size: 0x4)
    float radioSinFreq;                                                               // 0x0494 (size: 0x4)
    class ABP_ItemRenderer_C* ItemRenderer;                                           // 0x0498 (size: 0x8)
    class ULootableComponent* HelpWantedItem;                                         // 0x04A0 (size: 0x8)
    FVector Droid Head Init Location;                                                 // 0x04A8 (size: 0xC)
    class UMaterialInstanceDynamic* ScreenDynaMat;                                    // 0x04B8 (size: 0x8)
    class UMaterialInstanceDynamic* MaterializeDynaMat;                               // 0x04C0 (size: 0x8)
    TArray<class UStaticMeshComponent*> Badges;                                       // 0x04C8 (size: 0x10)

    void CheckUnlockChromeBackpack();
    void UnlockBadge(TEnumAsByte<ENUM_Badges> Badges);
    void ShouldTalkableTalk(class UTalkableComponent* TalkableComponent, bool& ShouldTalk);
    void GetB12HelpDroneSocket(class USceneComponent*& SceneComponent, FName& Socket);
    class USceneComponent* GetDialogDroneSocket(FName& _socketName);
    void GetItemRenderer(class ABP_ItemRenderer_C*& ItemRenderer);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA67183F23();
    void Tick_6246EF4646E19036986D72BA67183F23(float Ratio);
    void Complete_6246EF4646E19036986D72BA5FCCB240();
    void Tick_6246EF4646E19036986D72BA5FCCB240(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void StartRadioLoop();
    void StopRadioLoop();
    void OnHelpWanted();
    void OnEquipped();
    void UpdateB12CallDroneSocket();
    void ReceiveBeginPlay();
    void UpdateDefaultDroneSocket();
    void Adjust Drone Location();
    void On Help Wanted With Item(class ULootableComponent* Item);
    void OnDialogBegan(class ABackpack* _backpack, class ADialog* _dialog);
    void OnBeforeInteractionStarted(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    void OnBeforeInteractionStopped(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    void OnDialogLineBegan(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void OnDialogLineDisplayed(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void OnDialogLineEnded(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void OnBackpackMeshVisible();
    void OnBackpackMeshInvisible();
    void OnB12NotificationPushed();
    void OnB12NotificationCleared();
    void OnB12ItemDialogEnded(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void RefreshBadgesVisibility();
    void MaterializeBackpack(bool HideDrone ?);
    void DematerializeBackpack(bool Disable_Backpack_After);
    void RefreshBackpackVisual(bool Instant);
    void SetBadgesVisible(bool Visible);
    void ExecuteUbergraph_BP_Backpack(int32 EntryPoint);
}; // Size: 0x4D8

#endif
