#ifndef UE4SS_SDK_BP_Backpack_HPP
#define UE4SS_SDK_BP_Backpack_HPP

class ABP_Backpack_C : public ABackpack
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Vibration_On_Controller;
    class UAudioComponent* Audio_On_Controller;
    class UStaticMeshComponent* Badge_PoliceStation;
    class UStaticMeshComponent* Badge_ShopSafe;
    class USaveComponent* Save;
    class UStaticMeshComponent* Badge_Plant;
    class UStaticMeshComponent* Badge_Music;
    class UStaticMeshComponent* Badge_Trashzone;
    class UStaticMeshComponent* Badge_Outsider;
    class UArrowComponent* DefaultDialogDroneSocket;
    class UAudioComponent* b12_radio_sin_loop_01;
    class UAudioComponent* b_12_actual_radio_noise_loop_01;
    class USceneComponent* B12HelpDroneSocket;
    class USceneComponent* ItemRendererAttach;
    class UPointLightComponent* PointLight;
    class UWidgetComponent* BackpackScreen;
    class UArrowComponent* DroneFolded;
    class UCOMP_Voice_C* B12VoiceComponent;
    bool HasPendingDialog;
    float currentRadioSinPitch;
    float phasor;
    float radioSinFreq;
    class ABP_ItemRenderer_C* ItemRenderer;
    class ULootableComponent* HelpWantedItem;
    FVector Droid Head Init Location;
    class UMaterialInstanceDynamic* ScreenDynaMat;
    class UMaterialInstanceDynamic* MaterializeDynaMat;
    TArray<class UStaticMeshComponent*> Badges;

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
};

#endif
