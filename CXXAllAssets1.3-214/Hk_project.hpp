#ifndef UE4SS_SDK_Hk_project_HPP
#define UE4SS_SDK_Hk_project_HPP

#include "Hk_project_enums.hpp"

class UHKSubsystemSettings : public UObject
{
}; // Size: 0x28

class UAchievementSettings : public UHKSubsystemSettings
{
    uint32 MeowTarget;                                                                // 0x0028 (size: 0x4)
    uint32 jumpTarget;                                                                // 0x002C (size: 0x4)
    uint32 SleepTargetMinutes;                                                        // 0x0030 (size: 0x4)
    uint32 BasketballsDunkedTarget;                                                   // 0x0034 (size: 0x4)
    uint32 ZurgPursuitCompletedWithoutTouchTarget;                                    // 0x0038 (size: 0x4)
    uint32 SentinelPatternCompletedWithoutDetectionTarget;                            // 0x003C (size: 0x4)
    uint32 DeathTarget;                                                               // 0x0040 (size: 0x4)
    uint32 ClubVinylScratchedTarget;                                                  // 0x0044 (size: 0x4)
    uint32 SewersCompletedWithoutKillTarget;                                          // 0x0048 (size: 0x4)
    uint32 GameCompleteTargetMinutes;                                                 // 0x004C (size: 0x4)
    uint32 AAKingMusicSheetsTarget;                                                   // 0x0050 (size: 0x4)
    uint32 PaperBagWornTarget;                                                        // 0x0054 (size: 0x4)
    uint32 TriedToPlayMahjongTarget;                                                  // 0x0058 (size: 0x4)
    uint32 RobotsRubbedAgainstTarget;                                                 // 0x005C (size: 0x4)
    uint32 TVChannelsWatchedTarget;                                                   // 0x0060 (size: 0x4)
    uint32 CollectedBadgesTarget;                                                     // 0x0064 (size: 0x4)

}; // Size: 0x70

class UHKGameSubsystem : public UGameInstanceSubsystem
{
    class UHKSubsystemSettings* m_settings;                                           // 0x0038 (size: 0x8)

}; // Size: 0x48

class UAchievementSubsystem : public UHKGameSubsystem
{
}; // Size: 0xB8

struct FActivity
{
    EActivity ID;                                                                     // 0x0000 (size: 0x1)
    EChapter Chapter;                                                                 // 0x0001 (size: 0x1)
    TArray<EObjective> Objectives;                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

class UActivityData : public UPrimaryDataAsset
{
    TArray<FActivity> Activities;                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

class UActivitySettings : public UHKSubsystemSettings
{
    class UActivityData* ActivityData;                                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class UActivitySubsystem : public UHKGameSubsystem
{

    void SetObjectiveRevealed(EObjective _id);
    void SetObjectiveComplete(EObjective _id);
    void _OnChapterChanged(class UChapterSubsystem* _chapterSubsystem, EChapter _previousChapter, EChapter _currentChapter, bool _isOpeningChapter);
}; // Size: 0x118

class UActorIdComponent : public UActorComponent
{
    FName m_id;                                                                       // 0x00B0 (size: 0x8)

}; // Size: 0xC0

class AActorIdManager : public AManager
{

    class AActor* FindActorById(FName _actorId, class AActor* _callingActor);
}; // Size: 0x278

class UAnimNotify_SoundEvent : public UAnimNotify
{
    FName EventName;                                                                  // 0x0038 (size: 0x8)
    float Velocity;                                                                   // 0x0040 (size: 0x4)

    void SetVelocity(float _velocity);
    void SetEventName(FName _eventName);
}; // Size: 0x48

class UAntiZurgLightableComponent : public USphereComponent
{
    class AZurgManager* m_zurgManager;                                                // 0x0470 (size: 0x8)
    class ULifeComponent* m_ownerLifeComponent;                                       // 0x0478 (size: 0x8)

}; // Size: 0x480

class UAntiZurgSpotlightComponent : public USpotLightComponent
{
    bool m_canRepulseZurgs;                                                           // 0x0360 (size: 0x1)
    bool m_useDynamicObstacle;                                                        // 0x0361 (size: 0x1)
    bool m_applyDamage;                                                               // 0x0362 (size: 0x1)
    float m_damageToApplyPerDelay;                                                    // 0x0364 (size: 0x4)
    float m_damageApplicationDelayInSecond;                                           // 0x0368 (size: 0x4)
    bool m_drawDebug;                                                                 // 0x036C (size: 0x1)
    TSubclassOf<class UNavAreaBase> m_obstacleNavigationArea;                         // 0x0370 (size: 0x8)
    bool m_traceEveryFrame;                                                           // 0x0378 (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_lightTraceChannel;                               // 0x0379 (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;                              // 0x037A (size: 0x1)
    TEnumAsByte<ECollisionChannel> m_obstacleSphereOverlappChannel;                   // 0x037B (size: 0x1)
    class USphereComponent* m_obstacleSphereComponent;                                // 0x0380 (size: 0x8)
    class UCurveFloat* m_radialDamageCurve;                                           // 0x0468 (size: 0x8)
    class UCurveFloat* m_distanceDamageCurve;                                         // 0x0470 (size: 0x8)

    void SetRadialDamageCurve(class UCurveFloat* _newRadialDamageCurve);
    void SetDistanceDamageCurve(class UCurveFloat* _newDistanceDamageCurve);
    void SetDamageToApplyPerTime(float _damageToApplyPerTime);
    void SetDamageApplicationTime(float _damageToApplyPerTime);
    void SetCanRepulseZurgs(bool _canRepulseZurg);
    void SetApplyDamage(bool _applyDamage);
    bool IsPointVisibleByLight(FVector _location, FBox _ownerBox, class AActor* _actorToIgnore);
    TArray<FHitResult> GetSpotLightHitResults();
    class USphereComponent* GetSphereObstacleComponent();
    class UCurveFloat* GetRadialDamageCurve();
    class UCurveFloat* GetDistanceDamageCurve();
    float GetDamageToApplyPerTime();
    float GetDamageApplicationTime();
    void FindBestVisiblePointBySpotlight(FVector& _result, const FBox _box);
    float ComputePointLightingRatio(FVector _pointLocation);
    bool CanRepulseZurgs();
    bool CanApplyDamage();
    void _OnObstacleSphereOverlapEnd(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnObstacleSphereOverlapBegin(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void _OnLightableOwnerEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
}; // Size: 0x4B0

class UAntiZurgZoneComponent : public USphereComponent
{
    TSubclassOf<class UNavAreaBase> m_navArea;                                        // 0x0478 (size: 0x8)

    void SetSpotlightOwner(class UAntiZurgSpotlightComponent* _newSpotlight);
    class UAntiZurgSpotlightComponent* GetSpotLightOwner();
    void _OnSphereEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void _OnSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x480

class UAudioHolder : public USceneComponent
{
    int32 AudioComponentCount;                                                        // 0x01F8 (size: 0x4)
    float MovementSnappingDistance;                                                   // 0x01FC (size: 0x4)
    TArray<class UAudioComponent*> m_audioComponents;                                 // 0x0200 (size: 0x10)
    class APlayerCameraManager* m_cameraManager;                                      // 0x0210 (size: 0x8)

    void SetHolderCollisionRadius(float _radius);
    void SetHolderCollisionEnabled(bool _enabled);
    void OnHolderEndOverlapCamera(class AActor* _otherActor);
    void OnHolderBeginOverlapCamera(class AActor* _otherActor);
    bool IsHolderCollisionEnabled();
    class UAudioComponent* GetHolderAudio(uint8 _index);
}; // Size: 0x220

class AAudioManager : public AManager
{
    int32 m_maxAudioHolderTicksPerFrame;                                              // 0x0228 (size: 0x4)

}; // Size: 0x250

class UHKUserWidget : public UUserWidget
{
}; // Size: 0x2F0

class UAudioSettingsWidget : public UHKUserWidget
{
    class USliderBoxWidget* MasterVolumeSliderBox;                                    // 0x02F0 (size: 0x8)
    class USliderBoxWidget* MusicVolumeSliderBox;                                     // 0x02F8 (size: 0x8)
    class USliderBoxWidget* EffectsVolumeSliderBox;                                   // 0x0300 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0308 (size: 0x8)
    class UHKButton* DefaultsButton;                                                  // 0x0310 (size: 0x8)
    class UHKButton* TabLeftButton;                                                   // 0x0318 (size: 0x8)
    class UHKButton* TabRightButton;                                                  // 0x0320 (size: 0x8)
    class UHKTextBlock* SwitchTabTextBlock;                                           // 0x0328 (size: 0x8)
    FText m_resetToDefaultsDialogText;                                                // 0x0330 (size: 0x18)

}; // Size: 0x3A0

struct FB12MemoryData
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    FText Description;                                                                // 0x0008 (size: 0x18)
    class UTexture2D* LockedIcon;                                                     // 0x0020 (size: 0x8)
    class UTexture2D* UnlockedIcon;                                                   // 0x0028 (size: 0x8)
    TSubclassOf<class AActor> UnlockedActor;                                          // 0x0030 (size: 0x8)
    class UTexture2D* LockedBackground;                                               // 0x0038 (size: 0x8)
    class UTexture2D* Background;                                                     // 0x0040 (size: 0x8)
    TSubclassOf<class ADialog> Dialog;                                                // 0x0048 (size: 0x8)

}; // Size: 0x50

class UB12Memories : public UPrimaryDataAsset
{
    TArray<FB12MemoryData> MainMemories;                                              // 0x0030 (size: 0x10)
    TArray<FB12MemoryData> Memories;                                                  // 0x0040 (size: 0x10)

    int32 GetMemoryCount();
    void FindMemoryIndex(FName _memoryId, int32& _outMainIndex, int32& _outSideIndex);
    bool FindMemoryData(FName _memoryId, FB12MemoryData& _outMemoryData);
}; // Size: 0x50

struct FBackpackScreenEntry
{
    TSubclassOf<class UBackpackScreenUserWidget> Class;                               // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FDialogLineSynchronizedActor
{
    class AActor* Actor;                                                              // 0x0000 (size: 0x8)
    TArray<class UAnimSequence*> ActorAnimations;                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FDialogLineSynchronized
{
    TArray<class UAnimSequence*> Animations;                                          // 0x0000 (size: 0x10)
    TArray<FDialogLineSynchronizedActor> ActorsSynchronizedAnimations;                // 0x0010 (size: 0x10)
    bool KeepLastAnimAsIdle;                                                          // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FDialogLineAdvanced
{
    class UAnimSequence* Animation;                                                   // 0x0000 (size: 0x8)
    FDialogLineSynchronized Synchronized;                                             // 0x0008 (size: 0x28)
    bool IsSynchronized;                                                              // 0x0030 (size: 0x1)
    bool LoopAnimation;                                                               // 0x0031 (size: 0x1)
    class UMaterialInstance* ScreenMaterial;                                          // 0x0038 (size: 0x8)
    TEnumAsByte<EDialogOrientationMode> LookAtMode;                                   // 0x0040 (size: 0x1)
    class AActor* LookAtActor;                                                        // 0x0048 (size: 0x8)
    TEnumAsByte<EDialogOrientationMode> TurnTowardsMode;                              // 0x0050 (size: 0x1)
    class AActor* TurnTowardsActor;                                                   // 0x0058 (size: 0x8)
    class AActor* ShowDirectionActor;                                                 // 0x0060 (size: 0x8)
    class AActor* DroneTargetTransform;                                               // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FDialogLine
{
    FText Text;                                                                       // 0x0000 (size: 0x18)
    bool EndDialog;                                                                   // 0x0018 (size: 0x1)
    TSubclassOf<class AActor> ItemToGive;                                             // 0x0020 (size: 0x8)
    FName MemoryToShow;                                                               // 0x0028 (size: 0x8)
    FDialogLineAdvanced Advanced;                                                     // 0x0030 (size: 0x70)

}; // Size: 0xA0

class ABackpack : public AActor
{
    FBackpackPendingDialogBegan PendingDialogBegan;                                   // 0x0228 (size: 0x10)
    void BackpackAction(class ABackpack* _backpack);
    FBackpackPendingDialogEnded PendingDialogEnded;                                   // 0x0238 (size: 0x10)
    void BackpackAction(class ABackpack* _backpack);
    FBackpackDialogBegan DialogBegan;                                                 // 0x0248 (size: 0x10)
    void DialogAction(class ABackpack* _backpack, class ADialog* _dialog);
    FBackpackDialogLineBegan DialogLineBegan;                                         // 0x0258 (size: 0x10)
    void DialogAction(class ABackpack* _backpack, class ADialog* _dialog);
    FBackpackDialogEnded DialogEnded;                                                 // 0x0268 (size: 0x10)
    void DialogAction(class ABackpack* _backpack, class ADialog* _dialog);
    FBackpackAddedObjectToInventory AddedObjectToInventory;                           // 0x0278 (size: 0x10)
    void LootAction(class ABackpack* _backpack, class ULootableComponent* _loot);
    FBackpackRemovedObjectFromInventory RemovedObjectFromInventory;                   // 0x0288 (size: 0x10)
    void LootAction(class ABackpack* _backpack, class ULootableComponent* _loot);
    FBackpackEmptyInteractionTriggered EmptyInteractionTriggered;                     // 0x0298 (size: 0x10)
    void BackpackAction(class ABackpack* _backpack);
    FBackpackUseStarted UseStarted;                                                   // 0x02A8 (size: 0x10)
    void UseAction(class ABackpack* _backpack, class UBackpackUsableComponent* _loot);
    FBackpackUseEnded UseEnded;                                                       // 0x02B8 (size: 0x10)
    void UseAction(class ABackpack* _backpack, class UBackpackUsableComponent* _loot);
    FBackpackDroneSet DroneSet;                                                       // 0x02C8 (size: 0x10)
    void BackpackDroneAction(class ABackpack* _backpack, class ADrone* _drone);
    FBackpackDroneUnset DroneUnset;                                                   // 0x02D8 (size: 0x10)
    void BackpackDroneAction(class ABackpack* _backpack, class ADrone* _drone);
    class USkeletalMeshComponent* m_mesh;                                             // 0x02E8 (size: 0x8)
    class UWidgetComponent* m_screenWidgetComponent;                                  // 0x02F0 (size: 0x8)
    class UTalkableComponent* m_talkable;                                             // 0x02F8 (size: 0x8)
    class ACatPawn* m_catPawn;                                                        // 0x0300 (size: 0x8)
    class ADrone* M_Drone;                                                            // 0x0308 (size: 0x8)
    class ABackpackGUI* m_GUI;                                                        // 0x0310 (size: 0x8)
    class UPrimitiveComponent* m_interactionCollider;                                 // 0x0320 (size: 0x8)
    bool m_isBackpackMeshVisible;                                                     // 0x0328 (size: 0x1)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0330 (size: 0x8)
    TEnumAsByte<ECollisionChannel> m_interactCollisionChannel;                        // 0x0338 (size: 0x1)
    TSubclassOf<class AIEM> m_IEMClass;                                               // 0x0340 (size: 0x8)
    class ADialog* m_currentDialog;                                                   // 0x0358 (size: 0x8)
    float m_pendingDialogRingTime;                                                    // 0x0360 (size: 0x4)
    float m_interactionDetectionLossTime;                                             // 0x0364 (size: 0x4)
    uint8 m_B12HelpDisabledCount;                                                     // 0x0368 (size: 0x1)
    uint8 m_showItemToB12DisabledCount;                                               // 0x0369 (size: 0x1)
    uint8 m_exitDialogDisabledCount;                                                  // 0x036A (size: 0x1)
    TArray<class ULootableComponent*> m_inventory;                                    // 0x0370 (size: 0x10)
    TArray<class TSubclassOf<AActor>> m_savedInventory;                               // 0x0380 (size: 0x10)
    uint16 m_disableInventoryMenu;                                                    // 0x0390 (size: 0x2)
    TArray<class UPhoto*> m_photos;                                                   // 0x0398 (size: 0x10)
    class AHKHUD* m_HUD;                                                              // 0x03A8 (size: 0x8)
    TArray<FBackpackScreenEntry> m_backpackScreenStack;                               // 0x03B0 (size: 0x10)
    TSubclassOf<class UBackpackScreenUserWidget> m_defaultBackpackScreenWidgetClass;  // 0x03C0 (size: 0x8)
    TSubclassOf<class UBackpackScreenUserWidget> m_IEMBackpackScreenWidgetClass;      // 0x03C8 (size: 0x8)
    TSubclassOf<class UBackpackScreenUserWidget> m_notificationScreenWidgetClass;     // 0x03D0 (size: 0x8)
    TSubclassOf<class UBackpackScreenUserWidget> m_usableBackpackScreenWidgetClass;   // 0x03D8 (size: 0x8)
    TSubclassOf<class UBackpackScreenUserWidget> m_talkableBackpackScreenWidgetClass; // 0x03E0 (size: 0x8)
    class USoundBase* m_defaultStartInteractionSound;                                 // 0x03E8 (size: 0x8)

    void UseAction__DelegateSignature(class ABackpack* _backpack, class UBackpackUsableComponent* _loot);
    void Use(class UBackpackUsableComponent* _usable);
    void UpdateScreenWidget(FName _id, TSubclassOf<class UBackpackScreenUserWidget> _class);
    void UnchargeIEM();
    void StopUse();
    void SetShowItemToB12Enabled(bool _enabled);
    void SetExitDialogEnabled(bool _enabled);
    void SetBackpackMeshVisible(bool _visible);
    void SetB12HelpEnabled(bool _enabled);
    void SendExternalDialogClass(TSubclassOf<class ADialog> _dialogClass, FText _speakerName, TEnumAsByte<EDialogMovementMode> _movementMode);
    void SendExternalDialog(class ADialog* _dialog, FText _speakerName, TEnumAsByte<EDialogMovementMode> _movementMode);
    void RemoveObjectFromInventory(class ULootableComponent* _lootable, FVector _position, FRotator _rotation);
    void PushScreenWidget(FName _id, TSubclassOf<class UBackpackScreenUserWidget> _class, int32 _priority);
    void PushInteractionDisabled();
    void PushB12Notification();
    void PopScreenWidget(FName _id);
    void PopInteractionDisabled();
    void OpenGUI(TSubclassOf<class UUserWidget> _widgetClass);
    void OnUnequipped();
    void OnToggleLight();
    void OnHelpWanted();
    void OnEquipped();
    void OnBackpackMeshVisible();
    void OnBackpackMeshInvisible();
    void OnB12NotificationPushed();
    void OnB12NotificationCleared();
    void LootAction__DelegateSignature(class ABackpack* _backpack, class ULootableComponent* _loot);
    bool IsWithinHelpDialog();
    bool IsWithinDialog();
    bool IsShowItemToB12Enabled();
    bool IsInventoryMenuEnabled();
    bool IsInteractionEnabled();
    bool IsInteracting();
    bool IsGUIOpen();
    bool IsExitDialogEnabled();
    bool IsBackpackMeshVisible();
    bool IsB12HelpEnabled();
    void InstantiateAndAddActorToInventory(TSubclassOf<class AActor> _itemClass);
    void IEM();
    bool HasIEM();
    class UTalkableComponent* GetTalkableComponent();
    float GetRemainingIEMTime();
    TArray<class UPhoto*> GetPhotoCatalog();
    class USkeletalMeshComponent* GetMesh();
    TArray<class ULootableComponent*> GetInventory();
    float GetIEMDuration();
    class ABackpackGUI* GetGUI();
    class ADrone* GetDrone();
    class USceneComponent* GetDialogDroneSocket(FName& _socketName);
    class USoundBase* GetDefaultStartInteractionSound();
    class UBackpackUsableComponent* GetCurrentInteraction();
    class ADialog* GetCurrentDialog();
    class UBackpackUsableComponent* GetCurrentClosestInteraction();
    class ACatPawn* GetCatPawn();
    class ULootableComponent* FindItemInInventory(FName ID);
    void EnableInventoryMenu();
    void DisableInventoryMenu();
    void DialogAction__DelegateSignature(class ABackpack* _backpack, class ADialog* _dialog);
    void CloseGUI();
    void ClearInventory();
    void ClearB12Notification();
    void ChargeIEM(float _duration);
    void BeforeSaved();
    void BackpackDroneAction__DelegateSignature(class ABackpack* _backpack, class ADrone* _drone);
    void BackpackAction__DelegateSignature(class ABackpack* _backpack);
    void AfterLoaded();
    void AddObjectToInventory(class ULootableComponent* _lootable);
    void _OnInventoryActorEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    void _OnIEMPressed();
    void _OnHUDEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    void _OnHelpPressed();
    void _OnDroneGUIOpened(class ADrone* _drone);
    void _OnDroneGUIClosed(class ADrone* _drone);
    void _OnDialogLineBegan(class UTalkableComponent* _talkable, const FDialogLine& _line);
    void _OnDialogEnded(class UTalkableComponent* _talkable);
    void _OnDialogBegan(class UTalkableComponent* _talkable);
    void _OnCatUnpossessed(class ACatPawn* _cat, class AHKPlayerController* _playerController);
    void _OnCatPossessed(class ACatPawn* _cat, class AHKPlayerController* _playerController);
}; // Size: 0x3F0

class ABackpackGUI : public AActor
{
    float m_GUIInputDeadZone;                                                         // 0x026C (size: 0x4)

    void StartDialog(class AActor* _droid);
    void SetGUIMode(TEnumAsByte<EBackpackGUIMode> _mode);
    void OnYPressed(bool& _handled);
    void OnXPressed(bool& _handled);
    void OnValidatePressed(bool& _handled);
    void OnUpPressed(bool& _handled);
    void OnUpdateInventory(const TArray<class ULootableComponent*>& _inventory);
    void OnRightVerticalAxis(float _value, bool& _handled);
    void OnRightPressed(bool& _handled);
    void OnRightHorizontalAxis(float _value, bool& _handled);
    void OnRBPressed(bool& _handled);
    void OnPhotoCatalogUpdated(const TArray<class UPhoto*>& _photoCatalog);
    void OnOpened();
    void OnLeftPressed(bool& _handled);
    void OnLBPressed(bool& _handled);
    void OnGUIModeChanged();
    void OnGUIInputNotHandled();
    void OnGUIInputHandled();
    void OnDpadUpPressed(bool& _handled);
    void OnDpadRightPressed(bool& _handled);
    void OnDpadLeftPressed(bool& _handled);
    void OnDpadDownPressed(bool& _handled);
    void OnDownPressed(bool& _handled);
    void OnClosed();
    void OnCancelPressed(bool& _handled);
    void OnBackpackSet(class ABackpack* _backpack);
    void GUIOpened__DelegateSignature(class ABackpackGUI* GUI);
    void GUIClosed__DelegateSignature(class ABackpackGUI* GUI);
    TEnumAsByte<EBackpackGUIMode> GetGUIMode();
    class ACatPawn* GetCatPawn();
    class ABackpack* GetBackpack();
}; // Size: 0x278

class UBackpackScreenUserWidget : public UUserWidget
{

    void OnBackpackSet();
    class ABackpack* GetBackpack();
}; // Size: 0x268

class UCatUsableComponentBase : public UBoxComponent
{
    FCatUsableComponentBaseUseStarted UseStarted;                                     // 0x0478 (size: 0x10)
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    FCatUsableComponentBaseBeforeUseDone BeforeUseDone;                               // 0x0488 (size: 0x10)
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    FCatUsableComponentBaseAfterUseDone AfterUseDone;                                 // 0x0498 (size: 0x10)
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    FText m_useTextFormat;                                                            // 0x04A8 (size: 0x18)
    FText m_displayedName;                                                            // 0x04C0 (size: 0x18)
    float m_interactRange;                                                            // 0x04D8 (size: 0x4)
    float m_visibleRange;                                                             // 0x04DC (size: 0x4)
    bool m_startEnabled;                                                              // 0x04E0 (size: 0x1)
    bool m_disableShoulderCamera;                                                     // 0x04E1 (size: 0x1)
    class USoundBase* m_startInteractionSound;                                        // 0x04E8 (size: 0x8)
    class ACatPawn* m_usingCat;                                                       // 0x04F0 (size: 0x8)
    class ACatPawn* m_focusingCat;                                                    // 0x04F8 (size: 0x8)
    bool m_isEnabled;                                                                 // 0x0500 (size: 0x1)
    bool m_isUseEnabled;                                                              // 0x0501 (size: 0x1)
    bool m_isSelectable;                                                              // 0x0502 (size: 0x1)

    void UseDone();
    bool ShouldStopBeforeTeleport();
    bool ShouldDisplayFeedbackWhileUsing();
    void SetUseEnabled(bool _value);
    void SetSelectable(bool _value);
    void SetGUIFeedbackPosition(class USceneComponent* _usePosition, FName _socket);
    void SetEnabled(bool _value);
    void SetDisplayedName(FText _displayedName);
    bool IsValid(class ACatPawn* _cat);
    bool IsUseEnabled();
    bool IsSelectable();
    bool IsEnabled();
    bool IsBeingUsed();
    class ACatPawn* GetUsingCat();
    FText GetUseDisplayText();
    TEnumAsByte<EUsableInteractionButton> GetInteractionButton();
    class USceneComponent* GetGUIFeedbackPosition(FName& _outSocket);
    class ACatPawn* GetFocusingCat();
    FText GetDisplayedName();
    void CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    bool CanInteract(class ACatPawn* _cat);
    bool CanBeUsedWhileSameButtonIsUsed();
    void _OnUseStarted(class ACatPawn* _cat);
    void _OnFocusLost(class ACatPawn* _cat);
    void _OnFocusGained(class ACatPawn* _cat);
    void _OnBeforeUseDone(class ACatPawn* _cat);
    void _OnAfterUseDone(class ACatPawn* _cat);
    class USoundBase* _GetStartSoundToPlay();
}; // Size: 0x520

class UBackpackUsableComponent : public UCatUsableComponentBase
{
    float m_usageCooldownTime;                                                        // 0x0518 (size: 0x4)
    bool m_deactivateCatInteractions;                                                 // 0x051C (size: 0x1)
    TSubclassOf<class UBackpackScreenUserWidget> m_backpackScreenWidgetClass;         // 0x0520 (size: 0x8)
    bool m_blockCatDuringUse;                                                         // 0x0528 (size: 0x1)

    void SetVisualBox(class UBoxComponent* _visualBox);
    class UBoxComponent* GetVisualBox();
    class ABackpack* GetUsingBackpack();
    FTransform GetSelectionBoxTransform();
}; // Size: 0x550

class UBackpackUserWidget : public UUserWidget
{

    void SetBackpackGUI(class ABackpackGUI* _GUI);
    void OnYPressed(bool& _handled);
    void OnXPressed(bool& _handled);
    void OnValidatePressed(bool& _handled);
    void OnUpPressed(bool& _handled);
    void OnRightVerticalAxis(float _value, bool& _handled);
    void OnRightTriggerAxis(float _value, bool& _handled);
    void OnRightPressed(bool& _handled);
    void OnRightHorizontalAxis(float _value, bool& _handled);
    void OnReset();
    void OnRBPressed(bool& _handled);
    void OnLeftVerticalAxis(float _value, bool& _handled);
    void OnLeftTriggerAxis(float _value, bool& _handled);
    void OnLeftPressed(bool& _handled);
    void OnLeftHorizontalAxis(float _value, bool& _handled);
    void OnLBPressed(bool& _handled);
    void OnDpadUpReleased(bool& _handled);
    void OnDpadUpPressed(bool& _handled);
    void OnDpadRightReleased(bool& _handled);
    void OnDpadRightPressed(bool& _handled);
    void OnDpadLeftReleased(bool& _handled);
    void OnDpadLeftPressed(bool& _handled);
    void OnDpadDownReleased(bool& _handled);
    void OnDpadDownPressed(bool& _handled);
    void OnDownPressed(bool& _handled);
    void OnDisplayed();
    void OnCancelPressed(bool& _handled);
    class ABackpackGUI* GetGUI();
    class ADrone* GetDrone();
}; // Size: 0x270

class UBindingIconWidget : public UUserWidget
{

    void SetSize(float _size);
    void SetBindingName(const FName& _bindingName);
}; // Size: 0x260

struct FStatGroupBudget
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    float Budget;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x40

class ABudgetManager : public AManager
{
    uint64 PhysicalMemoryBudget;                                                      // 0x0228 (size: 0x8)
    TArray<FStatGroupBudget> m_statGroupBudgets;                                      // 0x0238 (size: 0x10)
    bool m_isProfilingEnabled;                                                        // 0x0248 (size: 0x1)
    int32 m_samplesCount;                                                             // 0x024C (size: 0x4)
    float m_warningPercentage;                                                        // 0x0250 (size: 0x4)

    void SetProfilingEnabled(bool _enabled);
    bool IsProfilingEnabled();
    FString DumpBudgets();
}; // Size: 0x318

class UCameraTargetComponent : public USphereComponent
{
    float Influence;                                                                  // 0x0470 (size: 0x4)
    bool EnableCameraBackwardsMovement;                                               // 0x0474 (size: 0x1)
    bool ActivateOnView;                                                              // 0x0475 (size: 0x1)
    float ViewXMinimum;                                                               // 0x0478 (size: 0x4)
    float ViewYMinimum;                                                               // 0x047C (size: 0x4)
    float ViewXMaximum;                                                               // 0x0480 (size: 0x4)
    float ViewYMaximum;                                                               // 0x0484 (size: 0x4)
    bool UseTarget;                                                                   // 0x0488 (size: 0x1)
    FVector TargetLocation;                                                           // 0x048C (size: 0xC)
    bool EnableDistanceOffset;                                                        // 0x0498 (size: 0x1)
    float DistanceMax;                                                                // 0x049C (size: 0x4)
    bool EnableOnDirection;                                                           // 0x04A0 (size: 0x1)
    bool m_enabled;                                                                   // 0x04A1 (size: 0x1)
    float m_influenceCoreRadius;                                                      // 0x04A4 (size: 0x4)
    bool m_isKillZoneEnabled;                                                         // 0x04A8 (size: 0x1)
    float m_killZoneRadius;                                                           // 0x04AC (size: 0x4)
    float m_maximumDirectionErrorTolerance;                                           // 0x04B0 (size: 0x4)
    float m_minimumDirectionErrorTolerance;                                           // 0x04B4 (size: 0x4)
    class UCurveFloat* m_influenceResponse_Curve;                                     // 0x04B8 (size: 0x8)

    void SetKillZoneEnable(bool _enable);
    void SetKilled(bool _killed);
    void SetEnabled(bool _enabled);
    bool IsKilled();
    bool IsEnabled();
    float GetCameraDistanceOffset(class UCameraComponent* _camera, float _xScreenLimit, float _yScreenLimit, float _cameraDistanceOffsetMultiplier);
    void _OnEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
}; // Size: 0x4D0

class AHKCamera : public AActor
{

    void SetCameraInput(FVector2D _input);
    void OnCameraFocusLost(float _blendTime);
    void OnCameraFocus(float _blendTime);
    void OnCameraButtonReleased();
    void OnCameraButtonPressed();
    float GetLookSensitivity();
    FVector GetCollisionPosition();
    FVector2D GetCameraInput();
}; // Size: 0x238

struct FCameraThirdPersonPreset
{
    bool SmoothEnabled;                                                               // 0x0000 (size: 0x1)
    bool SmoothUseSpeed;                                                              // 0x0001 (size: 0x1)
    float SmoothTimeTo90Percent;                                                      // 0x0004 (size: 0x4)
    bool SmoothOutEnabled;                                                            // 0x0008 (size: 0x1)
    bool SmoothOutUseSpeed;                                                           // 0x0009 (size: 0x1)
    float SmoothOutTimeTo90Percent;                                                   // 0x000C (size: 0x4)
    bool LookSpeedModifierEnabled;                                                    // 0x0010 (size: 0x1)
    float HorizontalLookSpeed;                                                        // 0x0014 (size: 0x4)
    float VerticalLookSpeed;                                                          // 0x0018 (size: 0x4)
    bool DistanceModifierEnabled;                                                     // 0x001C (size: 0x1)
    float DistanceRatio;                                                              // 0x0020 (size: 0x4)
    bool FieldOfViewBaseEnabled;                                                      // 0x0024 (size: 0x1)
    float FieldOfViewBase;                                                            // 0x0028 (size: 0x4)
    bool FieldOfViewCurveEnabled;                                                     // 0x002C (size: 0x1)
    class UCurveFloat* FieldOfViewCurve;                                              // 0x0030 (size: 0x8)
    bool YawConstraintEnabled;                                                        // 0x0038 (size: 0x1)
    float YawConstraintAmplitude;                                                     // 0x003C (size: 0x4)
    FVector YawConstraintDirection;                                                   // 0x0040 (size: 0xC)
    bool PitchConstraintEnabled;                                                      // 0x004C (size: 0x1)
    float PitchConstraintMin;                                                         // 0x0050 (size: 0x4)
    float PitchConstraintMax;                                                         // 0x0054 (size: 0x4)
    bool CameraSplineEnabled;                                                         // 0x0058 (size: 0x1)
    bool TargetSplineEnabled;                                                         // 0x0059 (size: 0x1)
    TSubclassOf<class ACameraThirdPersonSplinesPreset> Splines;                       // 0x0060 (size: 0x8)
    bool AbsoluteOffsetEnabled;                                                       // 0x0068 (size: 0x1)
    FVector AbsoluteOffset;                                                           // 0x006C (size: 0xC)
    bool AbsoluteOffsetUseMinMaxPitch;                                                // 0x0078 (size: 0x1)
    float AbsoluteOffsetPitchMin;                                                     // 0x007C (size: 0x4)
    float AbsoluteOffsetPitchMax;                                                     // 0x0080 (size: 0x4)
    bool CollisionExtrapolationEnabled;                                               // 0x0084 (size: 0x1)
    float MaxCollisionExtrapolationDistance;                                          // 0x0088 (size: 0x4)

}; // Size: 0x90

class ACameraThirdPerson : public AHKCamera
{
    bool m_speedOffsetEnabled;                                                        // 0x0238 (size: 0x1)
    float m_speedOffsetInfluence;                                                     // 0x023C (size: 0x4)
    class USceneComponent* m_armRoot;                                                 // 0x0240 (size: 0x8)
    class UCameraComponent* m_camera;                                                 // 0x0248 (size: 0x8)
    float m_probeRadius;                                                              // 0x0250 (size: 0x4)
    TEnumAsByte<ECollisionChannel> m_cameraTraceChannel;                              // 0x0254 (size: 0x1)
    float m_inputThreshold;                                                           // 0x0258 (size: 0x4)
    float m_additionalRaycastDeadDistance;                                            // 0x025C (size: 0x4)
    float m_forwardDistanceDamping90Time;                                             // 0x0260 (size: 0x4)
    float m_backwardDistanceDamping90Time;                                            // 0x0264 (size: 0x4)
    bool m_useLinearVelocityOnSpline;                                                 // 0x0268 (size: 0x1)
    bool m_collisionsAvoidanceEnabled;                                                // 0x0269 (size: 0x1)
    float m_collisionAvoidanceRadius;                                                 // 0x026C (size: 0x4)
    float m_collisionAvoidanceMinSpeed;                                               // 0x0270 (size: 0x4)
    bool m_collisionsAvoidanceExtrapolationEnabled;                                   // 0x0274 (size: 0x1)
    float m_collisionAvoidanceHorizontalExtrapolationTime;                            // 0x0278 (size: 0x4)
    float m_collisionAvoidanceVerticalExtrapolationTime;                              // 0x027C (size: 0x4)
    float m_resetCameraTime;                                                          // 0x0280 (size: 0x4)
    float m_resetPitch;                                                               // 0x0284 (size: 0x4)
    FRuntimeFloatCurve m_attachLocationSmoothDistanceToSamplingTime;                  // 0x0288 (size: 0x88)
    int32 m_attachLocationSmoothSampleCount;                                          // 0x0310 (size: 0x4)
    float m_attachLocationJumpCorrectionRatio;                                        // 0x0314 (size: 0x4)
    float m_backCamDelay;                                                             // 0x0318 (size: 0x4)
    class UCurveFloat* m_gamepadInputResponseCurve;                                   // 0x0328 (size: 0x8)
    class UCurveFloat* m_mouseInputResponseCurve;                                     // 0x0330 (size: 0x8)
    class UCurveFloat* m_gamepadInputTimeTo90Curve;                                   // 0x0340 (size: 0x8)
    class UCurveFloat* m_mouseInputTimeTo90Curve;                                     // 0x0348 (size: 0x8)
    class UCurveFloat* m_mouseInputPitchRatioInputFactor;                             // 0x0358 (size: 0x8)
    class UCurveFloat* m_gamePadPitchRatioInputFactor;                                // 0x0360 (size: 0x8)
    float m_emptyGamepadInputTimeTo90;                                                // 0x036C (size: 0x4)
    float m_emptyMouseInputTimeTo90;                                                  // 0x0370 (size: 0x4)
    bool m_invertVelocityWithStick;                                                   // 0x0374 (size: 0x1)
    bool m_yawRealignEnabled;                                                         // 0x0375 (size: 0x1)
    class UCurveFloat* m_yawRealignCurve_InputDirectionDot_YawSpeed;                  // 0x0378 (size: 0x8)
    float m_speedOffsetLengthSmootherForwardTime;                                     // 0x0380 (size: 0x4)
    float m_speedOffsetLengthSmootherBackwardTime;                                    // 0x0384 (size: 0x4)
    float m_speedOffsetDirectionSmootherTime;                                         // 0x0388 (size: 0x4)
    float m_speedOffsetDoubleSmootherTime;                                            // 0x038C (size: 0x4)
    class UCurveFloat* m_forwardSpeedOffsetPitchResponse;                             // 0x0390 (size: 0x8)
    class UCurveFloat* m_forwardSpeedOffsetCameraDotResponse;                         // 0x0398 (size: 0x8)
    FSmootherFloat m_modifierTargetDistanceSmooth;                                    // 0x03A0 (size: 0xC)
    FSmootherFloat m_modifierTargetFOVSmooth;                                         // 0x03AC (size: 0xC)
    bool m_dynamicSplineHeightEnabled;                                                // 0x03B8 (size: 0x1)
    float m_dynamicSplineHeightMinimum;                                               // 0x03BC (size: 0x4)
    float m_dynamicSplineHeightRecoverBlendTime;                                      // 0x03C0 (size: 0x4)
    float m_cameraTargetSmoothTime;                                                   // 0x03C4 (size: 0x4)
    float m_cameraTargetBlendOutTime;                                                 // 0x03C8 (size: 0x4)
    float m_cameraTargetDistanceOutMax;                                               // 0x03CC (size: 0x4)
    float m_cameraTargetOtherOffsetsResetTime;                                        // 0x03D0 (size: 0x4)
    TSubclassOf<class AActor> m_cameraTargetClass;                                    // 0x03D8 (size: 0x8)
    float m_cameraTargetDistanceXBorder;                                              // 0x03E0 (size: 0x4)
    float m_cameraTargetDistanceYBorder;                                              // 0x03E4 (size: 0x4)
    float m_cameraTargetDistanceOutSpeed;                                             // 0x03E8 (size: 0x4)
    float m_cameraTargetDistanceInSpeed;                                              // 0x03EC (size: 0x4)
    float m_cameraTargetInterpolationSpeed;                                           // 0x03F0 (size: 0x4)
    bool m_resetCameraOnInput;                                                        // 0x03F4 (size: 0x1)
    FCameraThirdPersonPreset DefaultPreset;                                           // 0x03F8 (size: 0x90)
    float m_dialogResetDistance;                                                      // 0x0488 (size: 0x4)
    float m_dialogResetTime;                                                          // 0x048C (size: 0x4)
    float m_dialogResetMinPitch;                                                      // 0x0490 (size: 0x4)
    float m_dialogResetMaxPitch;                                                      // 0x0494 (size: 0x4)
    bool m_dialogResetPitchUnderMin;                                                  // 0x0498 (size: 0x1)
    bool m_dialogResetPitchAboveMax;                                                  // 0x0499 (size: 0x1)
    int32 m_dialogResetProbeDistanceToObstacle;                                       // 0x049C (size: 0x4)
    bool m_editionMode;                                                               // 0x04B0 (size: 0x1)
    bool m_smoothSplines;                                                             // 0x04B1 (size: 0x1)
    class USplineComponent* m_cameraSpline;                                           // 0x04B8 (size: 0x8)
    class USplineComponent* m_targetSpline;                                           // 0x04C0 (size: 0x8)
    float m_raycastTargetSmoothTimeTo90;                                              // 0x04C8 (size: 0x4)
    FRuntimeFloatCurve m_raycastTargetDynamicheight;                                  // 0x04D0 (size: 0x88)
    bool m_antiWobbleActivated;                                                       // 0x0558 (size: 0x1)
    float m_antiWobbleTimeToRelease;                                                  // 0x055C (size: 0x4)
    float m_antiWobbleSensivityToRelease;                                             // 0x0560 (size: 0x4)
    float m_antiWobbleDistanceToRelease;                                              // 0x0564 (size: 0x4)
    float m_antiWobbleCatForwardAngleToRelease;                                       // 0x0568 (size: 0x4)
    float m_antiWobbleCatBackwardAngleToRelease;                                      // 0x056C (size: 0x4)
    float m_antiWobbleCatSpeedToRelease;                                              // 0x0570 (size: 0x4)
    class UProximityProbeComponent* m_proximityProbeAttachPoint;                      // 0x07B8 (size: 0x8)
    class UProximityProbeComponent* m_proximityProbeCamera;                           // 0x07C0 (size: 0x8)

    FVector UpdateWantedTargetLocation(float _yaw, float _pitchRatio, float _dt);
    FVector UpdateWantedRaycastTarget(float _yaw, float _pitchRatio, float _dt);
    FVector UpdateWantedCameraLocation(float _yaw, float _pitchRatio, float _dt);
    FVector UpdateIdealAttachLocation(float _dt);
    FVector UpdateFinalRaycastTarget(float _yaw, float _pitchRatio, float _dt);
    FVector UpdateFinalExtrapolatedVelocity(float _dt, FVector _raycastStart, FVector _raycastEnd, FVector _previousRaycastEnd);
    FVector UpdateFinalAttachLocation(float _dt, const FVector& _target);
    void SyncWithTargetLocation();
    void SetRoll(float _roll);
    void SetResetCameraOnInput(bool _resetOnInput);
    void SetInputEnabled(bool _enabled);
    void SetFOV(float _fov);
    void ResetToRotation(const FRotator& _rotation, float _time, float _inputDisableTime, bool _inputCancel);
    void ResetToRelativeRotation(float _yaw, float _pitch, float _roll, float _time, float _inputDisableTime, bool _inputCancel);
    void ResetToDefaultPosition(float _time, bool _hardSyncWithTarget);
    void ResetBackCam();
    void RequestResetToClosestFreeRotation();
    void RemoveTarget(class UCameraTargetComponent* _target);
    void RemoveModifier(const FName& _id);
    void PushDisableResetCam();
    void PushDisableBackCam();
    void PopDisableResetCam();
    void PopDisableBackCam();
    void OnDisplayDebug();
    void OnCatUnset(class ACatPawn* _cat);
    void OnCatSet(class ACatPawn* _cat);
    bool IsResetingRotation();
    bool IsResetCamDisabled();
    bool IsInputEnabled();
    bool IsBackCamDisabled();
    bool IsBackCamActivated();
    void InputProcess(FVector2D _input, float _deltaTime, float& _yawIncrement, float& _pitchIncrement);
    FVector2D InputFilter(FVector2D _rawInput, float _dt);
    float GetYaw();
    FVector GetWantedTargetLocation();
    FVector GetWantedRaycastTarget();
    FVector GetWantedCameraLocation();
    float GetRoll();
    bool GetResetCameraOnInput();
    float GetPitchRatio();
    float GetPitch();
    FVector GetIdealAttachLocation();
    float GetFOVPitchModifier();
    float GetFOVBase();
    float GetFOV();
    FVector GetFinalRaycastTarget();
    FVector GetFinalAttachLocation();
    class ACatPawn* GetCat();
    class UCameraComponent* GetCamera();
    float GetAttachLocationSmoothRatio();
    FVector GetAbsoluteOffset();
    void AlignToPosition(FVector _position, float _time, float _inputDisableTime, bool _inputCancel);
    void AddTarget(class UCameraTargetComponent* _target);
    void AddModifier(const FName& _id, const FCameraThirdPersonPreset& _preset, int32 _priority);
    void _OnControllerTypeChanged();
}; // Size: 0xA70

class ACameraThirdPersonModifier : public AActor
{
    FCameraThirdPersonPreset m_cameraPreset;                                          // 0x0230 (size: 0x90)
    bool m_enabled;                                                                   // 0x02C0 (size: 0x1)
    float m_priority;                                                                 // 0x02C4 (size: 0x4)
    class ACameraThirdPerson* m_camera;                                               // 0x02C8 (size: 0x8)

    void SetEnabled(bool _enabled);
    void OnEnabled();
    void OnDisabled();
    bool IsEnabled();
}; // Size: 0x2D8

class ACameraThirdPersonSplinesPreset : public AActor
{
    class USplineComponent* m_cameraSpline;                                           // 0x0228 (size: 0x8)
    class USplineComponent* m_targetSpline;                                           // 0x0230 (size: 0x8)

}; // Size: 0x238

class UCatUsableComponent : public UCatUsableComponentBase
{
    bool m_hasInteractionLimitAngle;                                                  // 0x0518 (size: 0x1)
    bool m_deactivateBackpackInteractions;                                            // 0x0519 (size: 0x1)
    float m_interactionLimitAngle;                                                    // 0x051C (size: 0x4)
    float m_interactionLimitAngleHysteresis;                                          // 0x0520 (size: 0x4)

    bool CanMeow();
}; // Size: 0x530

class UCartonUsableComponent : public UCatUsableComponent
{
    bool m_useConstraints;                                                            // 0x0528 (size: 0x1)
    float m_beginConstraint;                                                          // 0x052C (size: 0x4)
    float m_endConstraint;                                                            // 0x0530 (size: 0x4)

    bool IsPointWithinConstraints(FVector _point);
    FVector ConstrainPoint(FVector _point);
    FVector ConstrainDirection(FVector _direction);
}; // Size: 0x540

struct FLookAtAnimationState
{
    FRotator CurrentRotation;                                                         // 0x0000 (size: 0xC)
    bool Enable;                                                                      // 0x000C (size: 0x1)

}; // Size: 0x10

class UHKAnimInstance : public UAnimInstance
{

    void OnSoundEvent(FName Name, float Velocity);
    FRotator FindLookAtRotator(FLookAtAnimationState& _lookAtState, bool& _enable, bool _lookAtEnable, FVector _lookAtLocation, float _angleLimit, float _hysteresis, int32 _virtualBoneBaseEffector, int32 _virtualBoneEndEffector, bool& _isInSight, float _speed);
}; // Size: 0x2C0

struct FProbeDirectionData
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    TArray<FVector> SurfaceVertices;                                                  // 0x0008 (size: 0x10)
    FPlane LimitPlane;                                                                // 0x0020 (size: 0x10)
    float DistanceToPlane;                                                            // 0x0030 (size: 0x4)
    FVector Direction;                                                                // 0x0034 (size: 0xC)
    float Angle;                                                                      // 0x0040 (size: 0x4)
    bool IsObstacle;                                                                  // 0x0044 (size: 0x1)
    bool IsGap;                                                                       // 0x0045 (size: 0x1)
    bool IsValid;                                                                     // 0x0046 (size: 0x1)

}; // Size: 0x50

struct FGroundProbeSegmentData
{
    FVector Normal;                                                                   // 0x0000 (size: 0xC)
    int32 Type;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGroundProbeData
{
    TArray<FProbeDirectionData> Directions;                                           // 0x0000 (size: 0x10)
    TArray<FVector> CleanSurfaceVertices;                                             // 0x0010 (size: 0x10)
    TArray<FGroundProbeSegmentData> CleanSurfaceSegmentsData;                         // 0x0020 (size: 0x10)
    TWeakObjectPtr<class UPhysicalMaterial> PhysicMaterial;                           // 0x0030 (size: 0x8)
    FVector RawLocation;                                                              // 0x0038 (size: 0xC)
    FQuat RawRotation;                                                                // 0x0050 (size: 0x10)
    FVector Location;                                                                 // 0x0060 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0070 (size: 0x10)
    TWeakObjectPtr<class UPrimitiveComponent> GroundComponent;                        // 0x0080 (size: 0x8)
    int32 LimitsCount;                                                                // 0x0088 (size: 0x4)
    float Radius;                                                                     // 0x008C (size: 0x4)

}; // Size: 0x90

struct FJumpData
{
    FVector startVelocity;                                                            // 0x0000 (size: 0xC)
    FGroundProbeData beginProbe;                                                      // 0x0010 (size: 0x90)
    FVector jumpMotionBegin;                                                          // 0x00A0 (size: 0xC)
    FQuat jumpMotionBeginRotation;                                                    // 0x00B0 (size: 0x10)
    FVector jumpBegin;                                                                // 0x00C0 (size: 0xC)
    FQuat jumpBeginRotation;                                                          // 0x00D0 (size: 0x10)
    FVector jumpEnd;                                                                  // 0x00E0 (size: 0xC)
    FQuat jumpEndRotation;                                                            // 0x00F0 (size: 0x10)
    FVector jumpEndFirstValidLocation;                                                // 0x0100 (size: 0xC)
    FQuat jumpEndFirstValidRotation;                                                  // 0x0110 (size: 0x10)
    FVector jumpMotionEnd;                                                            // 0x0120 (size: 0xC)
    float stopVelocity;                                                               // 0x012C (size: 0x4)
    FGroundProbeData jumpEndProbe;                                                    // 0x0130 (size: 0x90)
    class USplineRailComponent* beginRail;                                            // 0x01C0 (size: 0x8)
    class USplineRailComponent* endRail;                                              // 0x01C8 (size: 0x8)
    bool hasGap;                                                                      // 0x0240 (size: 0x1)
    float gapSize;                                                                    // 0x0244 (size: 0x4)
    bool IsHanging;                                                                   // 0x0248 (size: 0x1)
    bool IsCrossing;                                                                  // 0x0249 (size: 0x1)
    bool isSlowJump;                                                                  // 0x024A (size: 0x1)
    bool isFailedJump;                                                                // 0x024B (size: 0x1)
    FVector jumpTarget;                                                               // 0x0250 (size: 0xC)
    FQuat jumpSearchRotation;                                                         // 0x0260 (size: 0x10)

}; // Size: 0x460

struct FJumpAnimationData
{
    class UAnimSequence* JumpAnimation;                                               // 0x0000 (size: 0x8)
    class UAnimSequence* JumpFailAnimation;                                           // 0x0008 (size: 0x8)
    class UAnimSequence* StopAnimation;                                               // 0x0010 (size: 0x8)
    class UAnimSequence* StopRailAnimation;                                           // 0x0018 (size: 0x8)
    class UAnimSequence* SlowAnimation;                                               // 0x0020 (size: 0x8)
    bool UseManualBounds;                                                             // 0x0028 (size: 0x1)
    float MinLengthBound;                                                             // 0x002C (size: 0x4)
    float MaxLengthBound;                                                             // 0x0030 (size: 0x4)
    float MinHeightBound;                                                             // 0x0034 (size: 0x4)
    float MaxHeightBound;                                                             // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FJumpBlock
{
    FJumpAnimationData Data;                                                          // 0x0000 (size: 0x40)
    FVector2D Trajectory;                                                             // 0x0040 (size: 0x8)
    FName SpeedName;                                                                  // 0x0048 (size: 0x8)
    float BeginTime;                                                                  // 0x0050 (size: 0x4)
    float EndTime;                                                                    // 0x0054 (size: 0x4)
    FTransform BeginMotion;                                                           // 0x0060 (size: 0x30)
    FTransform EndMotion;                                                             // 0x0090 (size: 0x30)
    bool HasEnablePlayerControlNotify;                                                // 0x00C0 (size: 0x1)
    bool HasExitJumpNotify;                                                           // 0x00C1 (size: 0x1)

}; // Size: 0xD0

class UCatAnimInstance : public UHKAnimInstance
{
    class UJumpAnimationLibrary* m_jumpAnimationLibrary;                              // 0x02C0 (size: 0x8)
    bool m_logAnimationErrors;                                                        // 0x02C8 (size: 0x1)
    TSubclassOf<class UAnimNotify> m_enablePlayerControlNotifyClass;                  // 0x02D0 (size: 0x8)
    TSubclassOf<class UAnimNotify> m_jumpExitNotifyClass;                             // 0x02D8 (size: 0x8)
    float m_maxSlopeCorrectionAngle;                                                  // 0x02E0 (size: 0x4)

    void SetupAnimationBanks();
    void PushBendInputMode(FName _id, TEnumAsByte<ECatBendInputMode> _mode);
    void PushBendDisabled();
    void PopBendInputMode(FName _id);
    void PopBendDisabled();
    void OnTeleport();
    void OnJumpExit();
    void OnInitJump(const FJumpData& _jumpData);
    void OnEnablePlayerControl();
    void OnBeginInterpolate(class UAnimSequence* _interpolateAnimation);
    bool IsInterpolating();
    bool IsBendDisabled();
    FJumpBlock GetCurrentJumpBlock();
    TEnumAsByte<ECatBendInputMode> GetBendInputMode();
    FJumpBlock FindRelevantJumpBlock(float _jumpLength, float _jumpHeight, const TArray<FJumpBlock>& _jumpBlocks);
    bool FindJumpBlockBySpeed(float _speed, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock);
    bool FindJumpBlockByName(FName _speedName, float _jumpLength, float _jumpHeight, FJumpBlock& _outJumpBlock);
}; // Size: 0x440

class ACatBend2 : public APawn
{
    float m_boneRotationSmoothTime;                                                   // 0x0288 (size: 0x4)
    bool m_isRelaxEnabled;                                                            // 0x028C (size: 0x1)
    int32 m_relaxIterationCount;                                                      // 0x0290 (size: 0x4)
    float m_relaxCenterWeight;                                                        // 0x0294 (size: 0x4)
    float m_relaxSideWeight;                                                          // 0x0298 (size: 0x4)

    void ProcessSpine();
    bool IsDebugEnabled();
    FRotator GetSpineBoneRotation(int32 _boneIndex);
    TArray<FName> GetSpineBoneChain();
    void BugTrigger();
}; // Size: 0x3A0

class UCatFrottableComponent : public UCatUsableComponent
{
    FCatFrottableComponentOnFrotted OnFrotted;                                        // 0x0528 (size: 0x10)
    void CatFrottableDelegate(class UCatFrottableComponent* _component);
    class USplineComponent* m_trajectorySpline;                                       // 0x0538 (size: 0x8)
    class UCapsuleComponent* m_cylinder;                                              // 0x0540 (size: 0x8)
    bool m_useConstraints;                                                            // 0x0548 (size: 0x1)
    float m_beginConstraint;                                                          // 0x054C (size: 0x4)
    float m_endConstraint;                                                            // 0x0550 (size: 0x4)
    float m_eventBroadcastOffset;                                                     // 0x0554 (size: 0x4)
    bool m_debugEnabled;                                                              // 0x0558 (size: 0x1)
    float m_defaultRadius;                                                            // 0x055C (size: 0x4)
    float m_frottingDistance;                                                         // 0x0560 (size: 0x4)
    FName m_frotMarkerName;                                                           // 0x0564 (size: 0x8)
    class UAnimSequence* m_leftFrottingAnimation;                                     // 0x0570 (size: 0x8)
    class UAnimSequence* m_rightFrottingAnimation;                                    // 0x0578 (size: 0x8)
    float m_interpolationErrorRecoveryTime;                                           // 0x0580 (size: 0x4)

    void SetCylinder(class UCapsuleComponent* _capsule);
    void CatFrottableDelegate__DelegateSignature(class UCatFrottableComponent* _component);
}; // Size: 0x5B0

class UCatMovementComponent : public UPawnMovementComponent
{
    float m_touchForceFactor;                                                         // 0x0138 (size: 0x4)
    float m_minTouchForce;                                                            // 0x013C (size: 0x4)
    float m_maxTouchForce;                                                            // 0x0140 (size: 0x4)
    float m_initialPushForceFactor;                                                   // 0x0144 (size: 0x4)
    float m_pushForceFactor;                                                          // 0x0148 (size: 0x4)
    float m_additionalDistanceFromGaps;                                               // 0x014C (size: 0x4)
    FSmootherTransform m_railSyncSmoother;                                            // 0x0150 (size: 0x70)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x01D8 (size: 0x8)

    void _CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x370

class UCatMoveToUsableComponent : public UCatUsableComponent
{
    FCatMoveToUsableComponentAfterMoveUseStarted AfterMoveUseStarted;                 // 0x0528 (size: 0x10)
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    bool m_alignWithTarget;                                                           // 0x0538 (size: 0x1)
    bool m_isPrecise;                                                                 // 0x0539 (size: 0x1)
    bool m_stickToBeginRailOnExit;                                                    // 0x053A (size: 0x1)
    float m_moveToMaxSpeed;                                                           // 0x053C (size: 0x4)
    float m_ignoreTargetForMovement;                                                  // 0x0540 (size: 0x4)
    class USceneComponent* m_moveToTarget;                                            // 0x0548 (size: 0x8)
    class USplineRailComponent* m_beginRail;                                          // 0x0550 (size: 0x8)

    void SetMoveToTarget(class USceneComponent* _target, FName _targetSocket);
    void SetIsPrecise(bool _value);
    void SetAlignWithTarget(bool _value);
    TEnumAsByte<ECatMoveToUsableState> GetState();
    class USceneComponent* GetMoveToTarget(FName& _outTargetSocket);
    FTransform GetLastMoveToTarget();
    void _OnFollowSplineEndReached(class ACatPawn* _cat);
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    bool _IsMoveToFinished();
}; // Size: 0x5A0

struct FDriftParameters
{
    class UCurveFloat* AngleDriftFactorCurve;                                         // 0x0000 (size: 0x8)
    class UCurveFloat* SpeedDriftFactorCurve;                                         // 0x0008 (size: 0x8)
    float DriftMultiplier;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FLookAtData
{
    TEnumAsByte<ELookAtType> Type;                                                    // 0x0000 (size: 0x1)
    FVector RelativeTarget;                                                           // 0x0004 (size: 0xC)
    FVector Target;                                                                   // 0x0010 (size: 0xC)
    class AActor* Actor;                                                              // 0x0020 (size: 0x8)
    class USceneComponent* Component;                                                 // 0x0028 (size: 0x8)
    FName ComponentSocket;                                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FCatLookAtEntry
{
    FLookAtData Data;                                                                 // 0x0008 (size: 0x38)

}; // Size: 0x48

struct FZurgSocket
{
    FName SocketName;                                                                 // 0x0000 (size: 0x8)
    class AZurgPawnSlave* Zurg;                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGroundMaterialOverrideEntry
{
}; // Size: 0x14

struct FInteractionData
{
    class UCatUsableComponentBase* Usable;                                            // 0x0000 (size: 0x8)
    class AInteractionFeedback* Feedback;                                             // 0x0008 (size: 0x8)
    class UPrimitiveComponent* VisibilityOccluder;                                    // 0x0038 (size: 0x8)
    class UPrimitiveComponent* InteractionOccluder;                                   // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FRailHangingTestResult
{
    TEnumAsByte<EHangingTestResult> Result;                                           // 0x0000 (size: 0x1)
    FVector BaseLocation;                                                             // 0x0004 (size: 0xC)
    FQuat BaseRotation;                                                               // 0x0010 (size: 0x10)
    FVector HangingLocation;                                                          // 0x0020 (size: 0xC)
    FQuat HangingRotation;                                                            // 0x0030 (size: 0x10)
    FPlane HangingPlane;                                                              // 0x0040 (size: 0x10)
    int32 CurrentQuadrantId;                                                          // 0x0050 (size: 0x4)
    int32 IdealQuadrantId;                                                            // 0x0054 (size: 0x4)
    int32 TargetQuadrantId;                                                           // 0x0058 (size: 0x4)
    float WallRatio;                                                                  // 0x005C (size: 0x4)
    bool isWall;                                                                      // 0x0060 (size: 0x1)
    bool IsPointHanging;                                                              // 0x0061 (size: 0x1)

}; // Size: 0x70

struct FCustomAnimation
{
    class UAnimSequence* Animation;                                                   // 0x0000 (size: 0x8)
    bool bIsLooping;                                                                  // 0x0008 (size: 0x1)
    bool EnableLookAt;                                                                // 0x0009 (size: 0x1)
    bool IsSynchronized;                                                              // 0x000A (size: 0x1)
    bool KeepCollisions;                                                              // 0x000B (size: 0x1)
    FTransform StartTransform;                                                        // 0x0010 (size: 0x30)
    float SynchronizationTime;                                                        // 0x0040 (size: 0x4)
    float PlayRate;                                                                   // 0x0044 (size: 0x4)

}; // Size: 0x50

struct FCatInterpolateAlongSplineParams
{
    float ResyncTime;                                                                 // 0x0000 (size: 0x4)
    bool DoOverrideRotation;                                                          // 0x0004 (size: 0x1)
    FRotator OverridenRotation;                                                       // 0x0008 (size: 0xC)
    bool EarliestExit;                                                                // 0x0014 (size: 0x1)

}; // Size: 0x18

class ACatPawn : public APawn
{
    FCatPawnJumpBegan JumpBegan;                                                      // 0x0378 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnJumpEnded JumpEnded;                                                      // 0x0388 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnDied Died;                                                                // 0x0398 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnZurgAttached ZurgAttached;                                                // 0x03A8 (size: 0x10)
    void CatZurgDelegate(class ACatPawn* _catPawn, class AZurgPawn* _zurg);
    FCatPawnZurgDetached ZurgDetached;                                                // 0x03B8 (size: 0x10)
    void CatZurgDelegate(class ACatPawn* _catPawn, class AZurgPawn* _zurg);
    FCatPawnFollowSplineEndReached FollowSplineEndReached;                            // 0x03C8 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnFollowRailEndReached FollowRailEndReached;                                // 0x03D8 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnJumpStateBegan JumpStateBegan;                                            // 0x03E8 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnJumpStateEnded JumpStateEnded;                                            // 0x03F8 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnBeforeInteractionStart BeforeInteractionStart;                            // 0x0408 (size: 0x10)
    void CatUsableDelegate(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    FCatPawnAfterInteractionStart AfterInteractionStart;                              // 0x0418 (size: 0x10)
    void CatUsableDelegate(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    FCatPawnBeforeInteractionStop BeforeInteractionStop;                              // 0x0428 (size: 0x10)
    void CatUsableDelegate(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    FCatPawnClosestInteractionChanged ClosestInteractionChanged;                      // 0x0438 (size: 0x10)
    void CatInteractionDelegate(class ACatPawn* _catPawn, TEnumAsByte<EUsableInteractionButton> _button, class UCatUsableComponentBase* _usable);
    FCatPawnAfterInteractionStop AfterInteractionStop;                                // 0x0448 (size: 0x10)
    void CatDelegate(class ACatPawn* _catPawn);
    class USkeletalMeshComponent* m_visual;                                           // 0x0458 (size: 0x8)
    class UCapsuleComponent* m_capsule;                                               // 0x0460 (size: 0x8)
    class USphereComponent* m_largeInteractionCollider;                               // 0x0468 (size: 0x8)
    class UCapsuleComponent* m_grabCapsule;                                           // 0x0470 (size: 0x8)
    class USplineComponent* m_trajectory;                                             // 0x0478 (size: 0x8)
    class ULifeComponent* m_lifeComponent;                                            // 0x0480 (size: 0x8)
    class UDrawMovementComponent* m_drawMovementComponent;                            // 0x0488 (size: 0x8)
    class USceneComponent* m_root;                                                    // 0x0490 (size: 0x8)
    class ACameraThirdPerson* m_cameraThirdPerson;                                    // 0x0498 (size: 0x8)
    TSubclassOf<class ACameraThirdPerson> m_cameraThirdPersonClass;                   // 0x04A0 (size: 0x8)
    FCameraThirdPersonPreset m_cameraShoulderPreset;                                  // 0x04A8 (size: 0x90)
    class UCatMovementComponent* m_movement;                                          // 0x0538 (size: 0x8)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0540 (size: 0x8)
    float m_cameraYawSpeed;                                                           // 0x0548 (size: 0x4)
    float m_cameraPitchSpeed;                                                         // 0x054C (size: 0x4)
    float m_inputThreshold;                                                           // 0x0550 (size: 0x4)
    float m_jumpInputBufferDuration;                                                  // 0x0554 (size: 0x4)
    float m_jumpReleasedBufferDuration;                                               // 0x0558 (size: 0x4)
    class UCurveFloat* m_inputResponse;                                               // 0x0560 (size: 0x8)
    class UCurveFloat* m_inputAngleCorrection_Curve;                                  // 0x0568 (size: 0x8)
    FSmootherCurved m_accelerationSmoother;                                           // 0x0570 (size: 0x128)
    FSmootherCurved m_runFactorSmoother;                                              // 0x0698 (size: 0x128)
    float m_maximumMovementInputSize;                                                 // 0x07C0 (size: 0x4)
    float m_inputTransitionStartBlendAngle;                                           // 0x07C4 (size: 0x4)
    float m_inputTransitionSmootherTolerance;                                         // 0x07C8 (size: 0x4)
    float m_groundProbeRadius;                                                        // 0x07CC (size: 0x4)
    float m_jumpGroundProbeRadius;                                                    // 0x07D0 (size: 0x4)
    float m_UTurnAngleThreshold;                                                      // 0x07D4 (size: 0x4)
    float m_UTurnTimeThreshold;                                                       // 0x07D8 (size: 0x4)
    float m_UTurnTimeThresholdFollowSpline;                                           // 0x07DC (size: 0x4)
    float m_rotationRatio;                                                            // 0x07E0 (size: 0x4)
    float m_stepDownDistance;                                                         // 0x07E4 (size: 0x4)
    float m_maxSlope;                                                                 // 0x07E8 (size: 0x4)
    bool m_isCatPilotEnabled;                                                         // 0x07EC (size: 0x1)
    float m_catPilotDistanceFromObstacleRangeMin;                                     // 0x07F0 (size: 0x4)
    float m_catPilotDistanceFromObstacleRangeMax;                                     // 0x07F4 (size: 0x4)
    float m_catPilotCatFacingThresholdAngle;                                          // 0x07F8 (size: 0x4)
    float m_catPilotCancelInputThresholdAngle;                                        // 0x07FC (size: 0x4)
    float m_catPilotCancelInputRampAngle;                                             // 0x0800 (size: 0x4)
    float m_minJumpLength;                                                            // 0x0808 (size: 0x4)
    class UCurveVector* m_jumpCapacityCurve;                                          // 0x0810 (size: 0x8)
    class UCurveFloat* m_jumpAngleWeight_Curve;                                       // 0x0818 (size: 0x8)
    class UCurveFloat* m_jumpLengthWeight_Curve;                                      // 0x0820 (size: 0x8)
    class UCurveFloat* m_jumpHeightWeight_Curve;                                      // 0x0828 (size: 0x8)
    float m_jumpVisibilityWeight;                                                     // 0x0830 (size: 0x4)
    float m_idealShortestJumpLength;                                                  // 0x0834 (size: 0x4)
    class UCurveFloat* m_runningidealShortestJumpLength_Curve;                        // 0x0838 (size: 0x8)
    float m_jumpSearchDirectionRotationRatio;                                         // 0x0840 (size: 0x4)
    float m_jumpSearchClampingAngle;                                                  // 0x0844 (size: 0x4)
    float m_maxJumpAngle;                                                             // 0x0848 (size: 0x4)
    class UCurveFloat* m_upJumpCurve;                                                 // 0x0850 (size: 0x8)
    class UCurveFloat* m_downJumpCurve;                                               // 0x0858 (size: 0x8)
    float m_jumpDownPressedTriggerTime;                                               // 0x0860 (size: 0x4)
    bool m_enableButtonHeldJump;                                                      // 0x0864 (size: 0x1)
    float m_jumpDownMaximumDistanceToGap;                                             // 0x0868 (size: 0x4)
    float m_jumpTrajectoryCastRadius;                                                 // 0x086C (size: 0x4)
    float m_autoJumpMaxDistanceToObstacle;                                            // 0x0870 (size: 0x4)
    class UCurveFloat* m_runningAutoJumpMaxDistanceToObstacle;                        // 0x0878 (size: 0x8)
    float m_jumpProbeRadius;                                                          // 0x0880 (size: 0x4)
    float m_jumpProbeInterval;                                                        // 0x0884 (size: 0x4)
    float m_additionaProbeRaycastRadius;                                              // 0x0888 (size: 0x4)
    bool m_oneButtonJumpMode;                                                         // 0x088C (size: 0x1)
    float m_hangingTriggerAngle;                                                      // 0x0890 (size: 0x4)
    float m_hangingTriggerAngleHysteresis;                                            // 0x0894 (size: 0x4)
    float m_hangingIntermediateRatio;                                                 // 0x0898 (size: 0x4)
    float m_hangingStartTime;                                                         // 0x089C (size: 0x4)
    float m_hangingJumpDownTime;                                                      // 0x08A0 (size: 0x4)
    float m_hangingMaxVelocityThreshold;                                              // 0x08A4 (size: 0x4)
    float m_hangingTriggeringDistanceToPlane;                                         // 0x08A8 (size: 0x4)
    float m_hangingTriggeringDistanceToPlaneHysteresis;                               // 0x08AC (size: 0x4)
    float m_hangingPivotDistance;                                                     // 0x08B0 (size: 0x4)
    class UCurveFloat* m_inputOverRailDirectionAngle_InputFactor_Curve;               // 0x08B8 (size: 0x8)
    float m_maxRailDetectionSize;                                                     // 0x08C0 (size: 0x4)
    float m_maxInterplaneAngle;                                                       // 0x08C4 (size: 0x4)
    float m_railEndMargin;                                                            // 0x08C8 (size: 0x4)
    class UZurgSettings* m_zurgSettingsReference;                                     // 0x08D0 (size: 0x8)
    float m_ZurgMinSpeedModifier;                                                     // 0x08D8 (size: 0x4)
    float m_struggleGaugeReinitValueAfterCompletion;                                  // 0x08DC (size: 0x4)
    float m_struggleGaugePressIncrement;                                              // 0x08E0 (size: 0x4)
    float m_struggleGaugeDecayOverTime;                                               // 0x08E4 (size: 0x4)
    uint16 m_ejectedZurgsOnStruggleCompletion;                                        // 0x08E8 (size: 0x2)
    FVector m_gravity;                                                                // 0x08EC (size: 0xC)
    float m_maxFallSpeed;                                                             // 0x08F8 (size: 0x4)
    bool m_canDieOnFall;                                                              // 0x08FC (size: 0x1)
    float m_deadlyFallDistance;                                                       // 0x0900 (size: 0x4)
    FDriftParameters m_baseDriftParameters;                                           // 0x0908 (size: 0x18)
    float m_driftLocomotionBeginIgnoreTime;                                           // 0x0920 (size: 0x4)
    float m_driftModeEnterThreshold;                                                  // 0x0924 (size: 0x4)
    float m_driftModeExitThreshold;                                                   // 0x0928 (size: 0x4)
    bool m_enableCatAnimationFeature;                                                 // 0x092C (size: 0x1)
    float m_catAnimationPressTime;                                                    // 0x0930 (size: 0x4)
    TArray<class UAnimSequence*> m_catAnimations;                                     // 0x0938 (size: 0x10)
    FString m_zurgSocketPrefix;                                                       // 0x0968 (size: 0x10)
    float m_jumpGroundCollisionTestOffset;                                            // 0x0978 (size: 0x4)
    FGroundProbeData m_previousProbeData;                                             // 0x0B00 (size: 0x90)
    FGroundProbeData m_currentProbeData;                                              // 0x0B90 (size: 0x90)
    TArray<class AActor*> m_movementIgnoredActors;                                    // 0x0C20 (size: 0x10)
    float m_stepSmoothingTriggerAngleThreshold;                                       // 0x0D18 (size: 0x4)
    float m_stepSmoothingTriggerHeightThreshold;                                      // 0x0D1C (size: 0x4)
    float m_stepSmoothingEndAngleThreshold;                                           // 0x0D20 (size: 0x4)
    float m_stepSmoothingEndHeightThreshold;                                          // 0x0D24 (size: 0x4)
    FSmootherFloat m_stepPitchSmoother;                                               // 0x0D28 (size: 0xC)
    FSmootherFloat m_stepHeightSmoother;                                              // 0x0D34 (size: 0xC)
    class USplineRailComponent* m_nextRail;                                           // 0x0D40 (size: 0x8)
    class USplineRailComponent* m_currentRail;                                        // 0x0D48 (size: 0x8)
    class USplineRailComponent* m_previousDispatchRail;                               // 0x0D50 (size: 0x8)
    TArray<class USplineRailConnection*> m_overlappingRailConnexions;                 // 0x0D58 (size: 0x10)
    float m_railEnterLimitAngle;                                                      // 0x0D68 (size: 0x4)
    float m_railEnterFacingLimitAngle;                                                // 0x0D6C (size: 0x4)
    float m_railEnterDistance;                                                        // 0x0D70 (size: 0x4)
    float m_railExitDistance;                                                         // 0x0D74 (size: 0x4)
    float m_minimumRailLength;                                                        // 0x0D78 (size: 0x4)
    float m_railSitLerpInTime;                                                        // 0x0D7C (size: 0x4)
    float m_railSitLerpOutTime;                                                       // 0x0D80 (size: 0x4)
    float m_railSitExitAngle;                                                         // 0x0D84 (size: 0x4)
    float m_perchExitDistanceThreshold;                                               // 0x0F10 (size: 0x4)
    float m_perchExitAngleThreshold;                                                  // 0x0F14 (size: 0x4)
    float m_perchEnterTime;                                                           // 0x0F18 (size: 0x4)
    float m_maxJumpDownHeight;                                                        // 0x0F80 (size: 0x4)
    float m_maxJumpDownAngleDeviation;                                                // 0x0F84 (size: 0x4)
    float m_jumpOnRailEndInputAngleMaxArc;                                            // 0x0F88 (size: 0x4)
    float m_jumpBeginAnimationMovement;                                               // 0x0F8C (size: 0x4)
    float m_jumpMinimumPreRotationTime;                                               // 0x0F90 (size: 0x4)
    float m_jumpEndLerpTime;                                                          // 0x0F94 (size: 0x4)
    float m_slowJumpThreshold;                                                        // 0x0F98 (size: 0x4)
    FJumpData m_nextJumpData;                                                         // 0x0FA0 (size: 0x460)
    FJumpData m_currentJumpData;                                                      // 0x1400 (size: 0x460)
    TArray<FJumpData> m_activeJumpTargets;                                            // 0x1890 (size: 0x10)
    TArray<FJumpData> m_passiveJumpTargets;                                           // 0x18A0 (size: 0x10)
    TArray<FJumpData> m_crossingJumpTargets;                                          // 0x18B0 (size: 0x10)
    TArray<FCatLookAtEntry> m_lookAtStack;                                            // 0x1900 (size: 0x10)
    float m_lookAtValidYawRange;                                                      // 0x1910 (size: 0x4)
    float m_UTurnInputThreshold;                                                      // 0x1A68 (size: 0x4)
    FSmootherRotation m_UTurnTargetRotationSmoother;                                  // 0x1A70 (size: 0x30)
    FSmootherRotation m_hangingInputSmoother;                                         // 0x1BC0 (size: 0x30)
    FSmootherTransform m_hangingBaseTransformSmoother;                                // 0x1BF0 (size: 0x70)
    FSmootherTransform m_hangingTargetTransformSmoother;                              // 0x1C60 (size: 0x70)
    float m_hangingEnterTime;                                                         // 0x1CD0 (size: 0x4)
    float m_hangingAnimationTime;                                                     // 0x1CD4 (size: 0x4)
    float m_hangingExitInputAngleAmplitude;                                           // 0x1CD8 (size: 0x4)
    TArray<class AActor*> m_fearRepelSources;                                         // 0x1DD0 (size: 0x10)
    float m_fearTime;                                                                 // 0x1DE4 (size: 0x4)
    TArray<FZurgSocket> m_zurgSockets;                                                // 0x1DF0 (size: 0x10)
    class ABackpack* M_BackPack;                                                      // 0x1E18 (size: 0x8)
    class UCatAnimInstance* m_animInstance;                                           // 0x1F98 (size: 0x8)
    TArray<FName> m_jumpDebugDataTrackedBones;                                        // 0x1FA0 (size: 0x10)
    float m_jumpDebugDataSamplesPerSecond;                                            // 0x1FB0 (size: 0x4)
    float m_rootAlignmentThreshold;                                                   // 0x1FB4 (size: 0x4)
    float m_jumpOnRailEndRotationLerpFactor;                                          // 0x1FB8 (size: 0x4)
    float m_movingJumpPredictionTime;                                                 // 0x1FBC (size: 0x4)
    float m_movingJumpSmootingTime;                                                   // 0x1FC0 (size: 0x4)
    TMap<class USceneComponent*, class AScriptedJump*> m_scriptedJumpEntries;         // 0x2068 (size: 0x50)
    class AScriptedJump* m_currentScriptedJump;                                       // 0x20B8 (size: 0x8)
    class USceneComponent* m_scriptedJumpStartEntry;                                  // 0x20C0 (size: 0x8)
    class USceneComponent* m_scriptedJumpAnimationBegin;                              // 0x20C8 (size: 0x8)
    class USceneComponent* m_scriptedJumpAnimationEnd;                                // 0x20D0 (size: 0x8)
    class UAnimSequence* m_scriptedJumpAnimation;                                     // 0x20E0 (size: 0x8)
    float m_scriptedJumpApproachTime;                                                 // 0x2110 (size: 0x4)
    class UMovingActorComponent* m_movingActorComponent;                              // 0x2118 (size: 0x8)
    class UMovingActorComponent* m_jumpBeginComponent;                                // 0x2170 (size: 0x8)
    class UMovingActorComponent* m_jumpEndComponent;                                  // 0x25E0 (size: 0x8)
    TWeakObjectPtr<class UPhysicalMaterial> m_groundMaterial;                         // 0x2638 (size: 0x8)
    TWeakObjectPtr<class UPrimitiveComponent> m_groundVisualObject;                   // 0x2640 (size: 0x8)
    TArray<FGroundMaterialOverrideEntry> m_groundMaterialOverrideStack;               // 0x2648 (size: 0x10)
    class AActor* m_hideoutActor;                                                     // 0x2660 (size: 0x8)
    class USplineComponent* m_splineToFollow;                                         // 0x2670 (size: 0x8)
    float m_followSplineDistancePredictionFactor;                                     // 0x2678 (size: 0x4)
    FVectorPIDController m_followSplineInputPID;                                      // 0x267C (size: 0x30)
    float m_followSplineStopTimePrediction;                                           // 0x26AC (size: 0x4)
    float m_skipSplineDistance;                                                       // 0x26B0 (size: 0x4)
    class UAnimSequence* m_followSplineEndInterpolateAnimation;                       // 0x26B8 (size: 0x8)
    float m_followSplineFailSafeTime;                                                 // 0x26C0 (size: 0x4)
    class UAnimSequence* m_interpolateAnimation;                                      // 0x2720 (size: 0x8)
    class USplineRailComponent* m_railToFollow;                                       // 0x2730 (size: 0x8)
    float m_automatedRailHangingCompleteThreshold;                                    // 0x2744 (size: 0x4)
    bool m_isCrossingEnabled;                                                         // 0x2758 (size: 0x1)
    bool m_exludeCrossingFromJumps;                                                   // 0x2759 (size: 0x1)
    float m_maxCrossingLength;                                                        // 0x275C (size: 0x4)
    float m_maxRunningCrossingLength;                                                 // 0x2760 (size: 0x4)
    float m_minCrossingHeight;                                                        // 0x2764 (size: 0x4)
    float m_maxCrossingHeight;                                                        // 0x2768 (size: 0x4)
    float m_crossingMaxInputAngle;                                                    // 0x276C (size: 0x4)
    float m_crossingMaxInputCatAngle;                                                 // 0x2770 (size: 0x4)
    float m_crossingMaxDistanceToObstacle;                                            // 0x2774 (size: 0x4)
    float m_crossingMaxTimeToObstacle;                                                // 0x2778 (size: 0x4)
    TArray<float> m_probeDirectionAngles;                                             // 0x2830 (size: 0x10)
    bool m_enabledDistanceFieldPilot;                                                 // 0x2840 (size: 0x1)
    float m_distanceToObstacle;                                                       // 0x2844 (size: 0x4)
    float m_negativeDistanceToObstacleWeight;                                         // 0x2848 (size: 0x4)
    float m_angleDeviationWeight;                                                     // 0x284C (size: 0x4)
    float m_smoothSamplingTime;                                                       // 0x2850 (size: 0x4)
    float m_distanceDiffThreshold;                                                    // 0x2854 (size: 0x4)
    int32 m_relaxIterationsCount;                                                     // 0x2858 (size: 0x4)
    float m_pilotTimeAhead;                                                           // 0x285C (size: 0x4)
    float m_pilotDistanceToObstacle;                                                  // 0x2860 (size: 0x4)
    float m_pilotSideFavorAngleThreshold;                                             // 0x2864 (size: 0x4)
    float m_pilotProbeDistanceAhead;                                                  // 0x2868 (size: 0x4)
    float m_pilotProbeDeviationAngle;                                                 // 0x286C (size: 0x4)
    FRuntimeFloatCurve m_pilotResponseCurve;                                          // 0x2870 (size: 0x88)
    FRuntimeFloatCurve m_pilotAngleCompensationCurve;                                 // 0x28F8 (size: 0x88)
    bool m_pilotDebugProbe;                                                           // 0x2980 (size: 0x1)
    bool m_pilotDebugDistanceField;                                                   // 0x2981 (size: 0x1)
    bool m_pilotDebugPathFind;                                                        // 0x2982 (size: 0x1)
    bool m_pilotDebugPath;                                                            // 0x2983 (size: 0x1)
    float m_interactionRadiusHysteresis;                                              // 0x29C8 (size: 0x4)
    float m_closestInteractionHysteresis;                                             // 0x29CC (size: 0x4)
    float m_interactionSourcePoleHeight;                                              // 0x29D0 (size: 0x4)
    FRuntimeFloatCurve m_usableDistanceToCatWeight;                                   // 0x29D8 (size: 0x88)
    FRuntimeFloatCurve m_usableAngleWithCatForwardWeight;                             // 0x2A60 (size: 0x88)
    FRuntimeFloatCurve m_usableNormalizedDistanceToScreenCenterWeight;                // 0x2AE8 (size: 0x88)
    class USoundBase* m_defaultStartInteractionSound;                                 // 0x2B70 (size: 0x8)
    TMap<class UCatUsableComponentBase*, class FInteractionData> m_availableInteractions; // 0x2B78 (size: 0x50)
    class UCatUsableComponentBase* m_closestInteraction;                              // 0x2BC8 (size: 0x20)
    TArray<class UCatUsableComponentBase*> m_pendingInteractions;                     // 0x2BE8 (size: 0x10)
    class UCatUsableComponentBase* m_overrideInteraction;                             // 0x2C48 (size: 0x20)
    class UCatUsableComponentBase* m_lookedAtInteraction;                             // 0x2C68 (size: 0x8)
    TMap<AActor*, int32> m_interactionActorsDependencies;                             // 0x2C70 (size: 0x50)
    float m_validTransformInterval;                                                   // 0x2CC0 (size: 0x4)
    float m_validTransformMaxObstacleDistance;                                        // 0x2CC4 (size: 0x4)
    int32 m_storedValidTransformCount;                                                // 0x2CC8 (size: 0x4)
    bool m_validTransformDebugEnabled;                                                // 0x2CCC (size: 0x1)
    FFloatRange m_idleTriggerTimeRange;                                               // 0x2CE4 (size: 0x10)
    bool m_canFailJumps;                                                              // 0x2D40 (size: 0x1)
    FInt32Range m_jumpsBeforeFailRange;                                               // 0x2D44 (size: 0x10)
    FRotator m_cameraSavedRelativeRotation;                                           // 0x3784 (size: 0xC)
    bool m_debugHanging;                                                              // 0x3790 (size: 0x1)
    bool m_debugUturn;                                                                // 0x3791 (size: 0x1)
    bool m_debugInputs;                                                               // 0x3792 (size: 0x1)
    uint32 m_debugLastJumpFlags;                                                      // 0x3794 (size: 0x4)
    uint32 m_debugCatGroundProbeFlags;                                                // 0x3798 (size: 0x4)
    uint32 m_debugJumpSearchFlags;                                                    // 0x379C (size: 0x4)

    void UpdateSpeedModifier(FName _key, float _speedModifier);
    void UpdateLookAt(FName _id, FLookAtData _target);
    void Unfreeze();
    bool TryJumpOnRail(class USplineRailComponent* _rail, const FVector& _closestLocation);
    bool TryJump(const FVector& _targetLocation, const FRotator& _targetRotation, bool _rejectAtLevelJumpsWithoutGaps);
    bool TryHangOnRail(const FVector& _targetLocation);
    bool TeleportOnRail(FVector _position, FRotator _rotation, class USplineRailComponent* _rail, bool _teleportCamera);
    bool Teleport(FVector _position, FRotator _rotation, bool _checkValidity, bool _teleportCamera);
    void StopWalkInterpolate();
    void StopInterpolateAnimationAlongSpline();
    void StopInterpolateAnimation();
    void StopInteraction(class UCatUsableComponentBase* _catUsableComponent);
    void StopFollowSpline();
    void StopFollowRail();
    void StopCustomAnimation();
    void StopAutomatedRailHanging();
    void StopAllInteractions();
    void StartInteraction(class UCatUsableComponentBase* _catUsableComponent);
    bool ShouldUseJumpStopRailAnimation();
    bool ShouldUseJumpStopAnimation();
    bool ShouldInstantlyExitTrailingAnimations();
    void SetOverrideInteraction(TEnumAsByte<EUsableInteractionButton> _button, class UCatUsableComponentBase* _catUsableComponent);
    void SetInvertCameraAxis(bool _invertCamera);
    void SetInterpolateOverridenRotation(FRotator _overridenRotation);
    void SetHideoutActor(class AActor* _hideoutActor);
    void SetGroundHangingEnabled(bool _enabled);
    void SetFollowSplineMaxSpeed(float _maxSpeed);
    void SetFarInteractionRange(float _range);
    void SetCustomMovementEnabled(bool _enabled);
    void SetCustomAnimationPlayRate(float _playRate);
    void SetBackpackFur(bool _backpackOn);
    float RotationRatioFilter(float _rotationRatio, float _dt);
    void ResetInput(FVector _worldInput);
    void RemoveMovementIgnoredActor(class AActor* _actor);
    void PushUTurnDisabled();
    void PushSpeedModifier(FName _key, float _speedModifier, float _inTime);
    void PushRunningDisabled();
    void PushPilotDisabled();
    void PushMovementDisabled();
    void PushMeowDisabled();
    void PushLookAtDisabled();
    void PushLookAt(FName _id, FLookAtData _target, int32 _priority);
    void PushJumpFailAnimationDisabled();
    void PushJumpDisabled();
    void PushInvincibility();
    void PushInputDisabled();
    void PushIdleExitDisabled();
    void PushIdleDisabled();
    void PushHangingDisabled();
    void PushGroundMaterialOverride(FName _id, class UPhysicalMaterial* _material, int32 _priority);
    void PushDriftParameters(FName _id, FDriftParameters _driftParameters);
    void PushCrossingDisabled();
    void PushCatButtonDisabled();
    void PushAttitude(FName _id, TEnumAsByte<ECatAttitude> _attitude);
    float ProcessRotationRatio(float _rotationRatio, float _dt);
    FVector ProcessRawInput(FVector _input, float _dt);
    FVector ProcessMovementInput(FVector _input, float _dt);
    FVector ProcessInput(FVector _input, float _dt);
    void PopUTurnDisabled();
    void PopSpeedModifier(FName _key, float _outTime);
    void PopRunningDisabled();
    void PopPilotDisabled();
    void PopMovementDisabled();
    void PopMeowDisabled();
    void PopLookAtDisabled();
    void PopLookAt(FName _id);
    void PopJumpFailAnimationDisabled();
    void PopJumpDisabled();
    void PopInvincibility();
    void PopInputDisabled();
    void PopIdleExitDisabled();
    void PopIdleDisabled();
    void PopHangingDisabled();
    void PopGroundMaterialOverride(FName _id);
    void PopDriftParameters(FName _id);
    void PopCrossingDisabled();
    void PopCatButtonDisabled();
    void PopAttitude(FName _id);
    bool PollUTurnRequested();
    void PlaySynchronizedCustomAnimation(class UAnimSequence* _animation, const FTransform& _movementStart, float _syncTime, bool _isLooping, bool _enableLookAt, bool _keepCollisions);
    void PlayCustomAnimation(class UAnimSequence* _animation, bool _isLooping, bool _enableLookAt);
    void OnUTurnAnimationStarted(class UAnimInstance* _animInstance);
    void OnUTurnAnimationFinished();
    void OnTeleport();
    void OnStruggled();
    void OnResetInput(FVector _worldInput);
    void OnMeowed(bool _isGameplayMeow);
    void OnJumpEnd();
    void OnJumpBegin();
    void OnJumpAnimationStarted(class UAnimInstance* _animInstance);
    void OnExitGrabbed();
    void OnEnterGrabbed();
    void OnCat();
    void NotifyJumpStopAnimationBegin();
    void NotifyHangingExitAnimationStarted();
    void NotifyCanExitAnimation();
    void NotifyCameraCut(const FTransform& _currentCameraTransform, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime);
    void Meow(bool _isGameplayMeow);
    bool IsWallPerched();
    bool IsWalkInterpolating();
    bool IsUTurnLeft();
    bool IsUTurning();
    bool IsUTurnEnabled();
    bool IsShoulderCameraDisabled();
    bool IsRunningRequested();
    bool IsRunningEnabled();
    bool IsRunning();
    bool IsPossessed();
    bool IsPointPerch();
    bool IsPlayerCat();
    bool IsPilotDisabled();
    bool IsPerchRequested();
    bool IsPerched();
    bool IsOnRailConnection();
    bool IsOnRail();
    bool IsMeowPressed();
    bool IsMeowEnabled();
    bool IsLookAtEnabled();
    bool IsJumpUpPressed();
    bool IsJumpInputEnabled();
    bool IsJumping();
    bool IsJumpFailAnimationEnabled();
    bool IsJumpFailAnimationAllowed();
    bool IsJumpEnabled();
    bool IsJumpDownPressed();
    bool IsInUTurnAnimation();
    bool IsInterpolatingAnimationAlongSpline();
    bool IsInterpolating();
    bool IsInteractionEnabled(TEnumAsByte<EUsableInteractionButton> _button);
    bool IsInteracting(TEnumAsByte<EUsableInteractionButton> _button);
    bool IsInScriptedJump();
    bool IsInOneButtonJumpMode();
    bool IsInNormalLocomotion();
    bool IsInJumpTrajectory();
    bool IsInJumpState();
    bool IsInJumpBegin();
    bool IsInFear();
    bool IsInExitingHangingFirstPhase();
    bool IsInCameraShoulderMode();
    bool IsIdleEnabled();
    bool IsIdle();
    bool IsHangingRequested();
    bool IsHangingEnabled();
    bool IsHanging();
    bool IsHackObstacle(const class AActor* _actor);
    bool IsGroundHangingEnabled();
    bool IsGrabbed();
    bool IsFrozen();
    bool IsFreeZurgSlotAvailable();
    bool IsFollowingSpline();
    bool IsFollowingRail();
    bool IsFearRepelEnabled();
    bool IsFalling();
    bool IsExitingHangingLeft();
    bool IsExitingHanging180();
    bool IsExitingHanging();
    bool IsDoingAutomatedRailHanging();
    bool IsDead();
    bool IsCustomMovementEnabled();
    bool IsCustomAnimationEnabled();
    bool IsCrossing();
    bool IsCatButtonReleased();
    bool IsCatButtonPressed();
    bool IsCatButtonEnabled();
    bool IsCatButtonDown();
    bool IsCatAnimationEnabled();
    bool IsBeingFearRepelled();
    void InternalStopCustomAnimation(class UAnimSequence* _animation);
    FVector InputFilter(FVector _input, float _dt);
    bool InitScriptedJump(class AScriptedJump* _jump, class USceneComponent* _entry);
    bool InitJump(const FJumpData& _jumpData, bool _useWalkInterpolate);
    bool HasCustomAnimationFinishedPlay();
    TArray<FZurgSocket> GetZurgSockets();
    float GetWallPerchRatio();
    float GetWalkingMaxSpeed();
    float GetVelocityRatio();
    FRailHangingTestResult GetUTurnTarget();
    FRailHangingTestResult GetUTurnSource();
    TArray<FJumpData> GetUpJumpTargets();
    class USplineComponent* GetSplineToFollow();
    class USkeletalMeshComponent* GetSkeletalMesh();
    float GetRunningMaxSpeed();
    float GetRotationRatio();
    FVector GetRawStickInput();
    FVector GetProcessedWorldInput();
    TArray<float> GetProbeDirectionAngles();
    float GetPerchAngle();
    FVector GetMovementInput();
    TArray<class AActor*> GetMovementIgnoredActors();
    float GetMinimumRailLength();
    float GetMaxLife();
    FRotator GetLookAtRotator();
    FVector GetLocationOnRail();
    float GetLocalVelocityRatio();
    FVector GetLocalVelocity();
    FVector GetLocalGroundVelocity();
    FQuat GetLocalAngularVelocity();
    float GetLife();
    float GetLegsHeight();
    float GetJumpUpPressedTimer();
    float GetJumpTrajectoryMotionRatio();
    FVector GetJumpStartVelocity();
    FRotator GetJumpSearchRotation();
    float GetJumpScore(const FJumpData& _jumpData);
    float GetJumpDownPressedTriggerTime();
    float GetJumpAnimationRemainingTime();
    class UAnimSequence* GetInterpolateAnimation();
    float GetInputThreshold();
    class AActor* GetHideoutActor();
    void GetHeadSocket(class USceneComponent*& _outComponent, FName& _outSocketName);
    FVector GetHeadLocation();
    FPlane GetHangingPlane();
    float GetHangingAngle();
    FGroundProbeData GetGroundProbeData();
    float GetFollowSplineMaxSpeed();
    float GetFinalSpeedModifier();
    FDriftParameters GetFinalDriftParameters();
    float GetFarInteractionRange();
    class USceneComponent* GetDroneUnfoldedSocket(FName& _outSocketName);
    class USceneComponent* GetDroneUnfoldedLookSocket(FName& _outSocketName);
    class USceneComponent* GetDroneFoldedSocket(FName& _outSocketName);
    float GetDriftFactor();
    float GetDriftAnimationPlayRate();
    TArray<FJumpData> GetDownJumpTargets();
    float GetDistanceOnRail();
    class USoundBase* GetDefaultStartInteractionSound();
    FCustomAnimation GetCustomAnimation();
    class UAnimSequence* GetCurrentScriptedJumpAnimation();
    class AScriptedJump* GetCurrentScriptedJump();
    class USplineRailComponent* GetCurrentRail();
    float GetCurrentJumpLength();
    float GetCurrentJumpHeight();
    FJumpData GetCurrentJumpData();
    TArray<class UCatUsableComponentBase*> GetCurrentInteractions(TEnumAsByte<EUsableInteractionButton> _button);
    class UCatUsableComponentBase* GetCurrentInteraction(TEnumAsByte<EUsableInteractionButton> _button);
    class UPrimitiveComponent* GetCurrentGroundVisualObject();
    class UPhysicalMaterial* GetCurrentGroundMaterial();
    FVector GetCorrectedWorldInput();
    class UCatUsableComponentBase* GetClosestInteraction(TEnumAsByte<EUsableInteractionButton> _button);
    class UCapsuleComponent* GetCapsule();
    class ACameraThirdPerson* GetCameraThirdPerson();
    class ABackpack* GetBackpack();
    TEnumAsByte<ECatAttitude> GetAttitude();
    class UCatAnimInstance* GetAnimInstance();
    FTransform GetAnimationLastRootMotion();
    FQuat GetAngularVelocity();
    void Freeze();
    void ForceJumpOnRail(class USplineRailComponent* _rail, const FVector& _closestLocation);
    void ForceJump(const FVector& _targetLocation, const FRotator& _targetRotation);
    void ForceGroundMaterialUpdate();
    void FearRepel(class AActor* _source);
    void EnableShoulderCamera();
    void EnableInteraction(TEnumAsByte<EUsableInteractionButton> _button);
    void EnableFearRepel();
    void EnableDroneMainActions();
    void EnableAllInteractions();
    void DisableShoulderCamera();
    void DisableInteraction(TEnumAsByte<EUsableInteractionButton> _button);
    void DisableFearRepel();
    void DisableDroneMainActions();
    void DisableAllInteractions();
    void Die();
    void DetachZurg(class AZurgPawnSlave* _zurg);
    void ClearFollowSplineMaxSpeed();
    bool CheckScriptedJumpRoutine(const TMap<class USceneComponent*, class AScriptedJump*>& _scriptedJumps);
    bool CheckOneButtonJumpRoutine(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets, FJumpData& _outJumpTarget);
    bool CheckJumpValidity(const FJumpData& _jumpTargets, FString& _failReason);
    bool CheckJumpUpValidity(const FJumpData& _jumpTargets);
    bool CheckJumpRoutine(const TArray<FJumpData>& _upJumpTargets, const TArray<FJumpData>& _downJumpTargets);
    bool CheckJumpDownValidity(const FJumpData& _jumpTargets);
    void CatZurgDelegate__DelegateSignature(class ACatPawn* _catPawn, class AZurgPawn* _zurg);
    void CatUsableDelegate__DelegateSignature(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    void CatInteractionDelegate__DelegateSignature(class ACatPawn* _catPawn, TEnumAsByte<EUsableInteractionButton> _button, class UCatUsableComponentBase* _usable);
    void CatDelegate__DelegateSignature(class ACatPawn* _catPawn);
    void CatContollerDelegate__DelegateSignature(class ACatPawn* _catPawn, class AHKPlayerController* _playerController);
    bool CanExitAnimation();
    void BeginWalkInterpolate(FVector _targetLocation, FRotator _targetRotation);
    void BeginMoveToTarget(FVector _location, FRotator _rotation, bool _precise);
    void BeginInterpolateAnimationAlongSpline(class UAnimSequence* _animation, class USplineComponent* _spline, FCatInterpolateAlongSplineParams _params);
    void BeginInterpolateAnimation(class UAnimSequence* _animation, FVector _targetLocation, FRotator _targetRotation);
    void BeginFollowSpline(class USplineComponent* _splineComponent, bool _precise, float _targetInputKey);
    void BeginFollowRail(class USplineRailComponent* _rail, float _targetDistance, bool _precise);
    void AttachZurg(class AZurgPawnSlave* _zurg);
    void AddMovementIgnoredActor(class AActor* _actor);
    void _OnPotentialInteractionEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    void _OnLifeComponentKilled(class ULifeComponent* _lifeComponent, class AActor* _killer);
    void _OnLargeInteractionColliderEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnLargeInteractionColliderBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void _OnGrabCapsuleBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    void _OnGamepadShaked();
    void _OnCurrentRailEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
    void _OnCameraChanged(class AHKPlayerCameraManager* _manager, const FTransform& _currentCameraTransform, class AActor* _nextTarget, FViewTargetTransitionParams _transitionParams, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime);
    void _OnAttachedZurgEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
}; // Size: 0x37B0

class UCatPlayAnimationComponent : public UCatMoveToUsableComponent
{
    class UAnimSequence* m_animation;                                                 // 0x0598 (size: 0x8)
    float m_syncTime;                                                                 // 0x05A0 (size: 0x4)

}; // Size: 0x5B0

struct FCatRemoteAction
{
    class AActor* Target;                                                             // 0x0000 (size: 0x8)
    bool PreciseMove;                                                                 // 0x0008 (size: 0x1)
    bool JumpTransition;                                                              // 0x0009 (size: 0x1)

}; // Size: 0x10

class ACatRemoteController : public AActor
{
    TArray<FCatRemoteAction> m_actions;                                               // 0x0228 (size: 0x10)
    bool m_autoStart;                                                                 // 0x0238 (size: 0x1)
    bool m_loopSequence;                                                              // 0x0239 (size: 0x1)
    class ACatPawn* m_controlledCat;                                                  // 0x0240 (size: 0x8)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0248 (size: 0x8)

    void StopSequence();
    void StartSequence();
    void _OnJumpEnd(class ACatPawn* _cat);
    void _OnFollowSplineEndReached(class ACatPawn* _cat);
}; // Size: 0x258

class UChapterEntryWidget : public UHKUserWidget
{
    class UHKButton* MainButton;                                                      // 0x02F0 (size: 0x8)
    class UHKTextBlock* ChapterText;                                                  // 0x02F8 (size: 0x8)
    class UHKTextBlock* MemoryText;                                                   // 0x0300 (size: 0x8)
    class UImage* LockedImage;                                                        // 0x0308 (size: 0x8)
    class UImage* ChapterImage;                                                       // 0x0310 (size: 0x8)
    class UImage* ChapterSelectedImage;                                               // 0x0318 (size: 0x8)
    FText m_memoryText;                                                               // 0x0320 (size: 0x18)
    FText m_restartDialogText;                                                        // 0x0338 (size: 0x18)
    FText m_unexploredChapterText;                                                    // 0x0350 (size: 0x18)

}; // Size: 0x3D0

class UChapterMenuWidget : public UHKUserWidget
{
    class UScrollBox* ChapterScrollBox;                                               // 0x02F0 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry1;                                         // 0x02F8 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry2;                                         // 0x0300 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry3;                                         // 0x0308 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry4;                                         // 0x0310 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry5;                                         // 0x0318 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry6;                                         // 0x0320 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry7;                                         // 0x0328 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry8;                                         // 0x0330 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry9;                                         // 0x0338 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry10;                                        // 0x0340 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry11;                                        // 0x0348 (size: 0x8)
    class UChapterEntryWidget* ChapterEntry12;                                        // 0x0350 (size: 0x8)
    class UHKButton* ChapterSelectionButton1;                                         // 0x0358 (size: 0x8)
    class UHKButton* ChapterSelectionButton2;                                         // 0x0360 (size: 0x8)
    class UHKButton* ChapterSelectionButton3;                                         // 0x0368 (size: 0x8)
    class UHKButton* ChapterSelectionButton4;                                         // 0x0370 (size: 0x8)
    class UHKButton* ChapterSelectionButton5;                                         // 0x0378 (size: 0x8)
    class UHKButton* ChapterSelectionButton6;                                         // 0x0380 (size: 0x8)
    class UHKButton* ChapterSelectionButton7;                                         // 0x0388 (size: 0x8)
    class UHKButton* ChapterSelectionButton8;                                         // 0x0390 (size: 0x8)
    class UHKButton* ChapterSelectionButton9;                                         // 0x0398 (size: 0x8)
    class UHKButton* ChapterSelectionButton10;                                        // 0x03A0 (size: 0x8)
    class UHKButton* ChapterSelectionButton11;                                        // 0x03A8 (size: 0x8)
    class UHKButton* ChapterSelectionButton12;                                        // 0x03B0 (size: 0x8)
    class UTexture2D* ChapterSelectionLocked;                                         // 0x03B8 (size: 0x8)
    class UTexture2D* ChapterSelectionUnLocked;                                       // 0x03C0 (size: 0x8)
    class UTexture2D* ChapterSelectionSelected;                                       // 0x03C8 (size: 0x8)
    class UImage* ChapterSelectionImage1;                                             // 0x03D0 (size: 0x8)
    class UImage* ChapterSelectionImage2;                                             // 0x03D8 (size: 0x8)
    class UImage* ChapterSelectionImage3;                                             // 0x03E0 (size: 0x8)
    class UImage* ChapterSelectionImage4;                                             // 0x03E8 (size: 0x8)
    class UImage* ChapterSelectionImage5;                                             // 0x03F0 (size: 0x8)
    class UImage* ChapterSelectionImage6;                                             // 0x03F8 (size: 0x8)
    class UImage* ChapterSelectionImage7;                                             // 0x0400 (size: 0x8)
    class UImage* ChapterSelectionImage8;                                             // 0x0408 (size: 0x8)
    class UImage* ChapterSelectionImage9;                                             // 0x0410 (size: 0x8)
    class UImage* ChapterSelectionImage10;                                            // 0x0418 (size: 0x8)
    class UImage* ChapterSelectionImage11;                                            // 0x0420 (size: 0x8)
    class UImage* ChapterSelectionImage12;                                            // 0x0428 (size: 0x8)
    class UHKButton* SelectButton;                                                    // 0x0430 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0438 (size: 0x8)

}; // Size: 0x440

class UChapterSubsystem : public UHKGameSubsystem
{

    void ChapterChanged__DelegateSignature(class UChapterSubsystem* _chapterSubsystem, EChapter _previousChapter, EChapter _currentChapter, bool _isOpeningChapter);
    void _OnBeforePersistentSaveDataSaved(class UHKSaveInstance* _saveInstance);
    void _OnAfterPersistentSaveDataLoaded(class UHKSaveInstance* _saveInstance);
}; // Size: 0x60

struct FPlayingAnimationSynchronizedActors
{
    class AActor* ActorSynchronized;                                                  // 0x0000 (size: 0x8)
    TArray<class UAnimSequence*> Animations;                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPlayingAnimation
{
    class UAnimSequence* Animation;                                                   // 0x0000 (size: 0x8)
    float Duration;                                                                   // 0x0008 (size: 0x4)
    float PlayPosition;                                                               // 0x000C (size: 0x4)
    bool IsLooping;                                                                   // 0x0010 (size: 0x1)
    bool IsSynchronized;                                                              // 0x0011 (size: 0x1)
    TArray<class UAnimSequence*> DroidAnimations;                                     // 0x0018 (size: 0x10)
    TArray<FPlayingAnimationSynchronizedActors> SynchronizedData;                     // 0x0028 (size: 0x10)
    bool KeepLastAnimationAsIdle;                                                     // 0x0038 (size: 0x1)

}; // Size: 0x40

class ACharacterDroid : public ACharacter
{
    FCharacterDroidOnDroidMovementAnimationSettingsChanged OnDroidMovementAnimationSettingsChanged; // 0x04C0 (size: 0x10)
    void DroidMovementAnimationChangeDelegate(class UDroidMovementAnimationSettings* newAnimationSettings);
    FCharacterDroidOnDroidActivationChanged OnDroidActivationChanged;                 // 0x04D0 (size: 0x10)
    void DroidActivationChangeDelegate(bool activated);
    FCharacterDroidIdleAnimationChanged IdleAnimationChanged;                         // 0x04E0 (size: 0x10)
    void IdleAnimationChangedDelegate(class UAnimSequence* Animation, bool skipBlend);
    FCharacterDroidIdleAnimationPositionChanged IdleAnimationPositionChanged;         // 0x04F0 (size: 0x10)
    void IdleAnimationPositionChangedDelegate(float newPosition);
    FCharacterDroidIsPlayingAnimationChanged IsPlayingAnimationChanged;               // 0x0500 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsRepellingCatChanged IsRepellingCatChanged;                       // 0x0510 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsWaitingForInteractionChanged IsWaitingForInteractionChanged;     // 0x0520 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsWithinDialogChanged IsWithinDialogChanged;                       // 0x0530 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsLookEnabledChanged IsLookEnabledChanged;                         // 0x0540 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidCurrentPostureChanged CurrentPostureChanged;                       // 0x0550 (size: 0x10)
    void CurrentPostureChanged(EDroidPosture newValue);
    FCharacterDroidIsShowDirectionEnabledChanged IsShowDirectionEnabledChanged;       // 0x0560 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsInRepelModeChanged IsInRepelModeChanged;                         // 0x0570 (size: 0x10)
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidOnDroidMovementStateChanged OnDroidMovementStateChanged;           // 0x0580 (size: 0x10)
    void DroidMovementStateChangeDelegate(EDroidMovementState newMovementState);
    FCharacterDroidOnDroidBehaviorChanged OnDroidBehaviorChanged;                     // 0x0590 (size: 0x10)
    void DroidBehaviorChanged(EDroidBehaviorState newBehavior);
    FCharacterDroidOnDroidLocomotionBehaviorChanged OnDroidLocomotionBehaviorChanged; // 0x05A0 (size: 0x10)
    void DroidLocomotionBehaviorChanged(EDroidLocomotionBehavior newLocomotionBehavior);
    bool m_drawMoveToDebug;                                                           // 0x05B0 (size: 0x1)
    float m_maxAngleToStartTurning;                                                   // 0x05B4 (size: 0x4)
    float m_movementTargetAngle;                                                      // 0x05B8 (size: 0x4)
    float m_movementTargetSpeed;                                                      // 0x05BC (size: 0x4)
    float m_movementSteppingLateralDistance;                                          // 0x05C0 (size: 0x4)
    float m_movementSteppingFrontalDistance;                                          // 0x05C4 (size: 0x4)
    float m_currentMoveToStopDistance;                                                // 0x05C8 (size: 0x4)
    float m_currentLateralAvoidanceValue;                                             // 0x05CC (size: 0x4)
    class USaveComponent* m_saveComponent;                                            // 0x05D0 (size: 0x8)
    class UStreamingComponent* m_streamingComponent;                                  // 0x05D8 (size: 0x8)
    class UGridSnappingComponent* m_catDetectorGridSnapping;                          // 0x05E0 (size: 0x8)
    class UCapsuleComponent* m_catDetector;                                           // 0x05E8 (size: 0x8)
    class UCapsuleComponent* m_repelZone;                                             // 0x05F0 (size: 0x8)
    class UArrowComponent* m_repelDirection;                                          // 0x05F8 (size: 0x8)
    class UTalkableComponent* m_talkable;                                             // 0x0600 (size: 0x8)
    class USplineComponent* m_pathFindSplineComponent;                                // 0x0608 (size: 0x8)
    bool m_doHateCats;                                                                // 0x0610 (size: 0x1)
    bool m_faceCatDuringRepel;                                                        // 0x0611 (size: 0x1)
    class UMaterialInstance* m_baseScreenMaterial;                                    // 0x0618 (size: 0x8)
    class UMaterialInstance* m_exchangeScreenMaterial;                                // 0x0620 (size: 0x8)
    class UMaterialInstance* m_talkScreenMaterial;                                    // 0x0628 (size: 0x8)
    bool m_doHeadFollowCat;                                                           // 0x0630 (size: 0x1)
    class UAnimSequence* m_idleAnimation;                                             // 0x0638 (size: 0x8)
    float m_lookAtSpeed;                                                              // 0x0640 (size: 0x4)
    class UAnimSequence* m_currentStumbleAnimation;                                   // 0x0648 (size: 0x8)
    class UAnimSequence* m_currentFallingAnimation;                                   // 0x0650 (size: 0x8)
    class UAnimSequence* m_currentRaiseFromFrontAnimation;                            // 0x0658 (size: 0x8)
    class UAnimSequence* m_currentRaiseFromBackAnimation;                             // 0x0660 (size: 0x8)
    FTransform m_initialMeshRelativeTransform;                                        // 0x0670 (size: 0x30)
    class ADroidManager* m_droidManager;                                              // 0x06A0 (size: 0x8)
    class AAIController* m_aiController;                                              // 0x06A8 (size: 0x8)
    class UDroidMovementAnimationSettings* m_currentMovementAnimationSettings;        // 0x06B0 (size: 0x8)
    class UDroidUsableComponent* m_currentUsable;                                     // 0x06F0 (size: 0x8)
    bool m_overrideLookAt;                                                            // 0x06F8 (size: 0x1)
    FVector m_lookAtOverrideDirection;                                                // 0x06FC (size: 0xC)
    EDroidLookAtType m_currentLookAtType;                                             // 0x0708 (size: 0x1)
    FLookAtData m_userLookAtData;                                                     // 0x0710 (size: 0x38)
    FLookAtData m_autonomousLookAtData;                                               // 0x0748 (size: 0x38)
    FLookAtData m_dialogLookAtData;                                                   // 0x0780 (size: 0x38)
    FLookAtData m_overrideLookAtData;                                                 // 0x07B8 (size: 0x38)
    FLookAtData m_showDirectionData;                                                  // 0x07F0 (size: 0x38)
    FLookAtData m_userShowDirection;                                                  // 0x0828 (size: 0x38)
    FLookAtData m_autonomousShowDirection;                                            // 0x0860 (size: 0x38)
    bool m_startsWithCollisionEnabled;                                                // 0x08B1 (size: 0x1)
    FName m_takeActorSocketName;                                                      // 0x08B4 (size: 0x8)
    FName m_headSocketName;                                                           // 0x08BC (size: 0x8)
    float m_aboutToStumbleTime;                                                       // 0x08C8 (size: 0x4)
    float m_stumbleChargeTime;                                                        // 0x08CC (size: 0x4)
    float m_stumbledTime;                                                             // 0x08E8 (size: 0x4)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;                              // 0x0955 (size: 0x1)
    float m_turnTowardsSpeedRatio;                                                    // 0x09A0 (size: 0x4)
    float m_minimumAngleForTurnTowardInDegree;                                        // 0x09A4 (size: 0x4)
    float m_repelMinimumTime;                                                         // 0x09D0 (size: 0x4)
    float m_repelPreparationDistance;                                                 // 0x09D4 (size: 0x4)
    float m_repelPreparationDistanceHysteresis;                                       // 0x09D8 (size: 0x4)
    bool m_lookAtCatWhenWaitingObject;                                                // 0x0A20 (size: 0x1)
    bool m_isMet;                                                                     // 0x0A21 (size: 0x1)
    bool m_shouldCollisionBeEnabled;                                                  // 0x0A40 (size: 0x1)
    class UHierarchicalStateMachine* m_sstateMachine;                                 // 0x0A48 (size: 0x8)
    float m_startingAngleCorrectionMaximum;                                           // 0x0A50 (size: 0x4)
    float m_startingCorrectionStartDistance;                                          // 0x0A54 (size: 0x4)
    bool m_useManualSkeletalMeshRefreshSetting;                                       // 0x0AD0 (size: 0x1)
    bool m_alwaysStationary;                                                          // 0x0AD1 (size: 0x1)
    EDroidOnMeowedBehavior m_currentOnMeowedBehavior;                                 // 0x0AD3 (size: 0x1)
    bool m_shouldBeActive;                                                            // 0x0ADA (size: 0x1)
    TArray<class USkeletalMeshComponent*> m_attachedSkeletalMeshComponents;           // 0x0AE0 (size: 0x10)

    void ThrowObjectTo(class UAnimSequence* _throwAnimation, class AActor* _throwToThisActor, float _trajectoryArc, bool _blendWithIdle);
    void TakeActor(class AActor* _actorToTake);
    void Stumble(class AActor* _stumbledUpon);
    void StopUseActor();
    void StopMoveTo();
    void StopAnimation();
    void StepTo(FTransform _stepToTransform);
    void StartUseActor(class AActor* _actorToUse);
    bool ShouldSkipIdleAnimationBlend();
    void SetTurnTowardsTarget(FLookAtData _target);
    void SetTurnTowardsEnabled(bool _enabled);
    void SetShowDirection(FLookAtData _data, bool _isAutonomous);
    void SetPosture(EDroidPosture _newPosture);
    void SetOnMeowedBehavior(EDroidOnMeowedBehavior _newOnMeowedBehavior);
    void SetMovementState(EDroidMovementState _movementMode);
    void SetMovementAnimationSettings(class UDroidMovementAnimationSettings* _newMovementSettings);
    void SetLookAtType(EDroidLookAtType _newLookAtType);
    void SetLookAt(FLookAtData _lookAtData);
    void SetInputMode(EDroidInputMode _inputMode);
    void SetIdlePosition(float _position);
    void SetIdleAnimation(class UAnimSequence* _animation, bool _skipBlend);
    void SetDisturbed(bool _disturbed);
    void SetDialog(class ADialog* _dialog);
    void SetCollisionEnabled(bool _enabled);
    void SetBehaviorState(EDroidBehaviorState _newBehaviorState);
    void PushScreenMaterial(FName _id, class UMaterialInstance* _materialInstance, int32 _priority);
    void Posture_Stumbling_Tick(float _dt);
    void Posture_Stumbling_Exit();
    void Posture_Stumbling_Enter();
    void Posture_StandingUp_Tick(float _dt);
    void Posture_StandingUp_Exit();
    void Posture_StandingUp_Enter();
    void Posture_RisingUp_Tick(float _dt);
    void Posture_RisingUp_Exit();
    void Posture_RisingUp_Enter();
    void Posture_Ragdoll_Tick(float _dt);
    void Posture_Ragdoll_Exit();
    void Posture_Ragdoll_Enter();
    void Posture_Falling_Tick(float _dt);
    void Posture_Falling_Exit();
    void Posture_Falling_Enter();
    void PopScreenMaterial(FName _id);
    void PlayAnimationSynchronized(TArray<class UAnimSequence*> _droidAnimations, TArray<FPlayingAnimationSynchronizedActors> _synchronizedData, bool _isLooping, bool _keepLastAnimationAsIdle);
    void PlayAnimationBehavior(class UAnimSequence* _anim, class AActor* _lookAtActor, float _time, float _maxRandomTime);
    void PlayAnimation(class UAnimSequence* _anim, float _duration, float _playPosition, bool _isLooping);
    void OnThrowObject();
    void OnScreenMaterialChanged(class UMaterialInstance* _materialInstance);
    void OnRaise(class UAnimSequence* _raiseFromFrontAnimation, class UAnimSequence* _raiseFromBackAnimation);
    void OnPreciseCatCollisionsEnabled(TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled);
    void OnDisplayDebug(class UCanvas* _canvas);
    void OnDialogStopped();
    void OnDialogLineDisplayed(class ADialog* _dialog);
    void OnDialogLineBegan(class ADialog* _dialog);
    void OnDialogBegan(class ADialog* _dialog);
    void NotifyStumbleAnimationDone();
    void NotifyRiseAnimationDone();
    void NotifyGoRagdoll();
    void NotifyDropActor();
    bool MoveDroidTo(class USplineComponent* _spline, FVector _destination, EDroidMovementSplineMode _splineMode, bool _preciseMoveTo, float _stopDistance);
    bool MakeStumble(class UAnimSequence* _stumbleAnimation);
    bool MakeRaise(class UAnimSequence* _raiseFromFrontAnimation, class UAnimSequence* _raiseFromBackAnimation);
    bool MakeFall(class UAnimSequence* _fallAnimation);
    bool IsWithinDialog();
    bool IsWaitingForInteraction();
    bool IsUsingActor();
    bool IsThrowingObject();
    bool IsStumbling();
    bool IsStreamedIn();
    bool IsShowDirectionEnabled();
    bool IsRisingFromStumble();
    bool IsRepellingCat();
    bool IsPlayingAnimationBehavior();
    bool IsPlayingAnimation();
    bool IsLookAtEnabled();
    bool IsInRepelMode();
    bool IsInPreciseMoveTo();
    bool IsInMoveTo();
    bool IsDisturbed();
    bool IsDazzled();
    bool IsAboutToStumble();
    void IdleAnimationPositionChangedDelegate__DelegateSignature(float newPosition);
    void IdleAnimationChangedDelegate__DelegateSignature(class UAnimSequence* Animation, bool skipBlend);
    bool HasStumbled();
    TArray<class AActor*> GetVisionIgnoredActors();
    class UMaterialInstance* GetTalkScreenMaterial();
    class UTalkableComponent* GetTalkableComponent();
    class AActor* GetTakenActor();
    class ACatPawn* GetSurroundingCat();
    float GetStopDistance();
    FVector GetShowDirectionTarget();
    class ARecastNavMesh* GetSelectedNavMeshRecastActor();
    float GetRepelZoneRadius();
    FVector GetRepelZoneCenter();
    float GetRepelPreparationDistance();
    FVector GetRepelDirection();
    FTransform GetPreciseMoveToTransform();
    EDroidPosture GetPosture();
    FPlayingAnimation GetPlayingAnimation();
    EDroidOnMeowedBehavior GetOnMeowedBehavior();
    FVector GetMoveToLocation();
    class UDroidMovementAnimationSettings* GetMovementAnimationSettings();
    EDroidLookAtType GetLookAtType();
    FVector GetLookAtLocation();
    class UAnimSequence* GetIdleAnimation();
    void GetHeadSocket(class USceneComponent*& _outComponent, FName& _outSocketName);
    FVector GetHeadLocation();
    FVector GetHeadForward();
    EDroidMovementState GetDroidMovementState();
    class ADialog* GetDialog();
    class UDroidUsableComponent* GetCurrentUsable();
    FLookAtData GetCurrentLookAtData();
    EDroidBehaviorState GetBehaviorState();
    FVector GetAvoidanceVelocity();
    void ForceStartUsing(class AActor* _actorToUse);
    void DropActorAt(FVector _location, FRotator _rotation);
    void DropActor();
    void DroidMovementStateChangeDelegate__DelegateSignature(EDroidMovementState newMovementState);
    void DroidMovementAnimationChangeDelegate__DelegateSignature(class UDroidMovementAnimationSettings* newAnimationSettings);
    void DroidLocomotionBehaviorChanged__DelegateSignature(EDroidLocomotionBehavior newLocomotionBehavior);
    void DroidBehaviorChanged__DelegateSignature(EDroidBehaviorState newBehavior);
    void DroidActivationChangeDelegate__DelegateSignature(bool activated);
    void CurrentPostureChanged__DelegateSignature(EDroidPosture newValue);
    void ClearLookAt();
    bool CanTalk();
    void BooleanChangedDelegate__DelegateSignature(bool newValue);
    void Behavior_ThrowObject_Tick(float _dt);
    void Behavior_ThrowObject_Exit();
    void Behavior_ThrowObject_Enter();
    void Behavior_PlayingAnimation_Tick(float _dt);
    void Behavior_PlayingAnimation_Exit();
    void Behavior_PlayingAnimation_Enter();
    void Behavior_None_Exit();
    void Behavior_None_Enter();
    void Behavior_Disturbed_Tick(float _dt);
    void Behavior_Disturbed_Exit();
    void Behavior_Disturbed_Enter();
    void Behavior_Dazzled_Tick(float _dt);
    void Behavior_Dazzled_Exit();
    void Behavior_Dazzled_Enter();
    void _SetTalkScreenMaterial(class UMaterialInstance* _materialInstance);
    void _SetPreciseMovementTransform(FTransform _targetTransform);
    void _SetMovementTargetSpeed(float _newSpeed);
    void _SetMovementTargetAngle(float _newAngle);
    void _SetExchangeScreenMaterial(class UMaterialInstance* _materialInstance);
    void _SetBaseScreenMaterial(class UMaterialInstance* _materialInstance);
    void _OnUsableUseEnded(class UDroidUsableComponent* _usable, class ACharacterDroid* _droid);
    void _OnStreamedOut(class UStreamingComponent* _streamingComponent);
    void _OnStreamedIn(class UStreamingComponent* _streamingComponent);
    void _OnDialogLineEnded(class UTalkableComponent* _talkable, const FDialogLine& _line);
    void _OnDialogLineDisplayed(class UTalkableComponent* _talkable, const FDialogLine& _line);
    void _OnDialogLineBegan(class UTalkableComponent* _talkable, const FDialogLine& _line);
    void _OnDialogEnded(class UTalkableComponent* _talkable);
    void _OnDialogBegan(class UTalkableComponent* _talkable);
    void _OnCatDetectorEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnCatDetectorBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    FTransform _GetPreciseMovementTransform();
    float _GetPreciseMovementLateralDistance();
    float _GetPreciseMovementFrontalDistance();
    float _GetMovementTargetSpeed();
    float _GetMovementTargetAngle();
    EDroidInputMode _GetDroidInputMode();
    void _BeforeSaved(class USaveComponent* _saveComponent);
    void _AfterLoaded(class USaveComponent* _saveComponent);
}; // Size: 0xB00

class UCheckBoxWidget : public UHKUserWidget
{
    class UHKBorder* Border;                                                          // 0x02F0 (size: 0x8)
    class UHKCheckBox* CheckBox;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* CheckBoxText;                                                   // 0x0300 (size: 0x8)
    FText Text;                                                                       // 0x0308 (size: 0x18)
    class USoundBase* m_onSelectedSound;                                              // 0x0320 (size: 0x8)
    class USoundBase* m_onCheckedSound;                                               // 0x0328 (size: 0x8)
    FLinearColor m_onHoveredTextColor;                                                // 0x0330 (size: 0x10)
    FLinearColor m_onHoveredBorderBrushColor;                                         // 0x0340 (size: 0x10)

}; // Size: 0x3B8

class UControllerUnpluggedWidget : public UHKUserWidget
{
}; // Size: 0x2F0

class UControlsViewWidget : public UHKUserWidget
{
    class UHKButton* BackButton;                                                      // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

class UCueBank : public UDataAsset
{
    TArray<class USoundCue*> SoundCues;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class ULightableComponent : public USceneComponent
{
    FLightableComponentOnEnlightenBegin OnEnlightenBegin;                             // 0x01F8 (size: 0x10)
    void LightableDelegate(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    FLightableComponentOnEnlightenEnd OnEnlightenEnd;                                 // 0x0208 (size: 0x10)
    void LightableDelegate(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);

    void LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void IsEnlighten(bool& _enlighten, float& _lightingRatio);
    class USceneComponent* GetOwnerSceneComponent();
    TArray<class UAntiZurgSpotlightComponent*> GetLights();
    void EnlightenEnd(class UAntiZurgSpotlightComponent* _spotlight);
    void EnlightenBegin(class UAntiZurgSpotlightComponent* _spotlight);
}; // Size: 0x250

class UDamagableLightableComponent : public ULightableComponent
{
    FDamagableLightableComponentOnTakeDamage OnTakeDamage;                            // 0x0250 (size: 0x10)
    void DamagableLightableDelegate(class UDamagableLightableComponent* _damagableLightableComponent, class AActor* _damageApplier, float _damage);

    bool IsTakingDamage();
    void DamagableLightableDelegate__DelegateSignature(class UDamagableLightableComponent* _damagableLightableComponent, class AActor* _damageApplier, float _damage);
}; // Size: 0x280

class UDebugInputComponent : public UActorComponent
{
    FDebugInputComponentGamepadDPadDownPressed GamepadDPadDownPressed;                // 0x00B0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadDownReleased GamepadDPadDownReleased;              // 0x00C0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadLeftPressed GamepadDPadLeftPressed;                // 0x00D0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadLeftReleased GamepadDPadLeftReleased;              // 0x00E0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadRightPressed GamepadDPadRightPressed;              // 0x00F0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadRightReleased GamepadDPadRightReleased;            // 0x0100 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadUpPressed GamepadDPadUpPressed;                    // 0x0110 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadDPadUpReleased GamepadDPadUpReleased;                  // 0x0120 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftShoulderPressed GamepadLeftShoulderPressed;        // 0x0130 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftShoulderReleased GamepadLeftShoulderReleased;      // 0x0140 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadRightShoulderPressed GamepadRightShoulderPressed;      // 0x0150 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadRightShoulderReleased GamepadRightShoulderReleased;    // 0x0160 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftTriggerPressed GamepadLeftTriggerPressed;          // 0x0170 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftTriggerReleased GamepadLeftTriggerReleased;        // 0x0180 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadRightTriggerPressed GamepadRightTriggerPressed;        // 0x0190 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadRightTriggerReleased GamepadRightTriggerReleased;      // 0x01A0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftThumbstickPressed GamepadLeftThumbstickPressed;    // 0x01B0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftThumbstickReleased GamepadLeftThumbstickReleased;  // 0x01C0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadRightThumbstickPressed GamepadRightThumbstickPressed;  // 0x01D0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadRightThumbstickReleased GamepadRightThumbstickReleased; // 0x01E0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadLeftStickXAxis GamepadLeftStickXAxis;                  // 0x01F0 (size: 0x10)
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadLeftStickYAxis GamepadLeftStickYAxis;                  // 0x0200 (size: 0x10)
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadRightStickXAxis GamepadRightStickXAxis;                // 0x0210 (size: 0x10)
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadRightStickYAxis GamepadRightStickYAxis;                // 0x0220 (size: 0x10)
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadLeftTriggerAxis GamepadLeftTriggerAxis;                // 0x0230 (size: 0x10)
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadRightTriggerAxis GamepadRightTriggerAxis;              // 0x0240 (size: 0x10)
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadSpecialLeftPressed GamepadSpecialLeftPressed;          // 0x0250 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadSpecialLeftReleased GamepadSpecialLeftReleased;        // 0x0260 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadSpecialRightPressed GamepadSpecialRightPressed;        // 0x0270 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadSpecialRightReleased GamepadSpecialRightReleased;      // 0x0280 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonBottomPressed GamepadFaceButtonBottomPressed; // 0x0290 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonBottomReleased GamepadFaceButtonBottomReleased; // 0x02A0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonLeftPressed GamepadFaceButtonLeftPressed;    // 0x02B0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonLeftReleased GamepadFaceButtonLeftReleased;  // 0x02C0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonRightPressed GamepadFaceButtonRightPressed;  // 0x02D0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonRightReleased GamepadFaceButtonRightReleased; // 0x02E0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonTopPressed GamepadFaceButtonTopPressed;      // 0x02F0 (size: 0x10)
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonTopReleased GamepadFaceButtonTopReleased;    // 0x0300 (size: 0x10)
    void InputDelegate();

}; // Size: 0x318

class ADebugInputManager : public AManager
{
}; // Size: 0x238

class UDebugInputWidget : public UHKUserWidget
{
    class UUniformGridPanel* grid;                                                    // 0x02F0 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x02F8 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0300 (size: 0x8)
    TSubclassOf<class UKeyIconWidget> m_keyIconWidgetClass;                           // 0x0308 (size: 0x8)

}; // Size: 0x310

struct FStartData
{
    TArray<class TSubclassOf<AActor>> Inventory;                                      // 0x0000 (size: 0x10)
    TArray<FName> UnlockedMemories;                                                   // 0x0010 (size: 0x10)
    bool GodMode;                                                                     // 0x0020 (size: 0x1)
    bool NoBackpack;                                                                  // 0x0021 (size: 0x1)
    bool NoTorchlight;                                                                // 0x0022 (size: 0x1)

}; // Size: 0x28

struct FDebugProfile
{
    FString StartupSaveName;                                                          // 0x0000 (size: 0x10)
    class AHKPlayerStart* PlayerStart;                                                // 0x0010 (size: 0x8)
    bool UseQuickStartTransform;                                                      // 0x0018 (size: 0x1)
    FTransform QuickStartTransform;                                                   // 0x0020 (size: 0x30)
    FStartData StartData;                                                             // 0x0050 (size: 0x28)
    class UAnimSequence* JumpAnimationOverride;                                       // 0x0078 (size: 0x8)
    bool StreamingDebugModeEnabled;                                                   // 0x0080 (size: 0x1)

}; // Size: 0x90

class UDebugProfileObject : public UObject
{
    bool bDebugProfileEnabled;                                                        // 0x0028 (size: 0x1)
    FDebugProfile DebugProfile;                                                       // 0x0030 (size: 0x90)
    FString MapName;                                                                  // 0x00C0 (size: 0x10)

}; // Size: 0xD0

class UDebugSaveGame : public USaveGame
{
    bool bDebugProfileEnabled;                                                        // 0x0028 (size: 0x1)
    FDebugProfile DebugProfile;                                                       // 0x0030 (size: 0x90)

}; // Size: 0xC0

class ADialog : public AActor
{
    class UBillboardComponent* m_billboard;                                           // 0x0228 (size: 0x8)
    class USaveComponent* m_save;                                                     // 0x0230 (size: 0x8)
    bool m_canBeShownItems;                                                           // 0x0238 (size: 0x1)
    bool m_autoResetCameraActivated;                                                  // 0x0239 (size: 0x1)
    class UAnimSequence* m_currentSynchronizedAnimation;                              // 0x0300 (size: 0x8)

    void UnrollDialog();
    void ThrowDialogEvent(FName _eventName);
    void StartDialog();
    void SetCanBeShownItems(bool _value);
    void SetAutoResetCameraActivated(bool _activated);
    void RequestNextDialogLine();
    bool PollNextDialogLineRequested();
    void OnRequestDialog();
    void OnMeetupBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void OnDialogBegan();
    void OnBeforeDialogEnded();
    void NotifyLineTextDisplayed();
    bool IsUnrollRequested();
    bool IslineTextDisplayed();
    bool IsDialogRunning();
    bool IsBeingShownItem();
    bool IsAutoResetCameraActivated();
    class UAnimSequence* GetCurrentSynchronizedAnimation();
    class UTalkableComponent* GetCurrentSpeaker();
    FDialogLine GetCurrentLine();
    class ACatPawn* GetCat();
    void EndDialogLine(const FDialogLine& _line);
    void EndDialog();
    void DialogDelegate__DelegateSignature(class ADialog* _dialog);
    bool CheckDialogEvent(FName _eventName);
    bool CanBeShownItems();
    void BeginShowItem(class ULootableComponent* _lootable);
    void BeginMeetup();
    void BeginDialogLine(const FDialogLine& _line);
    void BeginDefaultDialog();
}; // Size: 0x328

class UDialogBoxWidget : public UHKUserWidget
{
    class UTextBlock* TitleText;                                                      // 0x02F0 (size: 0x8)
    class UTextBlock* OkButtonText;                                                   // 0x02F8 (size: 0x8)
    class UTextBlock* CancelButtonText;                                               // 0x0300 (size: 0x8)
    class UHKButton* OkButton;                                                        // 0x0308 (size: 0x8)
    class UHKButton* CancelButton;                                                    // 0x0310 (size: 0x8)
    class UHKButton* SelectButton;                                                    // 0x0318 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0320 (size: 0x8)

}; // Size: 0x360

class UDialogUserWidget : public UBackpackUserWidget
{
}; // Size: 0x270

struct FDiskOperation
{
    class USaveGame* SaveGame;                                                        // 0x0070 (size: 0x8)

}; // Size: 0x90

class UDiskSubsystem : public UHKGameSubsystem
{
    TArray<FDiskOperation> m_diskOperations;                                          // 0x0048 (size: 0x10)

}; // Size: 0x68

struct FDroidTick
{
    class ACharacterDroid* Droid;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

class ADroidManager : public AManager
{
    int32 m_maxDroidTicksPerFrame;                                                    // 0x0228 (size: 0x4)
    float m_droidSignificanceDistanceThreshold;                                       // 0x022C (size: 0x4)
    TArray<class ACharacterDroid*> m_droids;                                          // 0x0230 (size: 0x10)
    TArray<FDroidTick> m_droidTickList;                                               // 0x0240 (size: 0x10)

}; // Size: 0x258

class UDroidMovementAnimationSettings : public UPrimaryDataAsset
{
    class UBlendSpace1D* Start_LeftFoot;                                              // 0x0030 (size: 0x8)
    class UBlendSpace1D* Start_RightFoot;                                             // 0x0038 (size: 0x8)
    class UBlendSpace* WalkBlendSpace;                                                // 0x0040 (size: 0x8)
    class UAnimSequence* StopWalkAnimation_LeftFoot;                                  // 0x0048 (size: 0x8)
    class UAnimSequence* StopWalkAnimation_RightFoot;                                 // 0x0050 (size: 0x8)
    class UBlendSpace1D* TurnInPlaceBlendSpace;                                       // 0x0058 (size: 0x8)
    class UBlendSpace1D* FinalStepBlendSpace_LeftFoot;                                // 0x0060 (size: 0x8)
    class UBlendSpace1D* FinalStepBlendSpace_RightFoot;                               // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FAnimationUsingStruct
{
    class UAnimSequenceBase* AnimationAsset;                                          // 0x0000 (size: 0x8)
    bool loop;                                                                        // 0x0008 (size: 0x1)
    float playSpeed;                                                                  // 0x000C (size: 0x4)
    float blendInTime;                                                                // 0x0010 (size: 0x4)
    float blendOutTime;                                                               // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FAnimationStartUseStruct
{
    class UAnimSequenceBase* AnimationAsset;                                          // 0x0000 (size: 0x8)
    float playSpeed;                                                                  // 0x0008 (size: 0x4)
    float blendInTime;                                                                // 0x000C (size: 0x4)
    float blendOutTime;                                                               // 0x0010 (size: 0x4)

}; // Size: 0x18

class UDroidUsableComponent : public USceneComponent
{
    FDroidUsableComponentOnStartUseEvent OnStartUseEvent;                             // 0x01F8 (size: 0x10)
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FDroidUsableComponentOnUsingEvent OnUsingEvent;                                   // 0x0208 (size: 0x10)
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FDroidUsableComponentOnStopUseEvent OnStopUseEvent;                               // 0x0218 (size: 0x10)
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FDroidUsableComponentOnUseEndedEvent OnUseEndedEvent;                             // 0x0228 (size: 0x10)
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FAnimationUsingStruct m_usingAnimation;                                           // 0x0238 (size: 0x18)
    FAnimationStartUseStruct m_startUseAnimation;                                     // 0x0250 (size: 0x18)
    FAnimationStartUseStruct m_stopUseAnimation;                                      // 0x0268 (size: 0x18)
    FText m_objectName;                                                               // 0x0280 (size: 0x18)
    class AActor* m_startUsingTransformActor;                                         // 0x0298 (size: 0x8)
    bool m_isEnabled;                                                                 // 0x02A0 (size: 0x1)
    bool m_enableTeleportAtEnd;                                                       // 0x02A1 (size: 0x1)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x02A8 (size: 0x8)

    void UseDelegate__DelegateSignature(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    void StopUse();
    void SetEnabled(bool _enabled);
    void OnUsing(class ACharacterDroid* _droid);
    void OnStopUse();
    void OnStartUse(class ACharacterDroid* _droid);
    bool IsEnabled();
    bool IsBeingUsed();
    FTransform GetStartUseSocketTransform();
    class ACharacterDroid* GetCurrentDroid();
    void ForceUsing(class ACharacterDroid* _droid);
}; // Size: 0x2D0

struct FDroneMovementTarget
{
    class USceneComponent* Component;                                                 // 0x0000 (size: 0x8)

}; // Size: 0x30

struct FDroneSpringParams
{
    float Stiffness;                                                                  // 0x0000 (size: 0x4)
    float CriticalDamping;                                                            // 0x0004 (size: 0x4)
    float RotationTimeTo90;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FDroneMoveToParams
{
    float Speed;                                                                      // 0x0000 (size: 0x4)
    float RotationTimeTo90;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

class ADrone : public AActor
{
    FDroneEquipped Equipped;                                                          // 0x0228 (size: 0x10)
    void DroneActionDelegate(class ADrone* Drone);
    FDroneUnequipped Unequipped;                                                      // 0x0238 (size: 0x10)
    void DroneActionDelegate(class ADrone* Drone);
    FDroneGUIOpened GUIOpened;                                                        // 0x0248 (size: 0x10)
    void DroneActionDelegate(class ADrone* Drone);
    FDroneGUIClosed GUIClosed;                                                        // 0x0258 (size: 0x10)
    void DroneActionDelegate(class ADrone* Drone);
    FDroneFoldingOver FoldingOver;                                                    // 0x0268 (size: 0x10)
    void DroneActionDelegate(class ADrone* Drone);
    FDroneUnfoldingOver UnfoldingOver;                                                // 0x0278 (size: 0x10)
    void DroneActionDelegate(class ADrone* Drone);
    class UCapsuleComponent* m_capsule;                                               // 0x0288 (size: 0x8)
    class USkeletalMeshComponent* m_mesh;                                             // 0x0290 (size: 0x8)
    class UWidgetComponent* m_GUIWidgetComponent;                                     // 0x0298 (size: 0x8)
    float m_timeIdleBeforeFoldBack;                                                   // 0x02A0 (size: 0x4)
    TArray<FDroneMovementTarget> m_followTargetsList;                                 // 0x02B0 (size: 0x10)
    FDroneMovementTarget m_currentFollowTarget;                                       // 0x02C0 (size: 0x30)
    class USceneComponent* m_foldedComponent;                                         // 0x0310 (size: 0x8)
    class ABackpack* M_BackPack;                                                      // 0x0320 (size: 0x8)
    class USceneComponent* m_customLookComponent;                                     // 0x0330 (size: 0x8)
    TArray<class UScannableComponent*> m_scanTargets;                                 // 0x0368 (size: 0x10)
    TArray<TEnumAsByte<ECollisionChannel>> m_scanCollisionChannels;                   // 0x0378 (size: 0x10)
    float m_minAPNFov;                                                                // 0x0388 (size: 0x4)
    float m_maxAPNFov;                                                                // 0x038C (size: 0x4)
    float m_APNRotateSpeed;                                                           // 0x0390 (size: 0x4)
    float m_APNZoomSpeed;                                                             // 0x0394 (size: 0x4)
    float m_scanRadius;                                                               // 0x0398 (size: 0x4)
    float m_strongLightPressedTime;                                                   // 0x039C (size: 0x4)
    TSubclassOf<class UUserWidget> m_baseWidgetClass;                                 // 0x03A0 (size: 0x8)
    TSubclassOf<class UDialogUserWidget> m_dialogWidgetClass;                         // 0x03A8 (size: 0x8)
    bool m_isLightUnlocked;                                                           // 0x03E0 (size: 0x1)
    bool m_isStrongLightUnlocked;                                                     // 0x03E1 (size: 0x1)
    uint8 m_strongLightDisabled;                                                      // 0x03E6 (size: 0x1)
    uint8 m_weakLightDisabled;                                                        // 0x03E7 (size: 0x1)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0400 (size: 0x8)

    void UnfoldDone();
    void unfold();
    void TickSpring(float _dt, const FTransform& _target, const FDroneSpringParams& _params, float _movementRatio);
    void TickMoveTo(float _dt, const FTransform& _target, const FDroneMoveToParams& _params, float _movementRatio);
    void TeleportDrone(const FTransform& _target);
    void StopCustomAnimation();
    void SetWeakLightOn(bool _on);
    void SetStrongLightUnlocked(bool _value);
    void SetStrongLightOn(bool _on);
    void SetMovementRatio(float _value);
    void SetLightUnlocked(bool _value);
    void SetAutoFoldWhenIdleEnabled(bool _value);
    void RequestOpenGUI(TSubclassOf<class UUserWidget> _widgetClass, TEnumAsByte<EDroneGUIAllowInputMode> _allowInputMode);
    void PushWeakLightDisabled();
    void PushStrongLightDisabled();
    void PushSpringToSocket(class USceneComponent* _targetComponent, FName _targetSocket, FDroneSpringParams _params, int32 _priority, bool _unfold);
    void PushSpringToActor(class AActor* _targetActor, FDroneSpringParams _params, int32 _priority, bool _unfold);
    void PushMoveToSocket(class USceneComponent* _targetComponent, FName _targetSocket, FDroneMoveToParams _params, int32 _priority, bool _unfold);
    void PushMoveToActor(class AActor* _targetActor, FDroneMoveToParams _params, int32 _priority, bool _unfold);
    void PopWeakLightDisabled();
    void PopStrongLightDisabled();
    void PopSpringToSocket(class USceneComponent* _targetComponent, FName _targetSocket);
    void PopSpringToActor(class AActor* _targetActor);
    void PopMoveToSocket(class USceneComponent* _targetComponent, FName _targetSocket);
    void PopMoveToActor(class AActor* _targetActor);
    void PlayCustomAnimation(class UAnimSequence* _animation, bool _isLooping);
    class UUserWidget* OpenGUI(TSubclassOf<class UUserWidget> _widgetClass, TEnumAsByte<EDroneGUIAllowInputMode> _allowInputMode);
    void OnWeakLightUnrequested();
    void OnWeakLightRequested();
    void OnWeakLightOn();
    void OnWeakLightOff();
    void OnUnfoldedIdleTick(float DeltaTime);
    void OnUnfoldedEnter();
    void OnTeleported();
    void OnStrongLightUnrequested();
    void OnStrongLightRequested();
    void OnStrongLightQuickReleased();
    void OnStrongLightOn();
    void OnStrongLightOff();
    void OnStopUnfold();
    void OnStopFold();
    void OnStartUnfold();
    void OnStartFold();
    void OnMovementTargetChanged();
    void OnForceUnfold();
    void OnFollowingTarget(float _dt, const FVector& _targetLocation, const FRotator& _targetRotation);
    void OnFollowingCat(float _dt, const FVector& _targetLocation, const FRotator& _targetRotation);
    void OnFoldedTick(float _dt);
    void OnFoldedExit();
    void OnFoldedEnter();
    void OnCustomAnimationOver();
    bool IsWeakLightRequested();
    bool IsWeakLightOn();
    bool IsUnfolding();
    bool IsUnfolded();
    bool IsStrongLightUnlocked();
    bool IsStrongLightRequested();
    bool IsStrongLightOn();
    bool IsPlayingCustomAnimation();
    bool IsOut();
    bool IsLightUnlocked();
    bool IsIdle();
    bool IsGUIOpen();
    bool IsFollowingTarget();
    bool IsFollowingCat();
    bool IsFolding();
    bool IsFolded();
    bool IsCustomAnimationLooping();
    bool IsBaseGUIDisabled();
    bool IsAutoFoldWhenIdleEnabled();
    bool HasReachedTarget(float _distancteThreshold, float _angleThreshold);
    TArray<class UScannableComponent*> GetScanTargets();
    float GetMovementRatio();
    FRotator GetLookRotation();
    TEnumAsByte<EDroneGUIAllowInputMode> GetGUIAllowInputMode();
    class USceneComponent* GetFoldedSocket(FName& _socketName);
    FTransform GetCurrentTarget();
    class UAnimSequence* GetCurrentCustomAnimation();
    class ABackpack* GetBackpack();
    void FoldDone();
    void fold();
    void EnableExamineRotation();
    void EnableBaseGUI();
    void DroneActionDelegate__DelegateSignature(class ADrone* Drone);
    void DisableExamineRotation();
    void DisableBaseGUI();
    void CloseGUI();
    void BeforeSaved();
    void AfterLoaded();
    void _OnUsableUseSuccess(class UDroneUsableComponent* _usable);
    void _OnToggleCameraPressed();
    void _OnGUIOpenPressed();
    void _OnCatUnpossessed(class ACatPawn* _cat, class AHKPlayerController* _playerController);
    void _OnCatPossessed(class ACatPawn* _cat, class AHKPlayerController* _playerController);
}; // Size: 0x410

class UDroneMenuWidget : public UBackpackUserWidget
{

    void SetCategory(TEnumAsByte<EDroneMenuCategory> _category);
    TEnumAsByte<EDroneMenuCategory> GetCategory();
}; // Size: 0x270

class UDroneSettings : public UPrimaryDataAsset
{
    float BatteryRechargeSpeed;                                                       // 0x0030 (size: 0x4)
    float BatteryDechargeSpeed;                                                       // 0x0034 (size: 0x4)
    float BatteryStartToRumble;                                                       // 0x0038 (size: 0x4)
    float StrongLightReactivationPercentage;                                          // 0x003C (size: 0x4)
    float StrongLightInnerConeAngle;                                                  // 0x0040 (size: 0x4)
    float StrongLightOutterConeAngle;                                                 // 0x0044 (size: 0x4)
    float StrongLightAttenuation;                                                     // 0x0048 (size: 0x4)
    float DamageToApplyPerTime;                                                       // 0x004C (size: 0x4)
    float DamageApplicationTimeInSecond;                                              // 0x0050 (size: 0x4)
    class UCurveFloat* RadialDamageCurve;                                             // 0x0058 (size: 0x8)
    class UCurveFloat* DistanceDamageCurve;                                           // 0x0060 (size: 0x8)

}; // Size: 0x68

class UDroneUsableComponent : public UBackpackUsableComponent
{
    FDroneUsableComponentDroneUseStarted DroneUseStarted;                             // 0x0548 (size: 0x10)
    void DroneUseDelegate(class UDroneUsableComponent* Usable);
    FDroneUsableComponentDroneUseEnded DroneUseEnded;                                 // 0x0558 (size: 0x10)
    void DroneUseDelegate(class UDroneUsableComponent* Usable);

    void SetUsePosition(class USceneComponent* _usePosition, FName _socket);
    bool IsDroneUsing();
    class ADrone* GetUserDrone();
    class USceneComponent* GetUsePosition(FName& _outSocket);
    class USceneComponent* GetFinalUseSocket(FName& _outSocket);
    void EndDroneUse();
    void DroneUseDelegate__DelegateSignature(class UDroneUsableComponent* Usable);
    void _OnDroneUseStarted(class ADrone* _drone);
    void _OnDroneUseEnded(class ADrone* _drone);
    bool _IsDroneReadyToUnfold();
    bool _CanStartUse();
}; // Size: 0x5A0

class UEditorTickComponent : public UActorComponent
{
    FEditorTickComponentOnEditorTick OnEditorTick;                                    // 0x00B0 (size: 0x10)
    void EditorTickSignature(float DeltaTime);

}; // Size: 0xC0

class AEditorTickingActor : public AActor
{

    void OnEditorTick(float DeltaSeconds);
    void _OnEditorTick(float _deltaTime);
}; // Size: 0x230

class UExternalUISubsystem : public UHKGameSubsystem
{
}; // Size: 0x50

struct FGameplayNoise
{
    class AActor* Emitter;                                                            // 0x0018 (size: 0x8)

}; // Size: 0x58

struct FNoiseEvent
{
    class AActor* Emitter;                                                            // 0x0010 (size: 0x8)
    class UNoisableComponent* noisable;                                               // 0x0018 (size: 0x8)

}; // Size: 0x20

class UGameAudioSubsystem : public UHKGameSubsystem
{
    TArray<class UNoisableComponent*> m_noisableList;                                 // 0x0050 (size: 0x10)
    TArray<FGameplayNoise> m_gameplayNoiseList;                                       // 0x0060 (size: 0x10)
    TArray<FNoiseEvent> m_noiseEventQueue;                                            // 0x0090 (size: 0x10)

    void EmitGameplayNoise(class AActor* _emitter, float _targetRadius, float _growTime, float _sustainTime);
}; // Size: 0xB0

class UGameplaySettingsWidget : public UHKUserWidget
{
    class UListBoxWidget* LanguageListBox;                                            // 0x02F0 (size: 0x8)
    class UCheckBoxWidget* VibrationCheckBox;                                         // 0x02F8 (size: 0x8)
    class UCheckBoxWidget* ReticuleCheckBox;                                          // 0x0300 (size: 0x8)
    class UCheckBoxWidget* AutoPauseCheckBox;                                         // 0x0308 (size: 0x8)
    class UCheckBoxWidget* HUDCheckBox;                                               // 0x0310 (size: 0x8)
    class UCheckBoxWidget* JumpPromptCheckBox;                                        // 0x0318 (size: 0x8)
    class UCheckBoxWidget* AutoCameraCheckBox;                                        // 0x0320 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0328 (size: 0x8)
    class UHKButton* DefaultsButton;                                                  // 0x0330 (size: 0x8)
    class UHKTextBlock* SwitchTabTextBlock;                                           // 0x0338 (size: 0x8)
    class UHKButton* TabLeftButton;                                                   // 0x0340 (size: 0x8)
    class UHKButton* TabRightButton;                                                  // 0x0348 (size: 0x8)
    FText m_resetToDefaultsDialogText;                                                // 0x0350 (size: 0x18)

}; // Size: 0x3C8

class AGameStateManager : public AManager
{
    FGameStateManagerOnGameSuspended OnGameSuspended;                                 // 0x0228 (size: 0x10)
    void GameStateManagerTypedDelegate(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    FGameStateManagerOnGameUnsuspended OnGameUnsuspended;                             // 0x0238 (size: 0x10)
    void GameStateManagerTypedDelegate(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0248 (size: 0x8)

    void UnsuspendGame();
    void SuspendGame(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    void SetDebugMenuOpen(bool _open);
    void OnFadeOutStart(float _fadeTime);
    bool IsSuspended();
    bool IsGameMapType();
    bool IsDebugMenuOpen();
    void GameStateManagerTypedDelegate__DelegateSignature(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    void _OnToggleDebugMenuPressed();
    void _OnMenuStartPressed();
    void _OnHUDDebugWidgetOpened(class UHUDDebugWidget* _widget);
    void _OnHUDDebugWidgetClosed(class UHUDDebugWidget* _widget);
}; // Size: 0x2B0

class UGammaSettingsWidget : public UHKUserWidget
{
    class UHKProgressBar* BrightnessProgressBar;                                      // 0x02F0 (size: 0x8)
    class UHKButton* ButtonLeft;                                                      // 0x02F8 (size: 0x8)
    class UHKButton* ButtonRight;                                                     // 0x0300 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0308 (size: 0x8)
    class UHKButton* AcceptButton;                                                    // 0x0310 (size: 0x8)
    class UHKButton* DefaultButton;                                                   // 0x0318 (size: 0x8)
    class UHKTextBlock* ExplainText;                                                  // 0x0320 (size: 0x8)
    class UImage* GammaIconLow;                                                       // 0x0328 (size: 0x8)
    class UImage* GammaIconMiddle;                                                    // 0x0330 (size: 0x8)
    class UImage* GammaIconHigh;                                                      // 0x0338 (size: 0x8)
    class UHorizontalBox* KeyBox;                                                     // 0x0340 (size: 0x8)
    class UWidgetAnimation* FadeInAnimation;                                          // 0x0348 (size: 0x8)
    class UTexture* m_gammaIconLowTexture;                                            // 0x0350 (size: 0x8)
    class UTexture* m_gammaIconMiddleTexture;                                         // 0x0358 (size: 0x8)
    class UTexture* m_gammaIconHighTexture;                                           // 0x0360 (size: 0x8)
    FText m_resetToDefaultsDialogText;                                                // 0x0368 (size: 0x18)
    class UMaterialInterface* m_gammaIconMaterial;                                    // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* gammaIconLowMaterial;                             // 0x0388 (size: 0x8)
    class UMaterialInstanceDynamic* gammaIconMiddleMaterial;                          // 0x0390 (size: 0x8)
    class UMaterialInstanceDynamic* gammaIconHighMaterial;                            // 0x0398 (size: 0x8)
    float m_minimumGammaValue;                                                        // 0x0400 (size: 0x4)
    float m_maximumGammaValue;                                                        // 0x0404 (size: 0x4)

}; // Size: 0x410

class UGraphicsSettingsWidget : public UHKUserWidget
{
    class UScrollBox* ScrollBox;                                                      // 0x02F0 (size: 0x8)
    class USliderBoxWidget* MotionBlurSliderBox;                                      // 0x02F8 (size: 0x8)
    class USliderBoxWidget* SharpnessSliderBox;                                       // 0x0300 (size: 0x8)
    class UListBoxWidget* FullscreenModeListBox;                                      // 0x0308 (size: 0x8)
    class UListBoxWidget* ResolutionListBox;                                          // 0x0310 (size: 0x8)
    class UListBoxWidget* FrameRateListBox;                                           // 0x0318 (size: 0x8)
    class UHorizontalBox* GraphicsMemoryBox;                                          // 0x0320 (size: 0x8)
    class UTextBlock* GraphicsMemoryText;                                             // 0x0328 (size: 0x8)
    class UListBoxWidget* ScreenPercentageListBox;                                    // 0x0330 (size: 0x8)
    class UListBoxWidget* EffectsQualityListBox;                                      // 0x0338 (size: 0x8)
    class UListBoxWidget* ShadowQualityListBox;                                       // 0x0340 (size: 0x8)
    class UListBoxWidget* TextureQualityListBox;                                      // 0x0348 (size: 0x8)
    class UListBoxWidget* MeshQualityListBox;                                         // 0x0350 (size: 0x8)
    class UCheckBoxWidget* VSyncCheckBox;                                             // 0x0358 (size: 0x8)
    class UHKButton* GammaButton;                                                     // 0x0360 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0368 (size: 0x8)
    class UHKButton* DefaultsButton;                                                  // 0x0370 (size: 0x8)
    FText m_resetToDefaultsDialogText;                                                // 0x0378 (size: 0x18)
    FText m_memoryGigabytesText;                                                      // 0x0390 (size: 0x18)
    FText m_memoryUnavailableText;                                                    // 0x03A8 (size: 0x18)
    FText m_frameRateUncappedText;                                                    // 0x03C0 (size: 0x18)
    FText m_qualityLowText;                                                           // 0x03D8 (size: 0x18)
    FText m_qualityMediumText;                                                        // 0x03F0 (size: 0x18)
    FText m_qualityHighText;                                                          // 0x0408 (size: 0x18)
    FText m_qualityVeryHighText;                                                      // 0x0420 (size: 0x18)
    FText m_qualityFullText;                                                          // 0x0438 (size: 0x18)
    FText m_windowedText;                                                             // 0x0450 (size: 0x18)
    FText m_fullscreenText;                                                           // 0x0468 (size: 0x18)
    FText m_windowedFullscreenText;                                                   // 0x0480 (size: 0x18)
    class UHKTextBlock* SwitchTabTextBlock;                                           // 0x0498 (size: 0x8)
    class UHKButton* TabLeftButton;                                                   // 0x04A0 (size: 0x8)
    class UHKButton* TabRightButton;                                                  // 0x04A8 (size: 0x8)
    TSet<FIntPoint> m_resolutions;                                                    // 0x0530 (size: 0x50)
    TSet<uint32> m_screenPercentages;                                                 // 0x0580 (size: 0x50)

}; // Size: 0x5D0

class UGridSnappingComponent : public USceneComponent
{
    float GridSize;                                                                   // 0x01F8 (size: 0x4)

}; // Size: 0x210

class UGroundProbeTools : public UBlueprintFunctionLibrary
{

    bool GetClosestDirectionData(FGroundProbeData& _probeData, FVector _origin, FVector _direction, FProbeDirectionData& _outProbeDirectionData, bool _debug);
}; // Size: 0x28

class AHideout : public AActor
{

    void SetClosed(bool _value);
    bool IsClosed();
    bool IsAvailableForHiding();
    FVector GetHiddenLocation();
    class AActor* GetHiddenActor();
}; // Size: 0x238

class UHKBorder : public UBorder
{
    FLinearColor m_selectedColor;                                                     // 0x0284 (size: 0x10)

}; // Size: 0x298

class UHKButton : public UButton
{
    class USoundBase* m_onSelectedSound;                                              // 0x04B0 (size: 0x8)
    class USoundBase* m_onPressedSound;                                               // 0x04B8 (size: 0x8)
    FLinearColor SelectedTextColor;                                                   // 0x0520 (size: 0x10)
    float m_onHoveredAlpha;                                                           // 0x0550 (size: 0x4)
    bool m_changeAlphaOnHovered;                                                      // 0x0554 (size: 0x1)
    bool m_changeTextColorOnSelected;                                                 // 0x0555 (size: 0x1)

    void _OnUnHovered();
    void _OnHovered();
    void _OnClicked();
}; // Size: 0x558

struct FHKChapter
{
    FText Name;                                                                       // 0x0000 (size: 0x18)
    EChapter ID;                                                                      // 0x0018 (size: 0x1)
    TSet<FName> MemoryIds;                                                            // 0x0020 (size: 0x50)
    TSoftObjectPtr<UWorld> StartLevel;                                                // 0x0070 (size: 0x28)
    class UTexture2D* UIImage;                                                        // 0x0098 (size: 0x8)

}; // Size: 0xA0

class UHKChapters : public UPrimaryDataAsset
{
    TArray<FHKChapter> Chapters;                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

class UHKCheatManager : public UCheatManager
{
}; // Size: 0x88

class UHKCheckBox : public UCheckBox
{

    void _OnCheckStateChanged(bool _isChecked);
}; // Size: 0x940

class UHKCrowdManager : public UCrowdManager
{
}; // Size: 0xF0

class UHKGameEngine : public UGameEngine
{
}; // Size: 0xD90

class UDebugMenuEntry : public UObject
{
    FString Name;                                                                     // 0x0028 (size: 0x10)
    FString Description;                                                              // 0x0038 (size: 0x10)
    FString AText;                                                                    // 0x0048 (size: 0x10)
    FString XText;                                                                    // 0x0058 (size: 0x10)
    FString YText;                                                                    // 0x0068 (size: 0x10)
    FDebugMenuEntryOnUpdate OnUpdate;                                                 // 0x0078 (size: 0x10)
    void EntryAction(class UDebugMenuEntry* _entry);
    FDebugMenuEntryOnAPressed OnAPressed;                                             // 0x0088 (size: 0x10)
    void EntryAction(class UDebugMenuEntry* _entry);
    FDebugMenuEntryOnXPressed OnXPressed;                                             // 0x0098 (size: 0x10)
    void EntryAction(class UDebugMenuEntry* _entry);
    FDebugMenuEntryOnYPressed OnYPressed;                                             // 0x00A8 (size: 0x10)
    void EntryAction(class UDebugMenuEntry* _entry);
    TArray<class UDebugMenuEntry*> m_children;                                        // 0x00C0 (size: 0x10)
    class UDebugMenuEntry* m_parent;                                                  // 0x00D0 (size: 0x8)

    void Update();
    class UDebugMenuEntry* GetParent();
    TArray<class UDebugMenuEntry*> GetChildren();
    void EntryAction__DelegateSignature(class UDebugMenuEntry* _entry);
    void ClearAllChildren();
    void AddChild(class UDebugMenuEntry* _child);
}; // Size: 0xD8

class UHKGameInstance : public UJoyGameInstance
{
    FHKGameInstanceLoadCompleted LoadCompleted;                                       // 0x0298 (size: 0x10)
    void OnLoadComplete(float _loadTime, FString _mapName, class UWorld* _world);
    TArray<class TSubclassOf<AManager>> ManagerBlueprintClasses;                      // 0x02A8 (size: 0x10)
    TSubclassOf<class ACatPawn> CatClass;                                             // 0x02B8 (size: 0x8)
    TSubclassOf<class ABackpack> BackpackClass;                                       // 0x02C0 (size: 0x8)
    TSubclassOf<class ADrone> DroneClass;                                             // 0x02C8 (size: 0x8)
    TSubclassOf<class AInteractionFeedback> InteractionFeedbackClass;                 // 0x02D0 (size: 0x8)
    class UHKSaveInstance* m_saveInstance;                                            // 0x0348 (size: 0x8)
    TSubclassOf<class UHKSaveInstance> m_saveInstanceClass;                           // 0x0350 (size: 0x8)
    class UHKChapters* m_chapters;                                                    // 0x0358 (size: 0x8)
    TArray<class TSubclassOf<AActor>> m_debugLootablesList;                           // 0x0360 (size: 0x10)
    class UActivityData* m_activityData;                                              // 0x0370 (size: 0x8)
    class UB12Memories* m_b12MemoriesData;                                            // 0x0378 (size: 0x8)
    class UDebugMenuEntry* m_rootDebugMenuEntry;                                      // 0x0380 (size: 0x8)
    class UDebugMenuEntry* m_chaptersDebugMenuEntry;                                  // 0x0388 (size: 0x8)
    class UDebugMenuEntry* m_loadSaveDebugMenuEntry;                                  // 0x0390 (size: 0x8)
    class UDebugMenuEntry* m_loadSaveSlotsDebugMenuEntry;                             // 0x0398 (size: 0x8)
    class UDebugMenuEntry* m_loadSaveFoldersDebugMenuEntry;                           // 0x03A0 (size: 0x8)
    class UDebugMenuEntry* m_quickSaveDebugMenuEntry;                                 // 0x03A8 (size: 0x8)
    class UDebugMenuEntry* m_quickLoadDebugMenuEntry;                                 // 0x03B0 (size: 0x8)
    class UDebugMenuEntry* m_cheatDebugMenuEntry;                                     // 0x03B8 (size: 0x8)
    class UDebugMenuEntry* m_languageDebugMenuEntry;                                  // 0x03C0 (size: 0x8)
    class UDebugMenuEntry* m_debugDebugMenuEntry;                                     // 0x03C8 (size: 0x8)
    TMap<class TSubclassOf<UHKGameSubsystem>, class TSubclassOf<UHKSubsystemSettings>> m_subsystemToSettingsClassMap; // 0x03D0 (size: 0x50)
    TSoftObjectPtr<UWorld> m_zoneToLoad;                                              // 0x0420 (size: 0x28)
    TMap<class FName, class UAudioComponent*> m_persistentAudioComponents;            // 0x0470 (size: 0x50)

    void SetAdventureState(int32 _chapterId, int32 _stateId);
    void OnStartPlayInEditorGameInstance(bool _simulateInEditor);
    void OnLoadComplete__DelegateSignature(float _loadTime, FString _mapName, class UWorld* _world);
    class UHKSaveInstance* GetSaveInstance();
    class UDebugMenuEntry* GetRootDebugMenuEntry();
    TEnumAsByte<EWorldInitializationMode> GetInitializationMode();
    int32 GetCurrentAdventureChapterState(int32 _chapter);
    int32 GetCurrentAdventureChapter();
    class UB12Memories* GetB12MemoriesData();
    TArray<FString> GetAdventureChapterStates(int32 _chapter);
    TArray<FString> GetAdventureChapters();
    class UActivityData* GetActivityData();
    void _SaveLoadSlotsEntry_OnYPressed(class UDebugMenuEntry* _entry);
    void _SaveLoadSlotsEntry_OnXPressed(class UDebugMenuEntry* _entry);
    void _SaveLoadSlotsEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _SaveLoadSlotEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _SaveLoadFoldersEntry_OnYPressed(class UDebugMenuEntry* _entry);
    void _SaveLoadFoldersEntry_OnXPressed(class UDebugMenuEntry* _entry);
    void _SaveLoadFoldersEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _SaveLoadFoldersEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _QuickSaveDebugMenuEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _QuickLoadDebugMenuEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _OnFullSaveSlotsDone(class UHKSaveInstance* _saveInstance);
    void _OnFullSaveFoldersDone(class UHKSaveInstance* _saveInstance);
    void _NewSaveEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _LanguageDebugMenuEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _LanguageDebugMenu_Language_OnAPressed(class UDebugMenuEntry* _entry);
    void _DebugDebugMenuEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _DebugDebugMenuEntry_ForceStreaming_OnAPressed(class UDebugMenuEntry* _entry);
    void _DebugDebugMenuEntry_ClearQuickStartLocation_OnAPressed(class UDebugMenuEntry* _entry);
    void _CheatSetAdventureStateEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _CheatSetAdventureStateEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _CheatSetAdventureStateChildEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _CheatDebugMenuEntry_TorchLight_OnAPressed(class UDebugMenuEntry* _entry);
    void _CheatDebugMenuEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _CheatDebugMenuEntry_GodMode_OnAPressed(class UDebugMenuEntry* _entry);
    void _CheatDebugMenuEntry_Backpack_OnAPressed(class UDebugMenuEntry* _entry);
    void _CheatDebugMenuEntry_B12Memories_OnXPressed(class UDebugMenuEntry* _entry);
    void _CheatDebugMenuEntry_B12Memories_OnAPressed(class UDebugMenuEntry* _entry);
    void _CheatAddItemToIventoryListEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _CheatAddItemToIventoryEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _ChaptersEntry_OnAPressed(class UDebugMenuEntry* _entry);
    void _ChaptersDebugMenuEntry_OnUpdate(class UDebugMenuEntry* _entry);
    void _BeforeStreamOut(class ULevelStreaming* _levelStreaming, FShouldEndState& _shouldEndState);
    void _BeforeStreamIn(class ULevelStreaming* _levelStreaming, FShouldEndState& _shouldEndState);
}; // Size: 0x4C0

class AHKGameMode : public AGameMode
{
}; // Size: 0x310

class UHKGameSettings : public UObject
{
    bool DisplayActorLinksOnlyWhileSelected;                                          // 0x0028 (size: 0x1)
    FName SessionSaveName;                                                            // 0x002C (size: 0x8)
    bool IsAudioLogEnabled;                                                           // 0x0034 (size: 0x1)
    TEnumAsByte<ECollisionChannel> GameplaySoundTraceChannel;                         // 0x0035 (size: 0x1)
    TEnumAsByte<ECollisionChannel> MovementObstacleProbeChannel;                      // 0x0036 (size: 0x1)
    TEnumAsByte<ECollisionChannel> WalkableProbeChannel;                              // 0x0037 (size: 0x1)
    TEnumAsByte<ECollisionChannel> InteractCollisionChannel;                          // 0x0038 (size: 0x1)
    TEnumAsByte<ECollisionChannel> VisibilityCollisionChannel;                        // 0x0039 (size: 0x1)
    bool LoadingNotificationEnabled;                                                  // 0x003A (size: 0x1)
    bool FadeToBlackDuringWaitForStreamingAndLoading;                                 // 0x003B (size: 0x1)
    bool UseBaseMapMode;                                                              // 0x003C (size: 0x1)
    TSoftObjectPtr<UWorld> BaseMap;                                                   // 0x0040 (size: 0x28)
    TArray<TSoftObjectPtr<UWorld>> BaseMapModeZones;                                  // 0x0068 (size: 0x10)
    TSoftObjectPtr<UKeyIconSetData> KeyIconSetData;                                   // 0x0078 (size: 0x28)
    TSoftObjectPtr<UTexture2D> LoadingScreenPawTexture;                               // 0x00A0 (size: 0x28)
    TSoftObjectPtr<UFont> LoadingScreenFont;                                          // 0x00C8 (size: 0x28)
    TSoftObjectPtr<UWorld> MainMenuMap;                                               // 0x00F0 (size: 0x28)
    float GUIInputDeadZone;                                                           // 0x0118 (size: 0x4)
    float GUIFadeOutDuration;                                                         // 0x011C (size: 0x4)
    float GUIAutoFireDelay;                                                           // 0x0120 (size: 0x4)
    float GUIAutoFireInterval;                                                        // 0x0124 (size: 0x4)

}; // Size: 0x128

struct FCustomKeyMapping
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    FName Name;                                                                       // 0x0018 (size: 0x8)
    bool IsAxis;                                                                      // 0x0020 (size: 0x1)
    bool IsPad;                                                                       // 0x0021 (size: 0x1)
    bool IsNegativeScale;                                                             // 0x0022 (size: 0x1)

}; // Size: 0x28

class UHKGameUserSettings : public UGameUserSettings
{
    int32 MeshQuality;                                                                // 0x0120 (size: 0x4)
    float MasterVolume;                                                               // 0x0124 (size: 0x4)
    float MusicVolume;                                                                // 0x0128 (size: 0x4)
    float EffectsVolume;                                                              // 0x012C (size: 0x4)
    float Gamma;                                                                      // 0x0130 (size: 0x4)
    float MotionBlurAmount;                                                           // 0x0134 (size: 0x4)
    float LookSensitivity;                                                            // 0x0138 (size: 0x4)
    float Sharpness;                                                                  // 0x013C (size: 0x4)
    bool PadVibrationEnabled;                                                         // 0x0140 (size: 0x1)
    bool InvertLookXEnabled;                                                          // 0x0141 (size: 0x1)
    bool InvertLookYEnabled;                                                          // 0x0142 (size: 0x1)
    bool ReticuleEnabled;                                                             // 0x0143 (size: 0x1)
    TArray<FCustomKeyMapping> CustomKeyMappings;                                      // 0x0148 (size: 0x10)
    bool AutoPauseEnabled;                                                            // 0x0158 (size: 0x1)
    bool JumpPromptEnabled;                                                           // 0x0159 (size: 0x1)
    bool HUDEnabled;                                                                  // 0x015A (size: 0x1)
    bool AutoCameraEnabled;                                                           // 0x015B (size: 0x1)
    bool FirstLaunch;                                                                 // 0x015C (size: 0x1)
    uint32 ScreenPercentage;                                                          // 0x0160 (size: 0x4)
    uint32 SteamDeckScreenPercentage;                                                 // 0x0164 (size: 0x4)
    int32 SteamDeckEffectsQuality;                                                    // 0x0168 (size: 0x4)
    int32 SteamDeckMeshQuality;                                                       // 0x016C (size: 0x4)
    int32 SteamDeckTextureQuality;                                                    // 0x0170 (size: 0x4)
    int32 SteamDeckShadowQuality;                                                     // 0x0174 (size: 0x4)

}; // Size: 0x178

class UHKGlobalSaveGame : public USaveGame
{
    FString LastUsedSlot;                                                             // 0x0028 (size: 0x10)
    TArray<uint8> GameUserSettingsData;                                               // 0x0038 (size: 0x10)
    FString Culture;                                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FActionDisplayKeyMappings
{
    TArray<FInputActionKeyMapping> KeyMappings;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FActionDisplay
{
    TArray<FActionDisplayKeyMappings> KeyMappingsSets;                                // 0x0000 (size: 0x10)
    TArray<FName> ActionBindingNames;                                                 // 0x0010 (size: 0x10)
    FText DisplayText;                                                                // 0x0020 (size: 0x18)
    int32 Priority;                                                                   // 0x0038 (size: 0x4)
    bool Enabled;                                                                     // 0x003C (size: 0x1)
    bool ShowAllKeys;                                                                 // 0x003D (size: 0x1)

}; // Size: 0x40

class AHKHUD : public AJoyHUD
{
    FHKHUDActionDisplayAdded ActionDisplayAdded;                                      // 0x0328 (size: 0x10)
    void HKHUDDelegate(class AHKHUD* _hud);
    FHKHUDActionDisplayRemoved ActionDisplayRemoved;                                  // 0x0338 (size: 0x10)
    void HKHUDDelegate(class AHKHUD* _hud);
    FHKHUDActionDisplayEnabledChanged ActionDisplayEnabledChanged;                    // 0x0348 (size: 0x10)
    void HKHUDDelegate(class AHKHUD* _hud);
    TSubclassOf<class UUserWidget> m_HUDWidgetClass;                                  // 0x0358 (size: 0x8)
    TSubclassOf<class UHUDDebugWidget> m_HUDDebugWidgetClass;                         // 0x0360 (size: 0x8)
    TMap<class TSubclassOf<UUserWidget>, class TSubclassOf<UUserWidget>> m_widgetToBlueprintMap; // 0x0368 (size: 0x50)
    TArray<class UUserWidget*> m_widgets;                                             // 0x0460 (size: 0x10)
    class UUserWidget* m_HUDWidget;                                                   // 0x0470 (size: 0x8)
    class UHUDDebugWidget* m_HUDDebugWidget;                                          // 0x0478 (size: 0x8)
    class USaveIconWidget* m_saveIcon;                                                // 0x0480 (size: 0x8)
    class UReticuleWidget* m_reticule;                                                // 0x0488 (size: 0x8)
    bool m_enableSaveIcon;                                                            // 0x0491 (size: 0x1)

    void StopVideoCinematic();
    void StopScreenFade(TEnumAsByte<EScreenFadeType> _type);
    void StartVideoCinematic(FString _URL, FName _musicActorId);
    void StartScreenFade(TEnumAsByte<EScreenFadeType> _type, FLinearColor _beginColor, FLinearColor _endColor, float _duration);
    void SetVideoCinematicSkippable(bool _value);
    void SetScreenFadeColor(TEnumAsByte<EScreenFadeType> _type, FLinearColor _color);
    void SetActionDisplayEnabled(FName _actionID, bool _enabled);
    void RemoveActionDisplay(FName _actionID);
    void PushActionDisplayHidden();
    void PopActionDisplayHidden();
    void OnDialogLineBegan(class ADialog* _dialog);
    void OnDialogEnded(class ADialog* _dialog);
    void OnDialogBegan(class ADialog* _dialog);
    void OnActionDisplayShown();
    void OnActionDisplayHidden();
    bool IsVideoCinematicSkippable();
    bool IsPlayingVideoCinematic();
    bool IsActionDisplayHidden();
    void HKHUDDelegate__DelegateSignature(class AHKHUD* _hud);
    TArray<class UUserWidget*> GetWidgets();
    FLinearColor GetScreenFadeColorInternal(TEnumAsByte<EScreenFadeType> _type);
    class UUserWidget* GetHUDWidget();
    class UHUDDebugWidget* GetHUDDebugWidget();
    TArray<FActionDisplay> GetActionDisplays();
    bool FindActionDisplay(FName _actionID, FActionDisplay& _outActionDisplay);
    void AddActionDisplayMultipleInputs(FName _actionID, FText _displayText, const TArray<FName>& _actionBindingNames, int32 _priority, bool _showAllKeys);
    void AddActionDisplay(FName _actionID, FText _displayText, FName _actionBindingName, int32 _priority, bool _showAllKeys);
    void _SetScreenFadeColorInternal(TEnumAsByte<EScreenFadeType> _type, FLinearColor _color);
    void _OnBackpackDialogLineBegan(class ABackpack* _backpack, class ADialog* _dialog);
    void _OnBackpackDialogEnded(class ABackpack* _backpack, class ADialog* _dialog);
    void _OnBackpackDialogBegan(class ABackpack* _backpack, class ADialog* _dialog);
}; // Size: 0x498

class UHKModuleDelegateHelper : public UObject
{

    void _OnNavDataRegisteredEvent(class ANavigationData* NavData);
}; // Size: 0x28

class AHKPlayerCameraManager : public APlayerCameraManager
{
    FHKPlayerCameraManagerCameraChanged CameraChanged;                                // 0x2820 (size: 0x10)
    void CameraTransitionDelegate(class AHKPlayerCameraManager* CameraManager, const FTransform& CurrentCameraTransform, class AActor* NextCamera, FViewTargetTransitionParams TransitionParams, EInputTransitionMode InputTransitionMode, float InputTransitionTime);
    class USphereComponent* m_collisionSphere;                                        // 0x2830 (size: 0x8)
    FVector m_maxDriftVelocity;                                                       // 0x2838 (size: 0xC)
    FVector m_driftDeceleration;                                                      // 0x2844 (size: 0xC)
    float m_maxDriftingAngularVelocity;                                               // 0x2850 (size: 0x4)
    float m_driftAngularDeceleration;                                                 // 0x2854 (size: 0x4)

    void SetInputMode(ECameraInputMode _mode);
    void PushFadeToBlack(float _fadeDuration);
    void PushCamera(class AActor* _actor, float _blendTime, TEnumAsByte<EViewTargetBlendFunction> _blendFunction, float _blendExp, bool _keepPreviousCameraForPlayerInput, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime, bool _lockRoll);
    void PopFadeToBlack(float _fadeDuration);
    void PopCamera(class AActor* _actor, float _blendTime, TEnumAsByte<EViewTargetBlendFunction> _blendFunction, float _blendExp, bool _keepPreviousCameraForPlayerInput, EInputTransitionMode _inputTransitionMode, float _inputTransitionTime, bool _lockRoll);
    bool IsViewTargetInStack();
    bool IsLookingAt(FVector _target, float _screenRatio, bool _checkObstacle, TEnumAsByte<ECollisionChannel> _obstacleChannel, TArray<class AActor*> _obstaclesToIgnore);
    bool IsFadedToBlack();
    ECameraInputMode GetInputMode();
    TArray<class AActor*> GetCameraStack();
    FVector2D GetCameraInput();
    void CameraTransitionDelegate__DelegateSignature(class AHKPlayerCameraManager* CameraManager, const FTransform& CurrentCameraTransform, class AActor* NextCamera, FViewTargetTransitionParams TransitionParams, EInputTransitionMode InputTransitionMode, float InputTransitionTime);
    void _OnCameraActorEndPlay(class AActor* _actor, TEnumAsByte<EEndPlayReason::Type> _endPlayReason);
}; // Size: 0x28F0

struct FWalkableDebuggedPrimitive
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPS5TriggerEffectData
{
    EPS5TriggerEffectMode Mode;                                                       // 0x0000 (size: 0x1)
    uint8 Value1;                                                                     // 0x0001 (size: 0x1)
    uint8 Value2;                                                                     // 0x0002 (size: 0x1)
    uint8 Value3;                                                                     // 0x0003 (size: 0x1)

}; // Size: 0x4

class AHKPlayerController : public APlayerController
{
    float m_fadeOutTime;                                                              // 0x05D0 (size: 0x4)
    float m_targetTimeDilation;                                                       // 0x05D4 (size: 0x4)
    float m_timeDilationLerpRatio;                                                    // 0x05D8 (size: 0x4)
    TSubclassOf<class AHKSpectatorPawn> m_spectatorClass;                             // 0x05E0 (size: 0x8)
    float m_minimumWaitForStreamingTime;                                              // 0x05E8 (size: 0x4)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x05F0 (size: 0x8)
    class AHKPlayerCameraManager* m_cameraManager;                                    // 0x0608 (size: 0x8)
    class ACatPawn* m_catPawn;                                                        // 0x0610 (size: 0x8)
    class ABackpack* M_BackPack;                                                      // 0x0618 (size: 0x8)
    class ADrone* M_Drone;                                                            // 0x0620 (size: 0x8)
    class AHKSpectatorPawn* m_spectator;                                              // 0x0628 (size: 0x8)
    int32 m_debugJumpProbeWheelSubdivisions;                                          // 0x0650 (size: 0x4)
    class UDebugInputComponent* m_debugInputComponent;                                // 0x0680 (size: 0x8)
    class AGameStateManager* m_gameStateManager;                                      // 0x0690 (size: 0x8)
    TArray<FWalkableDebuggedPrimitive> m_walkableDebuggedPrimitives;                  // 0x06D0 (size: 0x10)
    class UMaterialInterface* m_walkableDebugMaterial;                                // 0x06E0 (size: 0x8)
    class UMaterialInterface* m_movementObstacleDebugMaterial;                        // 0x06E8 (size: 0x8)
    int32 m_maxDebugTransformStackSize;                                               // 0x06F0 (size: 0x4)
    class UTexture* m_defaultIcon;                                                    // 0x06F8 (size: 0x8)
    bool m_savedHasBackpack;                                                          // 0x0700 (size: 0x1)
    bool m_savedHasUnlockedLight;                                                     // 0x0701 (size: 0x1)
    TArray<class TSubclassOf<AActor>> m_savedInventory;                               // 0x0708 (size: 0x10)
    class USoundSubmix* m_PS5VibrationSubmix;                                         // 0x0728 (size: 0x8)
    FPS5TriggerEffectData m_scratchablePS5TriggerEffect;                              // 0x0730 (size: 0x4)

    void SetWalkableDebugModeEnabled(bool _enabled);
    void SetPS5TriggersState(EPS5TriggersState _triggersState, EPS5TriggersSide _triggerSide);
    void SetBackpackEnabled(bool _enabled, bool _unlockStrongLight);
    void RespawnAfterDeathPressed();
    void Respawn();
    void PushIngameCinematicModeEnabled(float _fadeTime);
    void PopIngameCinematicModeEnabled(float _fadeTime);
    void OnExitCinematicMode(float _fadeTime);
    void OnEnterCinematicMode(float _fadeTime);
    void OnControllerShakedEvent__DelegateSignature();
    bool IsWaitingForStreamingAndLoading();
    bool IsSkipCinematicDown();
    bool IsIngameCinematicModeEnabled();
    class ADrone* GetDrone();
    float GetContextualAxisRightValue();
    float GetContextualAxisLeftValue();
    class ACatPawn* GetCat();
    class ABackpack* GetBackpack();
    void ForceWaitForStreamingAndLoading(float _fadeOutTime);
    void CatDied();
    void _OnR3Pressed();
    void _OnL3Pressed();
    void _OnCatDied(class ACatPawn* _cat);
}; // Size: 0x740

class UHKPlayerInput : public UPlayerInput
{
}; // Size: 0x3B0

class AHKPlayerStart : public APlayerStart
{
    bool UseData;                                                                     // 0x0258 (size: 0x1)
    FStartData StartData;                                                             // 0x0260 (size: 0x28)

    void BeforeCatSpawned();
    void AfterCatSpawned(class ACatPawn* _cat);
}; // Size: 0x288

class UHKProgressBar : public UProgressBar
{

    void _OnValueChanged(float _value);
}; // Size: 0x330

struct FObjectiveState
{
    EObjective ID;                                                                    // 0x0000 (size: 0x1)
    EObjectiveStatus status;                                                          // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FActivityState
{
    EActivity ID;                                                                     // 0x0000 (size: 0x1)
    EActivityStatus status;                                                           // 0x0001 (size: 0x1)
    TMap<class EObjective, class FObjectiveState> Objectives;                         // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FActivitiesState
{
    TMap<class EActivity, class FActivityState> Activities;                           // 0x0000 (size: 0x50)

}; // Size: 0x50

class UHKPersistentSaveData : public UObject
{
    TSet<FName> UnlockedMemories;                                                     // 0x0028 (size: 0x50)
    TMap<FName, uint64> StatCounts;                                                   // 0x0078 (size: 0x50)
    TSet<FName> ScratchedChapters;                                                    // 0x00C8 (size: 0x50)
    FName MaxUnlockedChapterName;                                                     // 0x0118 (size: 0x8)
    FActivitiesState ActivitiesState;                                                 // 0x0120 (size: 0x50)

    void UnlockMemory(FName _memoryId);
    void SetUnlockedMemories(const TSet<FName>& _memories);
    void LockMemory(FName _memoryId);
    bool IsMemoryUnlocked(FName _memoryId);
    void Init();
    TSet<FName> GetUnlockedMemories();
    FString BlueprintToString();
}; // Size: 0x188

class UHKSessionSaveData : public UObject
{
    bool IsInSentinelPattern;                                                         // 0x0028 (size: 0x1)
    bool IsInZurgPursuit;                                                             // 0x0029 (size: 0x1)

    FString BlueprintToString();
}; // Size: 0x30

struct FPlayerSaveData
{
    FTransform PlayerTransform;                                                       // 0x0000 (size: 0x30)
    FRotator CameraRelativeRotation;                                                  // 0x0030 (size: 0xC)
    bool HasBackpack;                                                                 // 0x003C (size: 0x1)
    TArray<uint8> BackpackData;                                                       // 0x0040 (size: 0x10)
    TArray<uint8> DroneData;                                                          // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FHKComponentSaveData
{
    FTransform RelativeTransform;                                                     // 0x0000 (size: 0x30)
    FName Name;                                                                       // 0x0030 (size: 0x8)
    TArray<uint8> Data;                                                               // 0x0038 (size: 0x10)
    bool NoAttachment;                                                                // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FHKActorSaveData
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TArray<uint8> Data;                                                               // 0x0008 (size: 0x10)
    TArray<FHKComponentSaveData> ComponentsData;                                      // 0x0018 (size: 0x10)
    bool Destroyed;                                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FHKLevelSaveData
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TMap<class FName, class FHKActorSaveData> Actors;                                 // 0x0008 (size: 0x50)

}; // Size: 0x58

class UHKSaveGame : public USaveGame
{
    FDateTime Timestamp;                                                              // 0x0028 (size: 0x8)
    FName ZoneName;                                                                   // 0x0030 (size: 0x8)
    FPlayerSaveData PlayerData;                                                       // 0x0040 (size: 0x60)
    TMap<class FName, class FHKLevelSaveData> LevelsData;                             // 0x00A0 (size: 0x50)
    TArray<uint8> PersistentData;                                                     // 0x00F0 (size: 0x10)
    TArray<uint8> SessionData;                                                        // 0x0100 (size: 0x10)
    FName ChapterName;                                                                // 0x0110 (size: 0x8)
    uint32 Version;                                                                   // 0x0118 (size: 0x4)

}; // Size: 0x120

struct FSaveSlotCache
{
    class UHKSaveGame* SaveGame;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

class UHKSaveInstance : public UObject
{
    FHKSaveInstanceUnlockedMemoriesChanged UnlockedMemoriesChanged;                   // 0x0030 (size: 0x10)
    void HKPersistentSaveDelegate(class UHKPersistentSaveData* _persistentSaveData);
    TSubclassOf<class UHKPersistentSaveData> m_persistentDataClass;                   // 0x0080 (size: 0x8)
    TSubclassOf<class UHKSessionSaveData> m_sessionDataClass;                         // 0x0088 (size: 0x8)
    class UHKSaveGame* m_saveData;                                                    // 0x0090 (size: 0x8)
    class UHKPersistentSaveData* m_persistentSaveData;                                // 0x0098 (size: 0x8)
    class UHKGlobalSaveGame* m_globalSaveData;                                        // 0x00A0 (size: 0x8)
    class UHKSessionSaveData* m_sessionSaveData;                                      // 0x00A8 (size: 0x8)
    TArray<FSaveSlotCache> m_fixedSlotsCache;                                         // 0x00B0 (size: 0x10)
    uint8 m_fixedSlotsCount;                                                          // 0x0218 (size: 0x1)

    void SavePersistentDataToDisk();
    bool IsSaving();
    bool IsSaveEnabled();
    void HKSaveInstanceDelegate__DelegateSignature(class UHKSaveInstance* _saveInstance);
    void HKPersistentSaveDelegate__DelegateSignature(class UHKPersistentSaveData* _persistentSaveData);
    class UHKSessionSaveData* GetSessionSaveData();
    class UHKPersistentSaveData* GetPersistentSaveData();
    void BP_SaveDataToDisk(bool _overridePlayerTransform, const FTransform& _playerTransform);
}; // Size: 0x220

class UHKSlider : public USlider
{

    void _OnValueChanged(float _value);
}; // Size: 0x628

class AHKSpectatorPawn : public ASpectatorPawn
{
    class UCameraComponent* m_camera;                                                 // 0x02B0 (size: 0x8)
    float m_moveSpeed;                                                                // 0x02B8 (size: 0x4)
    float m_horizontalLookSpeed;                                                      // 0x02BC (size: 0x4)
    float m_verticalLookSpeed;                                                        // 0x02C0 (size: 0x4)
    float m_maxLookUpAngle;                                                           // 0x02C4 (size: 0x4)
    float m_teleportFeedbackClippingDistance;                                         // 0x02C8 (size: 0x4)

}; // Size: 0x2F8

class UHKTextBlock : public UTextBlock
{
    FLinearColor m_selectedColor;                                                     // 0x02D8 (size: 0x10)

}; // Size: 0x2E8

class UHKUniformGridPanel : public UUniformGridPanel
{
}; // Size: 0x148

class UHKUtilities : public UBlueprintFunctionLibrary
{

    void SetVolumetricFogGridPixelSize(int32 _size);
    void SetIsInZurgPursuit(const class UObject* _worldContextObject, bool _isInZurgPursuit);
    void SetIsInSentinelPattern(const class UObject* _worldContextObject, bool _isInSentinelPattern);
    void SetChapter(const class UObject* _worldContextObject, EChapter _id);
    void PrintBlueprintCallstack();
    void OpenChapter(const class UObject* _worldContextObject, EChapter _id);
    void OnTriggerSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, class ACharacterDroid* _droid);
    void OnPlayerCatScratched(const class UObject* _worldContextObject);
    void OnFinishedSynchronizedAnimation(const TArray<FDialogLineSynchronizedActor>& _synchronizedActors, class ACharacterDroid* _droid);
    TArray<FString> LoadLevelAndGetSubLevelsPath(const FName _levelAssetPath, bool _excludeInvisibleLevels);
    bool IsMemoryRevealed(const class UObject* _worldContextObject, const FName& _memoryId);
    bool IsDecemberDemoBuild();
    bool IsAudioLogEnabled();
    int32 GetVolumetricFogGridPixelSize();
    FString GetVersionText();
    TEnumAsByte<EHKPlatform> GetPlatform();
    float GetMusicVolume();
    int32 GetMinorVersion();
    float GetMasterVolume();
    int32 GetMajorVersion();
    FVector GetLookAtTarget(const FLookAtData& _lookAtData, const FVector& _referenceLocation, const FRotator& _referenceRotation);
    FText GetKeyDisplayName(const FKey& _key, bool _longDisplayName);
    bool GetJumpPromptEnabled();
    bool GetIsInZurgPursuit(const class UObject* _worldContextObject);
    bool GetIsInSentinelPattern(const class UObject* _worldContextObject);
    bool GetHUDEnabled();
    class AGameStateManager* GetGameStateManager(const class UObject* _worldContextObject);
    float GetEffectsVolume();
    FText GetChapterName(const class UObject* _worldContextObject, EChapter _id);
    TSet<FName> GetChapterMemories(const class UObject* _worldContextObject, EChapter _id);
    EChapter GetChapter(const class UObject* _worldContextObject);
    FString GetBuildTimestamp();
    int32 GetBuildRevision();
    int32 GetBuildNumber();
    FString GetBuildDescription();
    FString GetBuildConfiguration();
    FString GetBranchName();
    class UB12Memories* GetB12MemoriesData(const class UObject* _worldContextObject);
    bool GetAutoCameraEnabled();
    class UActivityData* GetActivityData(const class UObject* _worldContextObject);
    FString GenerateRandomSentence(int32 _wordCount, int32 _minWordLength, int32 _maxWordLength, FString _suffix);
}; // Size: 0x28

struct FStreamingGroupData
{
    TArray<FName> Dependencies;                                                       // 0x0000 (size: 0x10)
    TArray<TSoftObjectPtr<UWorld>> Levels;                                            // 0x0010 (size: 0x10)
    TArray<class ALevelStreamingVolume*> Volumes;                                     // 0x0020 (size: 0x10)
    FName GroupName;                                                                  // 0x0030 (size: 0x8)
    bool InitiallyActive;                                                             // 0x0038 (size: 0x1)
    bool IgnoreDebugMode;                                                             // 0x0039 (size: 0x1)

}; // Size: 0x40

class AHKWorldSettings : public AWorldSettings
{
    class AHKPlayerStart* PlayerStart;                                                // 0x03A8 (size: 0x8)
    bool StreamingDebugModeEnabled;                                                   // 0x03B0 (size: 0x1)
    TArray<FStreamingGroupData> StreamingGroups;                                      // 0x03B8 (size: 0x10)
    FStartData StartData;                                                             // 0x03C8 (size: 0x28)
    TMap<class EChapter, class AHKPlayerStart*> m_chapterPlayerStarts;                // 0x03F0 (size: 0x50)
    class USoundSubmix* m_masterSoundSubmix;                                          // 0x0440 (size: 0x8)
    class USoundSubmix* m_controllerSoundSubmix;                                      // 0x0448 (size: 0x8)
    TArray<class USoundSubmix*> m_musicSoundSubmixes;                                 // 0x0450 (size: 0x10)
    TArray<class USoundSubmix*> m_effectsSoundSubmixes;                               // 0x0460 (size: 0x10)

    void AfterNotifyBeginPlay();
}; // Size: 0x470

class UHUDDebugWidget : public UUserWidget
{

    void OnOpened();
    void OnGUIY();
    void OnGUIX();
    void OnGUIValidate();
    void OnGUIUp();
    void OnGUIRight();
    void OnGUILeft();
    void OnGUIDown();
    void OnGUICancel();
    void OnClosed();
    void HUDDebugWidgetAction__DelegateSignature(class UHUDDebugWidget* _widget);
    void Close();
}; // Size: 0x290

class UIconData : public UPrimaryDataAsset
{
    class UTexture2D* Texture;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UKeyIconData : public UPrimaryDataAsset
{
    FKey Key;                                                                         // 0x0030 (size: 0x18)
    class UIconData* DefaultIcon;                                                     // 0x0048 (size: 0x8)
    TMap<class EGameControllerType, class UIconData*> ControllerIcons;                // 0x0050 (size: 0x50)

}; // Size: 0xA0

class UKeyIconSetData : public UPrimaryDataAsset
{
    TArray<class UKeyIconData*> Keys;                                                 // 0x0030 (size: 0x10)

    class UTexture2D* FindIconForKey(const FKey& _key, EGameControllerType _controller);
}; // Size: 0x40

class UIdentitySubsystem : public UHKGameSubsystem
{
}; // Size: 0x48

class AIEM : public AActor
{
}; // Size: 0x228

class UIEMableComponent : public UBoxComponent
{
    FIEMableComponentOnIEMed OnIEMed;                                                 // 0x0478 (size: 0x10)
    void IEMedDelegate(class UIEMableComponent* _IEMableComponent, class AIEM* _IEM);

    void IEMedDelegate__DelegateSignature(class UIEMableComponent* _IEMableComponent, class AIEM* _IEM);
    void _OnBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
}; // Size: 0x490

class UInputBindingsWidget : public UHKUserWidget
{
    class UScrollBox* ScrollBox;                                                      // 0x02F0 (size: 0x8)
    class UVerticalBox* InputKeyRowVBox;                                              // 0x02F8 (size: 0x8)
    class UInputKeyRowWidget* InputRowForward;                                        // 0x0300 (size: 0x8)
    class UInputKeyRowWidget* InputRowBack;                                           // 0x0308 (size: 0x8)
    class UInputKeyRowWidget* InputRowLeft;                                           // 0x0310 (size: 0x8)
    class UInputKeyRowWidget* InputRowRight;                                          // 0x0318 (size: 0x8)
    class UInputKeyRowWidget* InputRowRun;                                            // 0x0320 (size: 0x8)
    class UInputKeyRowWidget* InputRowJump;                                           // 0x0328 (size: 0x8)
    class UInputKeyRowWidget* InputRowInteract;                                       // 0x0330 (size: 0x8)
    class UInputKeyRowWidget* InputRowMeow;                                           // 0x0338 (size: 0x8)
    class UInputKeyRowWidget* InputRowCall;                                           // 0x0340 (size: 0x8)
    class UInputKeyRowWidget* InputRowMenu;                                           // 0x0348 (size: 0x8)
    class UInputKeyRowWidget* InputRowLight;                                          // 0x0350 (size: 0x8)
    class UInputKeyRowWidget* InputRowDefluxor;                                       // 0x0358 (size: 0x8)
    class UInputKeyRowWidget* InputRowHelp;                                           // 0x0360 (size: 0x8)
    class UInputKeyRowWidget* InputRowFirstPerson;                                    // 0x0368 (size: 0x8)
    class UInputKeyRowWidget* InputRowRecenter;                                       // 0x0370 (size: 0x8)
    class UInputKeyRowWidget* InputRowValidate;                                       // 0x0378 (size: 0x8)
    class UInputKeyRowWidget* InputRowExit;                                           // 0x0380 (size: 0x8)
    class UInputKeyRowWidget* InputRowNextDialog;                                     // 0x0388 (size: 0x8)
    class UInputKeyRowWidget* InputRowPrevCategory;                                   // 0x0390 (size: 0x8)
    class UInputKeyRowWidget* InputRowNextCategory;                                   // 0x0398 (size: 0x8)
    class UHorizontalBox* KeyBox;                                                     // 0x03A0 (size: 0x8)
    class UHorizontalBox* CancelKeyBox;                                               // 0x03A8 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x03B0 (size: 0x8)
    class UHKButton* DefaultsButton;                                                  // 0x03B8 (size: 0x8)
    class UHKButton* CancelButton;                                                    // 0x03C0 (size: 0x8)
    class USoundBase* m_onKeyRowSelectedSound;                                        // 0x03C8 (size: 0x8)
    class USoundBase* m_onKeyRowListeningStartSound;                                  // 0x03D0 (size: 0x8)
    class USoundBase* m_onKeyRowListeningConfirmSound;                                // 0x03D8 (size: 0x8)
    FText m_applyBindingsDialogText;                                                  // 0x03E0 (size: 0x18)
    FText m_resetToDefaultsDialogText;                                                // 0x03F8 (size: 0x18)
    FText m_invalidKeyDialogText;                                                     // 0x0410 (size: 0x18)
    FText m_clearInputDialogText;                                                     // 0x0428 (size: 0x18)
    float m_onListeningOtherKeyOpacity;                                               // 0x0440 (size: 0x4)

}; // Size: 0x510

class UInputKeyRowWidget : public UHKUserWidget
{
    class UInputSelectorWidget* FirstKeyButton;                                       // 0x02F0 (size: 0x8)
    class UInputSelectorWidget* SecondKeyButton;                                      // 0x02F8 (size: 0x8)
    class UHKBorder* Border;                                                          // 0x0300 (size: 0x8)
    class UHKTextBlock* ActionKeyTextBlock;                                           // 0x0308 (size: 0x8)
    class UImage* SeperatorImage;                                                     // 0x0310 (size: 0x8)
    class UHKButton* KeyRowButton;                                                    // 0x0318 (size: 0x8)
    FText m_actionKeyText;                                                            // 0x0320 (size: 0x18)
    FLinearColor m_onHoveredTextColor;                                                // 0x0338 (size: 0x10)
    FLinearColor m_onListeningTextColor;                                              // 0x0348 (size: 0x10)
    FLinearColor m_onListeningBorderBrushColor;                                       // 0x0358 (size: 0x10)
    FLinearColor m_onHoveredBorderBrushColor;                                         // 0x0368 (size: 0x10)

}; // Size: 0x478

class UInputSelectorWidget : public UHKUserWidget
{
    class USoundBase* m_onListeningCancelSound;                                       // 0x02F0 (size: 0x8)
    class UHKButton* Button;                                                          // 0x02F8 (size: 0x8)
    class UHKTextBlock* Text;                                                         // 0x0300 (size: 0x8)
    class UKeyIconWidget* KeyIcon;                                                    // 0x0308 (size: 0x8)
    FText m_waitingText;                                                              // 0x0310 (size: 0x18)
    TSet<FKey> m_escapeKeys;                                                          // 0x0328 (size: 0x50)
    FLinearColor m_onListeningTextColor;                                              // 0x0378 (size: 0x10)

}; // Size: 0x480

class UInputSettingsWidget : public UHKUserWidget
{
    class UCheckBoxWidget* InvertLookXCheckBox;                                       // 0x02F0 (size: 0x8)
    class UCheckBoxWidget* InvertLookYCheckBox;                                       // 0x02F8 (size: 0x8)
    class USliderBoxWidget* LookSensitivitySliderBox;                                 // 0x0300 (size: 0x8)
    class UHKButton* RebindButton;                                                    // 0x0308 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0310 (size: 0x8)
    class UHKButton* DefaultsButton;                                                  // 0x0318 (size: 0x8)
    class UHKTextBlock* SwitchTabTextBlock;                                           // 0x0320 (size: 0x8)
    class UHKButton* TabLeftButton;                                                   // 0x0328 (size: 0x8)
    class UHKButton* TabRightButton;                                                  // 0x0330 (size: 0x8)
    float m_minLookSensitivity;                                                       // 0x0338 (size: 0x4)
    float m_maxLookSensitivity;                                                       // 0x033C (size: 0x4)
    FText m_resetToDefaultsDialogText;                                                // 0x0340 (size: 0x18)

}; // Size: 0x3A8

class UInputSubsystemSettings : public UHKSubsystemSettings
{
    TMap<class FKey, class FKey> QwertyToAzerty;                                      // 0x0028 (size: 0x50)
    TMap<class FKey, class FKey> QwertyToQwertz;                                      // 0x0078 (size: 0x50)

}; // Size: 0xC8

class UInputSubsystem : public UHKGameSubsystem
{
    FInputSubsystemOnControllerTypeChanged OnControllerTypeChanged;                   // 0x0048 (size: 0x10)
    void OnControllerTypeChangedEvent();
    class UInputComponent* m_inputComponent;                                          // 0x0068 (size: 0x8)

    void OnControllerTypeChangedEvent__DelegateSignature();
    EGameControllerType GetGameControllerType(bool _forceGamepad);
    TArray<FKey> GetBindingKeys(const FName& _name);
    FKey GetBindingKey(const FName& _name);
}; // Size: 0x98

class AInteractionFeedback : public AActor
{
    class UCatUsableComponentBase* m_usable;                                          // 0x0228 (size: 0x8)

    void OnUsableChanged(class UCatUsableComponentBase* _previousUsable, class UCatUsableComponentBase* _currentUsable);
    class UCatUsableComponentBase* GetUsable();
    TEnumAsByte<EInteractionFeedbackState> GetState();
}; // Size: 0x238

class UIntroWidget : public UHKUserWidget
{
    float m_maximumFlashingOpacity;                                                   // 0x02F8 (size: 0x4)
    float m_minimumFlashingOpacity;                                                   // 0x02FC (size: 0x4)
    float m_flashingSpeed;                                                            // 0x0300 (size: 0x4)
    class UWidgetAnimation* FadeAnimation;                                            // 0x0308 (size: 0x8)
    class UImage* SavingIconImage;                                                    // 0x0318 (size: 0x8)

    void ShowGammaSetting();
    bool IsPcBuild();
    void _OpenMenu();
    void _OnSkipButtonPressed(FKey _key);
}; // Size: 0x320

class AItemSelector : public AActor
{
    class ABackpack* M_BackPack;                                                      // 0x0228 (size: 0x8)
    class UBackpackUsableComponent* m_usable;                                         // 0x0230 (size: 0x8)

    void OnSelectionExit();
    void OnSelectionEnter(class UBackpackUsableComponent* _usable);
    FTransform GetSelectionBoxTransform();
    void GetSelectionBox(FVector& _outOrigin, FVector& _outExtent);
    class UBackpackUsableComponent* GetSelectedUsable();
    class ABackpack* GetBackpack();
}; // Size: 0x280

struct FSpeedAnimationData
{
    class UAnimSequence* MoveAnimation;                                               // 0x0000 (size: 0x8)
    TArray<FJumpAnimationData> JumpAnimations;                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

class UJumpAnimationLibrary : public UPrimaryDataAsset
{
    TMap<class FName, class FSpeedAnimationData> JumpAnimations;                      // 0x0030 (size: 0x50)

    bool Check();
}; // Size: 0x80

class UKeyIconWidget : public UUserWidget
{

    void SetKey(const FKey& _key);
    void SetIsSelected(bool _isSelected);
    bool IsKeyboardColumnHidden();
}; // Size: 0x260

class ALevelScript : public AActor
{
    class USaveComponent* m_saveComponent;                                            // 0x0228 (size: 0x8)

    void OnInitialise(EChapter _chapter);
    void _OnStreamingGroupSaveLoaded(class UStreamingGroup* _streamingGroup);
}; // Size: 0x230

class ULifeComponent : public UActorComponent
{
    FLifeComponentOnTakeDamage OnTakeDamage;                                          // 0x00B0 (size: 0x10)
    void LifeComponenTakeDamagetDelegate(class ULifeComponent* _lifeComponent, class AActor* _damageApplier, float _damageAmount);
    FLifeComponentOnKilled OnKilled;                                                  // 0x00C0 (size: 0x10)
    void LifeComponentKilledDelegate(class ULifeComponent* _lifeComponent, class AActor* _killer);
    FLifeComponentOnRevived OnRevived;                                                // 0x00D0 (size: 0x10)
    void LifeComponentRevivedDelegate(class ULifeComponent* _lifeComponent);
    FLifeComponentOnRegeneration OnRegeneration;                                      // 0x00E0 (size: 0x10)
    void LifeComponentRegenerationDelegate(class ULifeComponent* _lifeComponent, float _life);
    bool m_canTakeDamage;                                                             // 0x00F0 (size: 0x1)
    float m_maxLife;                                                                  // 0x00F4 (size: 0x4)
    float m_regenerationCoolDownAfterDamage;                                          // 0x00F8 (size: 0x4)
    float m_regenerationTime;                                                         // 0x00FC (size: 0x4)
    float m_regenerationPerTime;                                                      // 0x0100 (size: 0x4)

    void SetTakeDamage(bool _canTakeDamage);
    void SetRegenerationTime(float _lifeRegenerationTime);
    void SetRegenerationPerTime(float _lifeRegenerationPerTime);
    void SetRegenerationCoolDown(float _lifeRegenerationCoolDown);
    void Reset(float _life);
    void LifeComponentRevivedDelegate__DelegateSignature(class ULifeComponent* _lifeComponent);
    void LifeComponentRegenerationDelegate__DelegateSignature(class ULifeComponent* _lifeComponent, float _life);
    void LifeComponentKilledDelegate__DelegateSignature(class ULifeComponent* _lifeComponent, class AActor* _killer);
    void LifeComponenTakeDamagetDelegate__DelegateSignature(class ULifeComponent* _lifeComponent, class AActor* _damageApplier, float _damageAmount);
    bool IsDamageAmountFatal(float _damageAmount);
    bool IsAlive();
    float GetRegenerationTime();
    float GetRegenerationPerTime();
    float GetRegenerationCoolDown();
    float GetMaxLife();
    float GetCurrentLife();
    bool CanTakeDamage();
    void ApplyDamage(class AActor* _damageApplier, float _damageAmount);
}; // Size: 0x118

class UListBoxWidget : public UHKUserWidget
{
    class UHKBorder* SelectionBorder;                                                 // 0x02F0 (size: 0x8)
    class UHKButton* LeftButton;                                                      // 0x02F8 (size: 0x8)
    class UHKButton* RightButton;                                                     // 0x0300 (size: 0x8)
    class UHKTextBlock* Text;                                                         // 0x0308 (size: 0x8)
    class UHKTextBlock* ListBoxText;                                                  // 0x0310 (size: 0x8)
    class UHKBorder* Border;                                                          // 0x0318 (size: 0x8)
    FText m_listBoxText;                                                              // 0x0320 (size: 0x18)
    FLinearColor m_selectedTextColor;                                                 // 0x0338 (size: 0x10)
    FLinearColor m_selectedSelectionBorderColor;                                      // 0x0348 (size: 0x10)

}; // Size: 0x438

class ULoadingScreenSettings : public UHKSubsystemSettings
{
    float TimeWithoutLoadingBeforeEndingScreen;                                       // 0x0028 (size: 0x4)
    class USoundBase* LoadingScreenSound;                                             // 0x0030 (size: 0x8)
    float LoadingScreenSoundVolume;                                                   // 0x0038 (size: 0x4)
    float LoadingScreenSoundFadeInDuration;                                           // 0x003C (size: 0x4)
    float LoadingScreenSoundFadeOutDuration;                                          // 0x0040 (size: 0x4)

}; // Size: 0x48

class ULoadingScreenSubsystem : public UHKGameSubsystem
{
    class UAudioComponent* m_loadingAudio;                                            // 0x0068 (size: 0x8)

    bool IsLoadingScreenOn();
    void EndLoadingScreen();
    void BeginLoadingScreen();
}; // Size: 0x80

class UHKLoadingScreen : public UWidget
{
}; // Size: 0x108

class ILookAtInterface : public IInterface
{

    FVector GetLookAtOffset();
}; // Size: 0x28

class ULootableComponent : public UDroneUsableComponent
{
    FLootableComponentOnLooted OnLooted;                                              // 0x05A0 (size: 0x10)
    void LootableLootedSignature(class ULootableComponent* _lootable);
    FLootableComponentOnDroped OnDroped;                                              // 0x05B0 (size: 0x10)
    void LootableDropedSignature(class ULootableComponent* _lootable);
    class UTexture* Icon;                                                             // 0x05C0 (size: 0x8)
    FName ID;                                                                         // 0x05C8 (size: 0x8)

    void LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void LootableInteractionStartSignature__DelegateSignature();
    void LootableInteractionEndSignature__DelegateSignature();
    void LootableDropedSignature__DelegateSignature(class ULootableComponent* _lootable);
    bool HasID(FName _id);
}; // Size: 0x5F0

class UMainMenuWidget : public UHKUserWidget
{
    class UHKButton* StartButton;                                                     // 0x02F0 (size: 0x8)
    class UHKButton* OptionsButton;                                                   // 0x02F8 (size: 0x8)
    class UHKButton* CreditsButton;                                                   // 0x0300 (size: 0x8)
    class UHKButton* QuitButton;                                                      // 0x0308 (size: 0x8)
    class UHKButton* SelectButton;                                                    // 0x0310 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* VersionText;                                                    // 0x0320 (size: 0x8)
    TMap<class FString, class UTexture2D*> ChapterImages;                             // 0x0328 (size: 0x50)
    TSoftObjectPtr<UWorld> m_creditsLevel;                                            // 0x0378 (size: 0x28)
    FText m_quitDialogText;                                                           // 0x03A0 (size: 0x18)
    FLinearColor m_fadeBeginColor;                                                    // 0x03B8 (size: 0x10)
    FLinearColor m_fadeEndColor;                                                      // 0x03C8 (size: 0x10)
    float m_fadeDuration;                                                             // 0x03D8 (size: 0x4)
    float m_creditsFadeDuration;                                                      // 0x03DC (size: 0x4)

}; // Size: 0x3E0

class AMenuGameMode : public AGameModeBase
{
}; // Size: 0x2C8

class UNoisableComponent : public UBoxComponent
{
    FNoisableComponentOnNoised OnNoised;                                              // 0x0478 (size: 0x10)
    void NoiseDelegate(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);

    void SetEnabled(bool _enable);
    bool OnNoise(FVector _location, class AActor* _emitter);
    void NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    bool IsEnabled();
}; // Size: 0x490

class UMeowableComponent : public UNoisableComponent
{
}; // Size: 0x490

class UMovingActorComponent : public UActorComponent
{

    void Reset();
    FTransform PredictTransform(const FTransform& _transform, float _dt);
    void _OnAfterLoaded(class USaveComponent* _saveComponent);
}; // Size: 0x180

class UPauseMenuWidget : public UHKUserWidget
{
    class UHKButton* ResumeButton;                                                    // 0x02F0 (size: 0x8)
    class UHKButton* OptionsButton;                                                   // 0x02F8 (size: 0x8)
    class UHKButton* ReloadCheckpointButton;                                          // 0x0300 (size: 0x8)
    class UHKButton* QuitButton;                                                      // 0x0308 (size: 0x8)
    class UHKButton* SelectButton;                                                    // 0x0310 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* VersionText;                                                    // 0x0320 (size: 0x8)
    class UTextBlock* LastCheckPointTime;                                             // 0x0328 (size: 0x8)
    FText m_lastCheckPointTimeText;                                                   // 0x0330 (size: 0x18)
    FText m_reloadCheckpointDialogText;                                               // 0x0348 (size: 0x18)
    FText m_reloadCheckpointDurationText;                                             // 0x0360 (size: 0x18)
    FText m_reloadCheckpointTimeText;                                                 // 0x0378 (size: 0x18)
    FText m_noCheckpointDialogText;                                                   // 0x0390 (size: 0x18)
    FText m_backButtonDialogText;                                                     // 0x03A8 (size: 0x18)
    FText m_quitDialogText;                                                           // 0x03C0 (size: 0x18)

}; // Size: 0x3D8

class UPhoto : public UObject
{
    TArray<FText> ScannedNames;                                                       // 0x0028 (size: 0x10)
    class UTexture2D* Texture;                                                        // 0x0038 (size: 0x8)

}; // Size: 0x40

class UPhysicsEventsComponent : public UActorComponent
{
    bool CanImpact;                                                                   // 0x00B0 (size: 0x1)
    float ImpactThreshold;                                                            // 0x00B4 (size: 0x4)
    float ImpactMinVelocity;                                                          // 0x00B8 (size: 0x4)
    float ImpactMaxVelocity;                                                          // 0x00BC (size: 0x4)
    bool CanSlide;                                                                    // 0x00C0 (size: 0x1)
    float SlidingMinVelocity;                                                         // 0x00C4 (size: 0x4)
    float SlidingMaxVelocity;                                                         // 0x00C8 (size: 0x4)
    bool CanRoll;                                                                     // 0x00CC (size: 0x1)
    float RollingMinVelocity;                                                         // 0x00D0 (size: 0x4)
    float RollingMaxVelocity;                                                         // 0x00D4 (size: 0x4)
    float SurfaceMovingMinVelocity;                                                   // 0x00D8 (size: 0x4)
    float SurfaceMovingMaxVelocity;                                                   // 0x00DC (size: 0x4)
    bool Debug;                                                                       // 0x00E0 (size: 0x1)
    FPhysicsEventsComponentSurfaceMovingBegin SurfaceMovingBegin;                     // 0x00E8 (size: 0x10)
    void SurfaceMovingDelegate(class UPhysicsEventsComponent* _physicsEventsComponent);
    FPhysicsEventsComponentSurfaceMovingEnd SurfaceMovingEnd;                         // 0x00F8 (size: 0x10)
    void SurfaceMovingDelegate(class UPhysicsEventsComponent* _physicsEventsComponent);
    FPhysicsEventsComponentImpact Impact;                                             // 0x0108 (size: 0x10)
    void ImpactDelegate(class UPhysicsEventsComponent* _physicsEventsComponent, FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);
    class UMeshComponent* m_meshToObserve;                                            // 0x0118 (size: 0x8)

    void UpdateDebug();
    void Update();
    void SurfaceMovingDelegate__DelegateSignature(class UPhysicsEventsComponent* _physicsEventsComponent);
    void SetAttachMeshComponent(class UMeshComponent* _mesh);
    void OnSurfaceMovingEnd();
    void OnSurfaceMovingBegin();
    void OnMeshWake(class UPrimitiveComponent* _wakingComponent, FName _boneName);
    void OnMeshSleep(class UPrimitiveComponent* _wakingComponent, FName _boneName);
    void OnImpact(FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);
    bool IsSurfaceMoving();
    void Initialize();
    void ImpactDelegate__DelegateSignature(class UPhysicsEventsComponent* _physicsEventsComponent, FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);
    TEnumAsByte<EPhysicalSurface> GetCurrentHitMaterial();
    FVector GetCurrentHitLocation();
    float GetCurrentHitAmplitude();
    class UMeshComponent* GetAttachMeshComponent();
    float ComputeSurfaceMovingIntensityForMesh(class UMeshComponent* _mesh);
    float ComputeSurfaceMovingIntensity();
    float ComputeSlidingIntensityForMesh(class UMeshComponent* _mesh);
    float ComputeSlidingIntensity();
    float ComputeRollingIntensityForMesh(class UMeshComponent* _mesh);
    float ComputeRollingIntensity();
    void _OnMeshHit(class UPrimitiveComponent* _hitComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, FVector _normalImpulse, const FHitResult& _hit);
}; // Size: 0x138

class UProximitySweepProbe : public UObject
{
}; // Size: 0xF0

class UProximityProbeComponent : public USceneComponent
{
    bool IgnoreRight;                                                                 // 0x01F8 (size: 0x1)
    bool IgnoreLeft;                                                                  // 0x01F9 (size: 0x1)
    bool IgnoreUp;                                                                    // 0x01FA (size: 0x1)
    bool IgnoreDown;                                                                  // 0x01FB (size: 0x1)
    bool IgnoreFront;                                                                 // 0x01FC (size: 0x1)
    bool IgnoreBack;                                                                  // 0x01FD (size: 0x1)
    float ProbeEndDistance;                                                           // 0x0200 (size: 0x4)
    float ProbeStartDistance;                                                         // 0x0204 (size: 0x4)
    float ProbeRadius;                                                                // 0x0208 (size: 0x4)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x020C (size: 0x1)
    class UProximitySweepProbe* m_probes;                                             // 0x0210 (size: 0x30)

    bool IsObstacleDetected(TEnumAsByte<EProximityProbeDirection> _probeIndex);
    FVector GetObstacleLocation(TEnumAsByte<EProximityProbeDirection> _probeIndex);
    float GetObstacleDistance(TEnumAsByte<EProximityProbeDirection> _probeIndex);
}; // Size: 0x2B0

class UReticuleWidget : public UHKUserWidget
{
}; // Size: 0x300

class URichTextBlockKeyIconDecorator : public URichTextBlockDecorator
{
    TSubclassOf<class UBindingIconWidget> m_widgetClass;                              // 0x0028 (size: 0x8)
    class UBindingIconWidget* m_widget;                                               // 0x0030 (size: 0x8)

}; // Size: 0x38

class USaveComponent : public UActorComponent
{
    FSaveComponentBeforeSaved BeforeSaved;                                            // 0x00B0 (size: 0x10)
    void SaveLoadDelegate(class USaveComponent* _saveComponent);
    FSaveComponentAfterLoaded AfterLoaded;                                            // 0x00C0 (size: 0x10)
    void SaveLoadDelegate(class USaveComponent* _saveComponent);
    bool m_enabled;                                                                   // 0x00D0 (size: 0x1)
    bool m_doSaveTransforms;                                                          // 0x00D1 (size: 0x1)
    FName m_levelNameOverride;                                                        // 0x00D4 (size: 0x8)

    void SetEnabled(bool _enabled);
    void SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    bool IsRegistered();
    bool IsEnabled();
}; // Size: 0xE8

class USaveGameDataAsset : public UPrimaryDataAsset
{
    FString saveName;                                                                 // 0x0030 (size: 0x10)
    class UHKSaveGame* SaveGame;                                                      // 0x0040 (size: 0x8)

    void ImportSave();
}; // Size: 0x48

class USaveIconWidget : public UHKUserWidget
{
    float m_minimumFlashingDuration;                                                  // 0x02F8 (size: 0x4)
    float m_minimumFlashingOpacity;                                                   // 0x02FC (size: 0x4)
    float m_maximumFlashingOpacity;                                                   // 0x0300 (size: 0x4)
    float m_flashingSpeed;                                                            // 0x0304 (size: 0x4)

}; // Size: 0x310

class USaveMenuWidget : public UHKUserWidget
{
    class USaveSlotWidget* SaveSlot1;                                                 // 0x02F0 (size: 0x8)
    class USaveSlotWidget* SaveSlot2;                                                 // 0x02F8 (size: 0x8)
    class USaveSlotWidget* SaveSlot3;                                                 // 0x0300 (size: 0x8)
    class UHKButton* SelectButton;                                                    // 0x0308 (size: 0x8)
    class UHKButton* BackButton;                                                      // 0x0310 (size: 0x8)
    class USoundBase* m_onBackSound;                                                  // 0x0318 (size: 0x8)

}; // Size: 0x320

class USaveSlotWidget : public UHKUserWidget
{
    class UImage* ChapterImageBackground;                                             // 0x02F0 (size: 0x8)
    class UImage* ChapterImageSelectionBackground;                                    // 0x02F8 (size: 0x8)
    class UHKButton* MainButton;                                                      // 0x0300 (size: 0x8)
    class UHKTextBlock* ImageText;                                                    // 0x0308 (size: 0x8)
    class UHKTextBlock* TitleText;                                                    // 0x0310 (size: 0x8)
    class UHKTextBlock* ChapterText;                                                  // 0x0318 (size: 0x8)
    class UHKTextBlock* DurationText;                                                 // 0x0320 (size: 0x8)
    class UHKTextBlock* MemoryText;                                                   // 0x0328 (size: 0x8)
    class UHKTextBlock* StartButtonText;                                              // 0x0330 (size: 0x8)
    class UVerticalBox* MenuBox;                                                      // 0x0338 (size: 0x8)
    class UHKButton* StartButton;                                                     // 0x0340 (size: 0x8)
    class UHKButton* ChapterButton;                                                   // 0x0348 (size: 0x8)
    class UHKButton* ClearButton;                                                     // 0x0350 (size: 0x8)
    class UTexture2D* m_emptySaveSlotImage;                                           // 0x0358 (size: 0x8)
    float m_unSelectedOpacity;                                                        // 0x0360 (size: 0x4)
    FText m_slotTitleText;                                                            // 0x0368 (size: 0x18)
    FText m_memoryText;                                                               // 0x0380 (size: 0x18)
    FText m_clearSlotDialogText;                                                      // 0x0398 (size: 0x18)
    FText m_startGameText;                                                            // 0x03B0 (size: 0x18)
    FText m_newGameText;                                                              // 0x03C8 (size: 0x18)
    FText m_continueText;                                                             // 0x03E0 (size: 0x18)
    FText m_durationText;                                                             // 0x03F8 (size: 0x18)
    class UHKSaveGame* m_slotInfo;                                                    // 0x0410 (size: 0x8)

}; // Size: 0x460

class UScannableComponent : public UBoxComponent
{
    bool EnabledOnStart;                                                              // 0x0478 (size: 0x1)
    FText DisplayName;                                                                // 0x0480 (size: 0x18)
    TSubclassOf<class AActor> ClueActorClass;                                         // 0x0498 (size: 0x8)

    void SetScannableEnabled(bool _value);
    bool IsScannableEnabled();
}; // Size: 0x4A0

class AScriptedJump : public AActor
{
    class USceneComponent* m_root;                                                    // 0x0228 (size: 0x8)
    class USceneComponent* m_begin;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* m_animationBegin;                                          // 0x0238 (size: 0x8)
    class USceneComponent* m_end;                                                     // 0x0240 (size: 0x8)
    class USceneComponent* m_animationEnd;                                            // 0x0248 (size: 0x8)
    float m_entryRadius;                                                              // 0x0260 (size: 0x4)
    float m_entryAngle;                                                               // 0x0264 (size: 0x4)
    class UAnimSequence* m_forwardAnimation;                                          // 0x0268 (size: 0x8)
    class UAnimSequence* m_backAnimation;                                             // 0x0270 (size: 0x8)

    void ViewportTick(float _dt);
    class USceneComponent* GetUpEntry();
    class USceneComponent* GetDownEntry();
    void _OnEntryEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnEntryBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
}; // Size: 0x298

struct FTraceBoneName
{
    TArray<FName> BoneNames;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

class ASentinel : public ACharacter
{
    FSentinelOnSentinelSettingsChanged OnSentinelSettingsChanged;                     // 0x04B8 (size: 0x10)
    void SentinelEventDelegate();
    FSentinelOnSentinelAggressivityChanged OnSentinelAggressivityChanged;             // 0x04C8 (size: 0x10)
    void SentinelBoolEventDelegate(bool status);
    FSentinelOnSentinelActivityChanged OnSentinelActivityChanged;                     // 0x04D8 (size: 0x10)
    void SentinelBoolEventDelegate(bool status);
    FSentinelOnSentinelLockedTargetChanged OnSentinelLockedTargetChanged;             // 0x04E8 (size: 0x10)
    void SentinelLockedTargetEventDelegate(class AActor* _targetActor);
    TArray<class ATargetPoint*> m_waypoints;                                          // 0x04F8 (size: 0x10)
    FSmootherRotation m_rotationSmoother;                                             // 0x0510 (size: 0x30)
    class UNavigationQueryFilter* m_navigationQueryFilter;                            // 0x0540 (size: 0x8)
    class USplineComponent* m_splinePathFindComponent;                                // 0x0548 (size: 0x8)
    class USentinelSettings* m_sentinelSettings;                                      // 0x0550 (size: 0x8)
    bool m_drawDebug;                                                                 // 0x0558 (size: 0x1)
    class UStreamingComponent* m_streamingComponent;                                  // 0x0560 (size: 0x8)
    class UHierarchicalStateMachine* m_sentinelStateMachine;                          // 0x05A0 (size: 0x8)
    TMap<class USkeletalMesh*, class FTraceBoneName> m_bonesNameForVisionDetection;   // 0x05B0 (size: 0x50)
    bool m_startSentinelActive;                                                       // 0x0659 (size: 0x1)
    class AActor* m_lockedTargetActor;                                                // 0x0660 (size: 0x8)

    void TickRotateToLocationInSpeed(FVector _location, float _speed);
    void TickRotateToDirectionInSpeed(FVector _direction, float _speed);
    void Tazer_UnLoading_Tick(float _dt);
    void Tazer_UnLoading_Exit();
    void Tazer_UnLoading_Enter();
    void Tazer_Shooting_Exit();
    void Tazer_Shooting_Enter();
    void Tazer_Reloading_Tick(float _dt);
    void Tazer_Reloading_Exit();
    void Tazer_Reloading_Enter();
    void Tazer_ReadyToShoot_Exit();
    void Tazer_ReadyToShoot_Enter();
    void Tazer_Loading_Tick(float _dt);
    void Tazer_Loading_Exit();
    void Tazer_Loading_Enter();
    void Tazer_Idle_Exit();
    void Tazer_Idle_Enter();
    void SetVisonLightEnabled(bool _enable);
    void SetTazerMode(ESentinelTazerMode _newTazerMode);
    void SetSettings(class USentinelSettings* _newSettings);
    void SetSentinelActive(bool _isActive);
    void SetLockOnTarget(class AActor* _targetActor);
    void SetInputMode(ESentinelInputMode _inputMode);
    void SetAggressive(bool _isAggressive);
    void SentinelLockedTargetEventDelegate__DelegateSignature(class AActor* _targetActor);
    void SentinelEventDelegate__DelegateSignature();
    void SentinelBoolEventDelegate__DelegateSignature(bool status);
    void RotateToLocationInTime(FVector _location, float _time);
    void RotateToDirectionInTime(FVector _direction, float _time);
    void OnSentinelActivityChange(bool _newActiveState);
    void OnDisplayDebug(class UCanvas* _canvas);
    bool MoveToOnNavMesh(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<class UNavigationQueryFilter> _queryFilter);
    bool MoveTo(FVector _location, float _speed, float _zOffset, bool _rotateToVelocity, TSubclassOf<class UNavigationQueryFilter> _queryFilter);
    bool IsSentinelActive();
    bool IsAggressive();
    bool IsActorInVision(class AActor* _actorToCheck, FVector _direction, float _angleInDegree, float _distance, TEnumAsByte<ECollisionChannel> _traceChannel, bool _drawDebug);
    bool GetVisionLightEnabled();
    ESentinelTazerMode GetTazerMode();
    class USentinelSettings* GetSettings();
    class ARecastNavMesh* GetSelectedNavMeshRecastActor();
    class ATargetPoint* GetNextWaypointFromLocation(FVector _location);
    class AActor* GetLockedTargetActor();
    ESentinelInputMode GetInputMode();
    class ATargetPoint* GetClosestWaypointToLocation(FVector _location);
    FVector GetClosestLocationOnPatrolPath();
    void AddForce(FVector _direction, float _speed);
    void _OnVisionLightEnabled();
    void _OnVisionLightDisabled();
    void _OnStreamedOut(class UStreamingComponent* _streamingComponent);
    void _OnStreamedIn(class UStreamingComponent* _streamingComponent);
    void _EditorTick(float _deltaTime);
}; // Size: 0x670

class ASentinelProjectile : public AActor
{
    FSentinelProjectileFSentinelProjectileStateChanged FSentinelProjectileStateChanged; // 0x0228 (size: 0x10)
    void SentinelProjectileStateChangedDelegate(ESentinelProjectileState _newState);
    FSentinelProjectileFOnProjectileHit FOnProjectileHit;                             // 0x0238 (size: 0x10)
    void SentinelProjectileOnHitDelegate(const FHitResult& _hitResult);
    class USphereComponent* m_projectileSphereColliderComponent;                      // 0x0248 (size: 0x8)
    class UProjectileMovementComponent* m_projectileMovementComponent;                // 0x0250 (size: 0x8)
    class UHierarchicalStateMachine* m_projectileStateMachine;                        // 0x02F0 (size: 0x8)
    ESentinelProjectileState m_currentSentinelProjectileState;                        // 0x02F8 (size: 0x1)

    void Shoot(FVector _direction);
    void SetMode(ESentinelProjectileState _newMode);
    void SentinelProjectileStateChangedDelegate__DelegateSignature(ESentinelProjectileState _newState);
    void SentinelProjectileOnHitDelegate__DelegateSignature(const FHitResult& _hitResult);
    void Projectile_WaitingDestroy_Tick(float _dt);
    void Projectile_WaitingDestroy_Exit();
    void Projectile_WaitingDestroy_Enter();
    void Projectile_Snapped_Tick(float _dt);
    void Projectile_Snapped_Exit();
    void Projectile_Snapped_Enter();
    void Projectile_Shooted_Exit();
    void Projectile_Shooted_Enter();
    void Projectile_None_Tick(float _dt);
    void Projectile_None_Exit();
    void Projectile_None_Enter();
    void Projectile_InAir_Tick(float _dt);
    void Projectile_InAir_Exit();
    void Projectile_InAir_Enter();
    void OnProjectileHit(FHitResult _hitResult);
    FHitResult GetHitResult();
    ESentinelProjectileState GetCurrentMode();
    void _OnProjectileHit(const FHitResult& _hitResult);
}; // Size: 0x300

class USentinelSettings : public UPrimaryDataAsset
{
    bool Aggressive;                                                                  // 0x0030 (size: 0x1)
    float MinimumDistanceDetectionWhenTargetIsHiding;                                 // 0x0034 (size: 0x4)
    float VisionLightRotationSpeed;                                                   // 0x0038 (size: 0x4)
    float ForwardLocationPrediction;                                                  // 0x003C (size: 0x4)
    float ForwardDirectionPrediction;                                                 // 0x0040 (size: 0x4)
    float DistanceFromTargetToStartBraking;                                           // 0x0044 (size: 0x4)
    float ReachAcceptanceDistance;                                                    // 0x0048 (size: 0x4)
    float RotationToMovementInTime;                                                   // 0x004C (size: 0x4)
    float InactiveZOffset;                                                            // 0x0050 (size: 0x4)
    float PatrolZOffset;                                                              // 0x0054 (size: 0x4)
    float DetectZOffset;                                                              // 0x0058 (size: 0x4)
    float SearchingZOffset;                                                           // 0x005C (size: 0x4)
    float ChasingZOffset;                                                             // 0x0060 (size: 0x4)
    float ZOffsetMovementTime;                                                        // 0x0064 (size: 0x4)
    float PatrolMovementSpeed;                                                        // 0x0068 (size: 0x4)
    float DetectMovementSpeed;                                                        // 0x006C (size: 0x4)
    float SearchingMovementSpeed;                                                     // 0x0070 (size: 0x4)
    float ChasingMovementSpeed;                                                       // 0x0074 (size: 0x4)
    float InactiveEyeRadius;                                                          // 0x0078 (size: 0x4)
    float PatrolEyeRadius;                                                            // 0x007C (size: 0x4)
    float DetectionEyeRadius;                                                         // 0x0080 (size: 0x4)
    float SearchingEyeRadius;                                                         // 0x0084 (size: 0x4)
    float ChasingEyeRadius;                                                           // 0x0088 (size: 0x4)
    FLinearColor InactiveStateColor;                                                  // 0x008C (size: 0x10)
    FLinearColor PatrolStateColor;                                                    // 0x009C (size: 0x10)
    FLinearColor SearchingStateColor;                                                 // 0x00AC (size: 0x10)
    FLinearColor DetectStateColor;                                                    // 0x00BC (size: 0x10)
    FLinearColor ChasingStateColor;                                                   // 0x00CC (size: 0x10)
    TSubclassOf<class ASentinelProjectile> TazerProjectileClass;                      // 0x00E0 (size: 0x8)
    float TazerInterShootDelay;                                                       // 0x00E8 (size: 0x4)
    float TazerReloadTime;                                                            // 0x00EC (size: 0x4)
    int32 TazerMaxShootCount;                                                         // 0x00F0 (size: 0x4)
    float TazerMinimumShootingDistance;                                               // 0x00F4 (size: 0x4)
    float TazerShootingDistanceHysteresis;                                            // 0x00F8 (size: 0x4)
    float TazerLoadingTime;                                                           // 0x00FC (size: 0x4)
    float TazerUnLoadingTime;                                                         // 0x0100 (size: 0x4)
    FVector2D TazerTrackingTimeReaction;                                              // 0x0104 (size: 0x8)
    float TazerInnerRadiusPrecision;                                                  // 0x010C (size: 0x4)
    float TazerOutterRadiusPrecision;                                                 // 0x0110 (size: 0x4)
    float TazerPrecisionScaleUpTime;                                                  // 0x0114 (size: 0x4)
    float TazerPrecisionScaleDownTime;                                                // 0x0118 (size: 0x4)
    float PatrolToSoundDetectionTimeInSecond;                                         // 0x011C (size: 0x4)
    float PatrolToVisionDetectionTimeInSecond;                                        // 0x0120 (size: 0x4)
    float DetectSoundToSearchingTimeInSecond;                                         // 0x0124 (size: 0x4)
    float DetectVisionToChasingTimeInSecond;                                          // 0x0128 (size: 0x4)
    float DetectVisionToPatrolTimeInSecond;                                           // 0x012C (size: 0x4)
    float SearchingViewToChasingTimeInSecond;                                         // 0x0130 (size: 0x4)
    float SearchingToPatrolWaitTimeInSecond;                                          // 0x0134 (size: 0x4)
    float SearchingScanAngleInDegree;                                                 // 0x0138 (size: 0x4)
    float SearchingScanCount;                                                         // 0x013C (size: 0x4)
    float ChasingVisionLostTime;                                                      // 0x0140 (size: 0x4)

}; // Size: 0x148

class ASequence : public AEditorTickingActor
{
    class USaveComponent* m_saveComponent;                                            // 0x0230 (size: 0x8)
    class UStreamingComponent* m_streamingComponent;                                  // 0x0238 (size: 0x8)
    class UBillboardComponent* m_billboard;                                           // 0x0240 (size: 0x8)
    bool m_autoStartSequence;                                                         // 0x0248 (size: 0x1)
    FString m_checkpointName;                                                         // 0x0250 (size: 0x10)

    void StartSequence();
    void SetCheckpoint(FName _name);
    void OnStartSequence();
    void OnStartFromCheckpoint();
    FName GetCheckpoint();
    void _OnStreamedIn(class UStreamingComponent* _streamingComponent);
}; // Size: 0x268

class USettingsMenuWidget : public UHKUserWidget
{
    class UTabButtonWidget* AudioButton;                                              // 0x02F8 (size: 0x8)
    class UTabButtonWidget* GraphicsButton;                                           // 0x0300 (size: 0x8)
    class UTabButtonWidget* InputButton;                                              // 0x0308 (size: 0x8)
    class UTabButtonWidget* GameplayButton;                                           // 0x0310 (size: 0x8)
    class UAudioSettingsWidget* AudioSettings;                                        // 0x0318 (size: 0x8)
    class UGraphicsSettingsWidget* GraphicsSettings;                                  // 0x0320 (size: 0x8)
    class UInputSettingsWidget* InputSettings;                                        // 0x0328 (size: 0x8)
    class UGameplaySettingsWidget* GameplaySettings;                                  // 0x0330 (size: 0x8)
    FText m_applySettingsDialogText;                                                  // 0x0338 (size: 0x18)

}; // Size: 0x350

class USliderBoxWidget : public UHKUserWidget
{
    class UHKBorder* Border;                                                          // 0x02F0 (size: 0x8)
    class UHKTextBlock* SliderText;                                                   // 0x02F8 (size: 0x8)
    class UHKButton* LeftButton;                                                      // 0x0300 (size: 0x8)
    class UHKButton* RightButton;                                                     // 0x0308 (size: 0x8)
    class UHKSlider* Slider;                                                          // 0x0310 (size: 0x8)
    int32 m_notchCount;                                                               // 0x0318 (size: 0x4)
    class USoundBase* m_onSliderValueChangeSound;                                     // 0x0320 (size: 0x8)
    FLinearColor m_borderHoveredColor;                                                // 0x0328 (size: 0x10)
    FLinearColor m_textHoveredColor;                                                  // 0x0338 (size: 0x10)
    FLinearColor m_sliderBarHoveredColor;                                             // 0x0348 (size: 0x10)
    FLinearColor m_sliderHandleHoveredColor;                                          // 0x0358 (size: 0x10)
    FText Text;                                                                       // 0x0368 (size: 0x18)

}; // Size: 0x410

class USplineRailConnection : public UObject
{
    class USplineRailComponent* Rail;                                                 // 0x0028 (size: 0x8)
    class USphereComponent* Collider;                                                 // 0x0030 (size: 0x8)

}; // Size: 0x100

class USplineRailComponent : public USplineComponent
{
    float Width;                                                                      // 0x0548 (size: 0x4)
    float Height;                                                                     // 0x054C (size: 0x4)
    float TrajectoryRaycastEndOffset;                                                 // 0x0550 (size: 0x4)
    FSplineRailComponentAfterCatEntered AfterCatEntered;                              // 0x0558 (size: 0x10)
    void RailCatDelegate(class USplineRailComponent* _rail, class ACatPawn* _cat);
    FSplineRailComponentBeforeCatExited BeforeCatExited;                              // 0x0568 (size: 0x10)
    void RailCatDelegate(class USplineRailComponent* _rail, class ACatPawn* _cat);
    class UProceduralMeshComponent* m_proceduralMeshComponent;                        // 0x0578 (size: 0x8)
    class UBoxComponent* m_encapsulatingCollider;                                     // 0x0580 (size: 0x8)
    class UStreamingComponent* m_streamingComponent;                                  // 0x0588 (size: 0x8)
    class USplineRailConnection* m_beginGroundConnection;                             // 0x0590 (size: 0x8)
    class USplineRailConnection* m_endGroundConnection;                               // 0x0598 (size: 0x8)
    bool m_enabled;                                                                   // 0x05A0 (size: 0x1)
    bool m_drawMesh;                                                                  // 0x05A1 (size: 0x1)
    bool m_isBucket;                                                                  // 0x05A2 (size: 0x1)
    bool m_enableBeginConnection;                                                     // 0x05A3 (size: 0x1)
    bool m_enableEndConnection;                                                       // 0x05A4 (size: 0x1)
    float m_additionalEncapsulatingColliderSize;                                      // 0x05A8 (size: 0x4)
    float m_samplingStep;                                                             // 0x05AC (size: 0x4)
    bool m_debug;                                                                     // 0x05B0 (size: 0x1)
    float m_connectionRaycastDistance;                                                // 0x05B4 (size: 0x4)
    float m_connectionRadius;                                                         // 0x05B8 (size: 0x4)
    TArray<class ACatPawn*> m_ridingCats;                                             // 0x05F0 (size: 0x10)

    void SetQuadrantEnabled(int32 _quadrantId, bool _enabled);
    void SetEnabled(bool _enabled);
    void RefreshConnections();
    void RailCatDelegate__DelegateSignature(class USplineRailComponent* _rail, class ACatPawn* _cat);
    bool IsQuadrantEnabled(int32 _quadrantId);
    bool IsEnabled();
    bool IsBucket();
    TArray<class ACatPawn*> GetRidingCats();
    void FixUpSpline();
    void _OnStreamedOut(class UStreamingComponent* _streamingComponent);
    void _OnStreamedIn(class UStreamingComponent* _streamingComponent);
    void _OnConnectionColliderEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnConnectionColliderBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
}; // Size: 0x630

class ASplineRailManager : public AManager
{
}; // Size: 0x240

class UStatSubsystem : public UHKGameSubsystem
{

    void ResetCount(EStatEvent _id);
    void OnEvent(EStatEvent _id, int32 _increment);
    int32 GetDeltaMilliseconds();
    void _OnGameSaved(class UHKSaveInstance* _saveInstance);
    void _OnGameLoaded(class UHKSaveInstance* _saveInstance);
}; // Size: 0xA0

struct FComponentPhysicsSettings
{
}; // Size: 0x8

class UStreamingComponent : public UActorComponent
{
    bool bDoNotTickUntilStreamedIn;                                                   // 0x00B0 (size: 0x1)
    bool bDisablePhysicsUntilStreamedIn;                                              // 0x00B1 (size: 0x1)
    FStreamingComponentStreamedIn StreamedIn;                                         // 0x00B8 (size: 0x10)
    void StreamingComponentDelegate(class UStreamingComponent* _component);
    FStreamingComponentStreamedOut StreamedOut;                                       // 0x00C8 (size: 0x10)
    void StreamingComponentDelegate(class UStreamingComponent* _component);
    TMap<class FName, class FComponentPhysicsSettings> m_componentsPhysicsSettings;   // 0x00E0 (size: 0x50)

    void StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetComponentSimulatePhysics(class UPrimitiveComponent* _component, bool _simulatePhysics);
    void SetComponentCollisionEnabled(class UPrimitiveComponent* _component, TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled);
    bool IsStreamedIn();
    void BlueprintOnStreamOut();
    void BlueprintOnStreamIn();
}; // Size: 0x148

class UStreamingUnit : public UObject
{
    class UStreamingGroupDynamic* m_streamingGroup;                                   // 0x0028 (size: 0x8)
    class ULevelStreaming* m_levelStreaming;                                          // 0x0030 (size: 0x8)

    void _OnLevelStreamingUnloaded();
    void _OnLevelStreamingLoaded();
}; // Size: 0x40

class UStreamingGroup : public UObject
{
    TArray<class UStreamingComponent*> m_streamingComponents;                         // 0x0038 (size: 0x10)
    TArray<class UStreamingComponent*> m_pendingRegisterComponents;                   // 0x0048 (size: 0x10)
    TArray<class UStreamingComponent*> m_pendingUnregisterComponents;                 // 0x0058 (size: 0x10)

}; // Size: 0x78

class UStreamingGroupPersistent : public UStreamingGroup
{
}; // Size: 0x80

class UStreamingGroupDynamic : public UStreamingGroup
{
    TArray<class UStreamingUnit*> m_streamingUnits;                                   // 0x0080 (size: 0x10)

}; // Size: 0xA0

struct FStreamingGroupSavedState
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    bool IsActive;                                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

class AStreamingGroupManager : public AManager
{
    FStreamingGroupManagerOnStreamingGroupSaveLoaded OnStreamingGroupSaveLoaded;      // 0x0228 (size: 0x10)
    void StreamingGroupSaveLoadedDelegate(class UStreamingGroup* StreamingGroup);
    TArray<class UStreamingGroupDynamic*> m_streamingGroups;                          // 0x0240 (size: 0x10)
    class UStreamingGroupPersistent* m_persistentGroup;                               // 0x0250 (size: 0x8)
    class USaveComponent* m_saveComponent;                                            // 0x0258 (size: 0x8)
    TArray<FStreamingGroupSavedState> m_savedGroupsStates;                            // 0x0260 (size: 0x10)

    void StreamingGroupSaveLoadedDelegate__DelegateSignature(class UStreamingGroup* StreamingGroup);
    bool IsStreamingInProgress();
    bool IsPersistentGroupLoaded();
    bool IsGroupLoaded(const FName _name);
    bool IsGroupActive(const FName _name);
    TEnumAsByte<EStreamingState> GetPersistentGroupState();
    TEnumAsByte<EStreamingState> GetGroupState(const FName _name);
    void DeactivateGroup(const FName _name);
    void ActivateGroup(const FName _name);
    void _OnPreLoadZone(FString _previousMapName, FString _nextMapName);
    void _OnPostLoadZone();
    void _BeforeSaved(class USaveComponent* _saveComponent);
    void _AfterLoaded(class USaveComponent* _saveComponent);
}; // Size: 0x270

class UTabButtonWidget : public UHKUserWidget
{
    class UHKButton* Button;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* ButtonTextBlock;                                                // 0x02F8 (size: 0x8)
    class UImage* ButtonImage;                                                        // 0x0300 (size: 0x8)
    FText ButtonText;                                                                 // 0x0350 (size: 0x18)

}; // Size: 0x368

class UTalkableComponent : public UDroneUsableComponent
{
    FTalkableComponentDialogBegan DialogBegan;                                        // 0x05A0 (size: 0x10)
    void TalkableDelegate(class UTalkableComponent* _talkableComponent);
    FTalkableComponentDialogEnded DialogEnded;                                        // 0x05B0 (size: 0x10)
    void TalkableDelegate(class UTalkableComponent* _talkableComponent);
    FTalkableComponentDialogLineBegan DialogLineBegan;                                // 0x05C0 (size: 0x10)
    void TalkableLineDelegate(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    FTalkableComponentDialogLineDisplayed DialogLineDisplayed;                        // 0x05D0 (size: 0x10)
    void TalkableLineDelegate(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    FTalkableComponentDialogLineEnded DialogLineEnded;                                // 0x05E0 (size: 0x10)
    void TalkableLineDelegate(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    FText m_notMetTextFormat;                                                         // 0x05F0 (size: 0x18)
    float m_callBeforeDialogTime;                                                     // 0x0608 (size: 0x4)
    bool m_useB12Voice;                                                               // 0x060C (size: 0x1)
    bool m_alreadyMet;                                                                // 0x060D (size: 0x1)
    class ADialog* m_dialog;                                                          // 0x0610 (size: 0x8)
    TSubclassOf<class ADialog> m_dialogClass;                                         // 0x0618 (size: 0x8)
    FColor m_primaryColor;                                                            // 0x0620 (size: 0x4)
    FColor m_secondaryColor;                                                          // 0x0624 (size: 0x4)
    bool m_isMet;                                                                     // 0x0628 (size: 0x1)
    bool m_turnTowardInterlocutor;                                                    // 0x0644 (size: 0x1)
    float m_movementRange;                                                            // 0x0648 (size: 0x4)
    float m_speedLimit;                                                               // 0x064C (size: 0x4)
    class ACharacterDroid* m_droidOwner;                                              // 0x0658 (size: 0x8)
    class ULootableComponent* m_itemToShow;                                           // 0x0660 (size: 0x8)

    void TalkableLineDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    void TalkableDelegate__DelegateSignature(class UTalkableComponent* _talkableComponent);
    void StopDialogInternal(class ADrone* _drone);
    void StartDialogInternal(class ADrone* _drone);
    bool ShouldUseB12Voice();
    void SetShouldUseB12Voice(bool _useB12Voice);
    void SetSecondaryColor(const FColor& _color);
    void SetPrimaryColor(const FColor& _color);
    void SetMet(bool _met);
    void SetItemToShow(class ULootableComponent* _lootable);
    void SetDialog(class ADialog* _dialog);
    bool IsWaitingInterlocutor();
    bool IsWaitingDialog();
    bool IsMet();
    bool IsCalling();
    FColor GetSecondaryColor();
    FColor GetPrimaryColor();
    class ULootableComponent* GetItemToShow();
    FText GetDialogDisplayedName();
    class ADialog* GetDialog();
    void _OnGuiClosed(class ADrone* _drone);
}; // Size: 0x670

class UVoiceBank : public UDataAsset
{
    TArray<class USoundBase*> VoiceSounds;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

class AZoneManager : public AManager
{

    bool PrepareLoadZone(TSoftObjectPtr<UWorld> _zone, TArray<FName> _transitionGroups, const TArray<TSoftObjectPtr<UWorld>>& _preloadedLevels, TEnumAsByte<EZoneLoadingType> _loadingType);
    bool OpenZoneByPath(FName _zonePath, bool _saveBeforeOpenZone);
    bool OpenZone(TSoftObjectPtr<UWorld> _zone, bool _saveBeforeOpenZone);
    bool LoadZone(TSoftObjectPtr<UWorld> _zone, TArray<FName> _transitionGroups, const TArray<TSoftObjectPtr<UWorld>>& _preloadedLevels, TEnumAsByte<EZoneLoadingType> _loadingType);
    bool IsZoneLoading();
    bool IsLoadZoneReadyForCommit();
    bool IsCurrentZone(TSoftObjectPtr<UWorld> _zone);
    FName GetLoadingZoneName();
    FName GetCurrentZoneName();
    bool CommitLoadZone();
    void CancelZoneLoading();
    void _OnPostLoadZone();
}; // Size: 0x298

class UZurgAttackPointComponent : public USphereComponent
{
    FZurgAttackPointComponentOnZurgAttached OnZurgAttached;                           // 0x0470 (size: 0x10)
    void ZurgAttackPointComponentDelegate(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    FZurgAttackPointComponentOnZurgDetached OnZurgDetached;                           // 0x0480 (size: 0x10)
    void ZurgAttackPointComponentDelegate(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);

    void ZurgAttackPointComponentDelegate__DelegateSignature(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    class AZurgPawnSlave* GetAttachedZurg();
    void DetachZurg();
    void AttachZurg(class AZurgPawnSlave* _zurg);
    void _OnSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x4A0

class UZurgAttackPointManagerComponent : public UActorComponent
{
    FInt32Range m_zurgCountDamageMultiplicator;                                       // 0x00B0 (size: 0x10)

    void SetAttackPointsActive(bool _active);
    void OnZurgDetached(class UZurgAttackPointComponent* _zurgAttackPoint, class AZurgPawnSlave* _zurg);
    void OnZurgAttached(class UZurgAttackPointComponent* _zurgAttackPoint, class AZurgPawnSlave* _zurg);
    bool IsAttackPointsActive();
    void _OnLifeComponentKilled(class ULifeComponent* _lifeComponent, class AActor* _killer);
}; // Size: 0x128

class UZurgCharacterMovementComponent : public UCharacterMovementComponent
{
}; // Size: 0xE70

class UZurgInterestPointComponent : public USceneComponent
{
}; // Size: 0x200

struct FLightToSlaveTrace
{
    class UAntiZurgSpotlightComponent* Light;                                         // 0x0008 (size: 0x8)
    class AZurgPawnSlave* slave;                                                      // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FLightToLightableTrace
{
    class UAntiZurgSpotlightComponent* Light;                                         // 0x0008 (size: 0x8)
    class UAntiZurgLightableComponent* lightable;                                     // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FSlaveTick
{
    class AZurgPawnSlave* slave;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLeaderTick
{
    class AZurgPawnLeader* leader;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSlaveSpawnRequest
{
    class AZurgPawnLeader* leader;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FSlaveKillRequest
{
    class AActor* damageApplier;                                                      // 0x0000 (size: 0x8)
    class AZurgPawnSlave* slave;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

class AZurgManager : public AManager
{
    float m_leaderDeactivationDistance;                                               // 0x0228 (size: 0x4)
    FZurgManagerOnZurgLeaderSpawnedDelegate OnZurgLeaderSpawnedDelegate;              // 0x0230 (size: 0x10)
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgLeaderDestroyedDelegate OnZurgLeaderDestroyedDelegate;          // 0x0240 (size: 0x10)
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgLeaderActivatedDelegate OnZurgLeaderActivatedDelegate;          // 0x0250 (size: 0x10)
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgLeaderDeactivatedDelegate OnZurgLeaderDeactivatedDelegate;      // 0x0260 (size: 0x10)
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgSlaveSpawnedDelegate OnZurgSlaveSpawnedDelegate;                // 0x0270 (size: 0x10)
    void ZurgManagerSlaveDelegate(class AZurgPawnSlave* _newZurg);
    FZurgManagerOnZurgSlaveDestroyedDelegate OnZurgSlaveDestroyedDelegate;            // 0x0280 (size: 0x10)
    void ZurgManagerSlaveDelegate(class AZurgPawnSlave* _newZurg);
    TSubclassOf<class AZurgPawnSlave> m_slaveBP;                                      // 0x0290 (size: 0x8)
    int32 m_maxSlaveTicksPerFrame;                                                    // 0x0298 (size: 0x4)
    float m_slaveLODDistanceScale;                                                    // 0x029C (size: 0x4)
    int32 m_slavePoolInitialSize;                                                     // 0x02A0 (size: 0x4)
    int32 m_maxActivatedZurgCount;                                                    // 0x02A4 (size: 0x4)
    int32 m_maxSlaveSpawnPerFrame;                                                    // 0x02A8 (size: 0x4)
    int32 m_maxLeaderTicksPerFrame;                                                   // 0x02AC (size: 0x4)
    float m_deactivationDistanceHysteresis;                                           // 0x02B0 (size: 0x4)
    class ARecastNavMesh* m_navMesh;                                                  // 0x02B8 (size: 0x8)
    class UHKGameInstance* m_hkGameInstance;                                          // 0x02C0 (size: 0x8)
    class ACatPawn* m_catPawn;                                                        // 0x02C8 (size: 0x8)
    class UAnimationSharingManager* m_animationSharingManager;                        // 0x02D0 (size: 0x8)
    class UAnimationSharingSetup* m_animationSharingSetup;                            // 0x02D8 (size: 0x8)
    TArray<class UAntiZurgSpotlightComponent*> m_antiZurgLights;                      // 0x02E0 (size: 0x10)
    TArray<class UAntiZurgLightableComponent*> m_antiZurgLightables;                  // 0x02F0 (size: 0x10)
    TArray<FLightToSlaveTrace> m_lightToSlaveTraces;                                  // 0x0300 (size: 0x10)
    TArray<FLightToLightableTrace> m_lightToLightableTraces;                          // 0x0310 (size: 0x10)
    TArray<FSlaveTick> m_slaveTickList;                                               // 0x0340 (size: 0x10)
    TArray<FLeaderTick> m_leaderTickList;                                             // 0x0350 (size: 0x10)
    TArray<class AZurgPawnSlave*> m_slavePool;                                        // 0x0360 (size: 0x10)
    TArray<FSlaveSpawnRequest> m_slaveSpawnRequestQueue;                              // 0x0370 (size: 0x10)
    TArray<FSlaveKillRequest> m_slaveKillQueue;                                       // 0x0380 (size: 0x10)

    void ZurgManagerSlaveDelegate__DelegateSignature(class AZurgPawnSlave* _newZurg);
    void ZurgManagerLeaderDelegate__DelegateSignature(class AZurgPawnLeader* _zurgLeader);
    void SetMaxActivatedZurgCount(int32 _newMaxCount);
    void OnZurgSpawnedEvent(class AZurgPawnSlave* _zurgSlave);
    void OnZurgSlaveDeactivatedEvent(class AZurgPawnSlave* _zurgSlave);
    void OnZurgSlaveActivatedEvent(class AZurgPawnSlave* _zurgSlave);
    void OnZurgLeaderSpawnedEvent(class AZurgPawnLeader* _zurgLeader);
    void OnZurgLeaderDestroyedEvent(class AZurgPawnLeader* _zurgLeader);
    void OnZurgLeaderDeactivatedEvent(class AZurgPawnLeader* _zurgLeader);
    void OnZurgLeaderActivatedEvent(class AZurgPawnLeader* _zurgLeader);
    void OnZurgDestroyedEvent(class AZurgPawnSlave* _zurgSlave);
    class ARecastNavMesh* GetZurgsNavMesh();
    int32 GetZurgSlaveCount();
    int32 GetMaxActivatedZurgCount();
    TArray<class AZurgPawnLeader*> GetLeaders();
    int32 GetActivatedZurgSlaveCount();
}; // Size: 0x398

class UZurgNewSettings : public UPrimaryDataAsset
{
    int32 Life;                                                                       // 0x0030 (size: 0x4)
    int32 LifeRandomDelta;                                                            // 0x0034 (size: 0x4)
    float LifeRegenerationTime;                                                       // 0x0038 (size: 0x4)
    float LifeRegenerationCoolDownAfterDamage;                                        // 0x003C (size: 0x4)
    float LifeRegenerationPerTime;                                                    // 0x0040 (size: 0x4)
    FVector2D ChasingMovementMaxSpeed;                                                // 0x0044 (size: 0x8)
    FVector2D ChasingMovementAcceleration;                                            // 0x004C (size: 0x8)
    FVector2D ChasingMovementGroundFriction;                                          // 0x0054 (size: 0x8)
    FVector2D ChasingMovementRandomRadius;                                            // 0x005C (size: 0x8)
    FVector2D AngryMovementMaxSpeed;                                                  // 0x0064 (size: 0x8)
    FVector2D AngryMovementAcceleration;                                              // 0x006C (size: 0x8)
    FVector2D AngryMovementGroundFriction;                                            // 0x0074 (size: 0x8)
    FVector2D AngryMovementRandomRadius;                                              // 0x007C (size: 0x8)
    FVector2D AlertMovementMaxSpeed;                                                  // 0x0084 (size: 0x8)
    FVector2D AlertMovementAcceleration;                                              // 0x008C (size: 0x8)
    FVector2D AlertMovementGroundFriction;                                            // 0x0094 (size: 0x8)
    FVector2D AlertMovementRandomRadius;                                              // 0x009C (size: 0x8)
    FVector2D RoutineMovementMaxSpeed;                                                // 0x00A4 (size: 0x8)
    FVector2D RoutineMovementAcceleration;                                            // 0x00AC (size: 0x8)
    FVector2D RoutineMovementGroundFriction;                                          // 0x00B4 (size: 0x8)
    FVector2D RoutineMovementRandomRadius;                                            // 0x00BC (size: 0x8)
    class UBlendSpace* CustomMovementBlendSpace;                                      // 0x00C8 (size: 0x8)
    FVector2D UnderLightMovementMaxSpeed;                                             // 0x00D0 (size: 0x8)
    FVector2D UnderLightMovementAcceleration;                                         // 0x00D8 (size: 0x8)
    FVector2D UnderLightMovementGroundFriction;                                       // 0x00E0 (size: 0x8)
    float Precision;                                                                  // 0x00E8 (size: 0x4)
    int32 MinimumZurgCountCloseToTargetToAttack;                                      // 0x00EC (size: 0x4)
    float MinimalSwarmAttackDistance;                                                 // 0x00F0 (size: 0x4)
    float MaximumJumpAttackDistance;                                                  // 0x00F4 (size: 0x4)
    float MaximumHeightAttackDistance;                                                // 0x00F8 (size: 0x4)
    float AttackFuzzyDelay;                                                           // 0x00FC (size: 0x4)
    FVector2D AttackJumpArc;                                                          // 0x0100 (size: 0x8)
    float KamikazePercentage;                                                         // 0x0108 (size: 0x4)
    float DamageToApplyPerSecond;                                                     // 0x010C (size: 0x4)
    float TimeToKillCatInSecond;                                                      // 0x0110 (size: 0x4)
    float StruggleGaugeSize;                                                          // 0x0114 (size: 0x4)
    float SpeedModifier;                                                              // 0x0118 (size: 0x4)
    bool AttachOnCatWhenHit;                                                          // 0x011C (size: 0x1)
    float DistanceToAttachOnCat;                                                      // 0x0120 (size: 0x4)
    float VisionOffset;                                                               // 0x0124 (size: 0x4)
    float VisionUpperHeight;                                                          // 0x0128 (size: 0x4)
    float VisionLowerHeight;                                                          // 0x012C (size: 0x4)
    float StatePropagationTime;                                                       // 0x0130 (size: 0x4)
    float AngryToRoutineWaitTime;                                                     // 0x0134 (size: 0x4)
    float AlertedToChasingWaitTime;                                                   // 0x0138 (size: 0x4)
    float AlertedWhileSleepingToChasingWaitTime;                                      // 0x013C (size: 0x4)
    float ProximityDetectionRadius;                                                   // 0x0140 (size: 0x4)
    float UnderLightWakeUpTime;                                                       // 0x0144 (size: 0x4)

}; // Size: 0x148

class AZurgPawn : public ACharacter
{
    class UZurgSettings* ZurgSettings;                                                // 0x04B8 (size: 0x8)

    void OnDetachedFromCat(class ACatPawn* _catPawn, class USceneComponent* _attachedComponent, FName _socketName);
    void OnAttachedToCat(class ACatPawn* _catPawn, class USceneComponent* _attachedComponent, FName _socketName);
    bool CanGrabCat();
}; // Size: 0x4C0

struct FSpawningRequest
{
    int32 SpawnCount;                                                                 // 0x0000 (size: 0x4)
    float TimeInterval;                                                               // 0x0004 (size: 0x4)
    float Duration;                                                                   // 0x0008 (size: 0x4)
    float BeginTime;                                                                  // 0x000C (size: 0x4)
    int32 ID;                                                                         // 0x0010 (size: 0x4)

}; // Size: 0x14

class AZurgPawnLeader : public APawn
{
    class UZurgNewSettings* SwarmSettings;                                            // 0x0288 (size: 0x8)
    FZurgPawnLeaderOnZurgLeaderActivated OnZurgLeaderActivated;                       // 0x0290 (size: 0x10)
    void ZurgLeaderEventDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgPawnLeaderOnZurgLeaderDeactivated OnZurgLeaderDeactivated;                   // 0x02A0 (size: 0x10)
    void ZurgLeaderEventDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgPawnLeaderOnZurgSlaveSpawned OnZurgSlaveSpawned;                             // 0x02B0 (size: 0x10)
    void ZurgLeaderSlaveEventDelegate(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    FZurgPawnLeaderOnZurgSlaveDestroyed OnZurgSlaveDestroyed;                         // 0x02C0 (size: 0x10)
    void ZurgLeaderSlaveEventDelegate(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    FZurgPawnLeaderOnZurgSlaveKilled OnZurgSlaveKilled;                               // 0x02D0 (size: 0x10)
    void ZurgLeaderSlaveOnKilledEventDelegate(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave, class AActor* _killer);
    TSubclassOf<class AZurgPawnSlave> m_slaveClass;                                   // 0x02E0 (size: 0x8)
    EZurgState m_initialSwarmState;                                                   // 0x02E8 (size: 0x1)
    int32 m_zurgSpawnCount;                                                           // 0x02EC (size: 0x4)
    class AZurgSpawningBox* m_spawningBox;                                            // 0x02F0 (size: 0x8)
    float m_spawningRadius;                                                           // 0x02F8 (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> m_movementQueryFilterClass;             // 0x0300 (size: 0x8)
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;                              // 0x0308 (size: 0x1)
    class UNoisableComponent* m_noisableComponent;                                    // 0x0310 (size: 0x8)
    class UBoxComponent* m_damagableDetector;                                         // 0x0318 (size: 0x8)
    class ULightableComponent* m_lightableComponent;                                  // 0x0320 (size: 0x8)
    bool m_isAlreadySpawned;                                                          // 0x0328 (size: 0x1)
    int32 m_slaveLeftBeforeSave;                                                      // 0x032C (size: 0x4)
    class UStreamingComponent* m_streamingComponent;                                  // 0x0330 (size: 0x8)
    class ACatPawn* m_cachedPlayerCatPawn;                                            // 0x0338 (size: 0x8)
    bool m_canBeManaged;                                                              // 0x0341 (size: 0x1)
    TArray<FSpawningRequest> m_spawningRequests;                                      // 0x0348 (size: 0x10)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0370 (size: 0x8)
    EZurgState m_currentState;                                                        // 0x0378 (size: 0x1)
    EZurgState m_beforeIdleState;                                                     // 0x0379 (size: 0x1)
    EZurgLOD m_currentLOD;                                                            // 0x037A (size: 0x1)
    FVector m_swarmCenter;                                                            // 0x0388 (size: 0xC)
    TArray<class AZurgPawnSlave*> m_zurgSlaves;                                       // 0x03D0 (size: 0x10)
    TMap<AActor*, int32> m_actorToView;                                               // 0x03F0 (size: 0x50)
    TArray<class AActor*> m_visibleActors;                                            // 0x0440 (size: 0x10)
    TArray<class AActor*> m_visionOverlappingActors;                                  // 0x0450 (size: 0x10)
    class USaveComponent* m_saveComponent;                                            // 0x0470 (size: 0x8)
    bool m_drawDebug;                                                                 // 0x0478 (size: 0x1)

    void ZurgLeaderSlaveOnKilledEventDelegate__DelegateSignature(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave, class AActor* _killer);
    void ZurgLeaderSlaveEventDelegate__DelegateSignature(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    void ZurgLeaderEventDelegate__DelegateSignature(class AZurgPawnLeader* _zurgLeader);
    void StopSwarm();
    void State_Sleeping_Tick(float _dt);
    void State_Sleeping_Exit();
    void State_Sleeping_Enter();
    void State_Routine_Tick(float _dt);
    void State_Routine_Exit();
    void State_Routine_Enter();
    void State_LockedOnTarget_Tick(float _dt);
    void State_LockedOnTarget_Exit();
    void State_LockedOnTarget_Enter();
    void State_Idle_Tick(float _dt);
    void State_Idle_Exit();
    void State_Idle_Enter();
    void State_Chasing_Tick(float _dt);
    void State_Chasing_Exit();
    void State_Chasing_Enter();
    void State_Angry_Tick(float _dt);
    void State_Angry_Exit();
    void State_Angry_Enter();
    void State_Alerted_Tick(float _dt);
    void State_Alerted_Exit();
    void State_Alerted_Enter();
    void SpawnSlaves(float _duration, int32 _count);
    class AZurgPawnSlave* SpawnSlave(float _nearRadius, TSubclassOf<class AZurgPawnSlave> _zurgClass, FVector _spawnLocation);
    void SetZurgLOD(EZurgLOD _newZurgLod);
    void SetSwarmCanSee(bool _canSee);
    void SetSwarmCanHearSound(bool _canHearSound);
    void SetState(EZurgState _newState);
    void SetActive(bool _active);
    void RemoveSlave(class AZurgPawnSlave* _slave);
    int32 PushSpawningRequest(int32 _spawnCount, float _duration);
    bool PopSpawningRequest(int32 _id);
    void OnVisionColliderEnterOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnVisionColliderEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnSwarmStopSeeSomething(class AActor* _actor);
    void OnSwarmSeeSomething(class AZurgPawnSlave* _zurgDetector, class AActor* _actor);
    void OnStreamedOut(class UStreamingComponent* _streamingComponent);
    void OnStreamedIn(class UStreamingComponent* _streamingComponent);
    void OnStateChanged(EZurgState _newState);
    void OnSlaveKilled(class AZurgPawnSlave* _slave, class AActor* _killer);
    void OnSlaveExitLight(class UAntiZurgSpotlightComponent* _light, class AZurgPawnSlave* _zurgPawn);
    void OnSlaveEnterLight(class UAntiZurgSpotlightComponent* _light, class AZurgPawnSlave* _zurgPawn);
    void OnSlaveDestroyed(class AActor* _slaveDestroyed);
    void OnHearedNoise(class UNoisableComponent* _noiseComponent, FVector _location, class AActor* _emitter);
    void OnDisplayDebug(class UCanvas* _canvas);
    void OnDamagableDetectorEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDamagableDetectorBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    bool MoveSwarmToBox(class UBoxComponent* _boxComponent);
    bool MoveSwarmTo(FVector _newLocation, float _randomRadius);
    void Lod_2_Tick(float _dt);
    void Lod_2_Exit();
    void Lod_2_Enter();
    void Lod_1_Tick(float _dt);
    void Lod_1_Exit();
    void Lod_1_Enter();
    void Lod_0_Tick(float _dt);
    void Lod_0_Exit();
    void Lod_0_Enter();
    bool IsDisplayingDebug();
    bool IsActive();
    class AZurgManager* GetZurgManager();
    TArray<class AActor*> GetVisibleActors();
    float GetSwarmVisionDistance();
    float GetSwarmRadius();
    FVector GetSwarmCenter();
    EZurgState GetState();
    int32 GetSpawnedSlaveCount();
    TArray<class AZurgPawnSlave*> GetSlavesAbleToAttack();
    TArray<class AZurgPawnSlave*> GetSlaves();
    int32 GetSlaveCount();
    FVector GetReachableMoveToLocation();
    FVector GetObserverLocation();
    class ARecastNavMesh* GetNavMesh();
    TSubclassOf<class UNavigationQueryFilter> GetNavigationQueryFilter();
    FTransform GetInitialTransform();
    EZurgLOD GetCurrentZurgLOD();
    int32 GetConnectedSlaveCount();
    class AZurgPawnSlave* GetClosestSlaveFromLocation(const TArray<class AZurgPawnSlave*> _slaves, FVector _location, float _radius);
    void FindZurgsCloseFromThisLocation(TArray<class AZurgPawnSlave*>& _closestSlave, FVector _location, float _distance);
    int32 FindZurgCountCloseFromThisLocation(FVector _location, float _distance);
    void FindSlavesInSpecificState(TArray<class AZurgPawnSlave*>& _slaves, EZurgState _state);
    void Deactivated_Tick(float _dt);
    void Deactivated_Exit();
    void Deactivated_Enter();
    bool CanSwarmSee();
    bool CanSwarmHearSound();
    void CancelSpawningRequests();
    void BlueprintOnStreamOut();
    void BlueprintOnStreamIn();
    void AddSlave(class AZurgPawnSlave* _newSlave);
    void Activated_Tick(float _dt);
    void Activated_Exit();
    void Activated_Enter();
    void _EditorTick(float _deltaTime);
    void _BeforeSaved(class USaveComponent* _saveComponent);
    void _AfterLoaded(class USaveComponent* _saveComponent);
}; // Size: 0x480

class AZurgPawnSlave : public ACharacter
{
    FZurgPawnSlaveOnKilledDelegate OnKilledDelegate;                                  // 0x04B8 (size: 0x10)
    void ZurgOnKilledDelegate(class AZurgPawnSlave* _zurgPawn, class AActor* _killer);
    FZurgPawnSlaveOnZurgExitGrabbing OnZurgExitGrabbing;                              // 0x04C8 (size: 0x10)
    void ZurgExitGrabbingDelegate(class AZurgPawnSlave* _zurgPawn);
    class ULifeComponent* m_lifeComponent;                                            // 0x04D8 (size: 0x8)
    class USphereComponent* m_damagableSphereDetector;                                // 0x04E0 (size: 0x8)
    class UDamagableLightableComponent* m_damagableLightableComponent;                // 0x04E8 (size: 0x8)
    TSubclassOf<class AActor> m_deathFxActorClass;                                    // 0x04F0 (size: 0x8)
    float m_minimalLightIntensityToAvoid;                                             // 0x04F8 (size: 0x4)
    float m_maxAccelerationTarget;                                                    // 0x04FC (size: 0x4)
    float m_maxWalkSpeedTarget;                                                       // 0x0500 (size: 0x4)
    class UZurgNewSettings* m_currentZurgSettings;                                    // 0x0508 (size: 0x8)
    class UHierarchicalStateMachine* m_stateMachine;                                  // 0x0518 (size: 0x8)
    TSubclassOf<class UNavigationQueryFilter> m_movementQueryFilterClass;             // 0x0568 (size: 0x8)
    class UZurgCharacterMovementComponent* m_zurgMovementComponent;                   // 0x0570 (size: 0x8)
    FVector m_currentMoveToLocation;                                                  // 0x05B0 (size: 0xC)
    class USphereComponent* m_proximitySphereDetector;                                // 0x05F0 (size: 0x8)
    class USphereComponent* m_attachOnActorSphereCollider;                            // 0x0608 (size: 0x8)

    void ZurgOnKilledDelegate__DelegateSignature(class AZurgPawnSlave* _zurgPawn, class AActor* _killer);
    void ZurgExitGrabbingDelegate__DelegateSignature(class AZurgPawnSlave* _zurgPawn);
    void StopMovement();
    void State_UnStunned_Exit();
    void State_UnStunned_Enter();
    void State_UnderLight_Tick(float _dt);
    void State_UnderLight_Exit();
    void State_UnderLight_Enter();
    void State_Stunned_Tick(float _dt);
    void State_Stunned_Exit();
    void State_Stunned_Enter();
    void State_Sleeping_Tick(float _dt);
    void State_Sleeping_Exit();
    void State_Sleeping_Enter();
    void State_Routine_Tick(float _dt);
    void State_Routine_Exit();
    void State_Routine_Enter();
    void State_OnInterestPoint_Tick(float _dt);
    void State_OnInterestPoint_Exit();
    void State_OnInterestPoint_Enter();
    void State_LockedOnTarget_Tick(float _dt);
    void State_LockedOnTarget_Exit();
    void State_LockedOnTarget_Enter();
    void State_Interested_Tick(float _dt);
    void State_Interested_Exit();
    void State_Interested_Enter();
    void State_Idle_Tick(float _dt);
    void State_Idle_Exit();
    void State_Idle_Enter();
    void State_Grabbing_Tick(float _dt);
    void State_Grabbing_Exit();
    void State_Grabbing_Enter();
    void State_Falling_Tick(float _dt);
    void State_Falling_Exit();
    void State_Falling_Enter();
    void State_Ejected_Tick(float _dt);
    void State_Ejected_Exit();
    void State_Ejected_Enter();
    void State_Chasing_Tick(float _dt);
    void State_Chasing_Exit();
    void State_Chasing_Enter();
    void State_Attacking_Tick(float _dt);
    void State_Attacking_Exit();
    void State_Attacking_Enter();
    void State_Angry_Tick(float _dt);
    void State_Angry_Exit();
    void State_Angry_Enter();
    void State_Alerted_Tick(float _dt);
    void State_Alerted_Exit();
    void State_Alerted_Enter();
    void SetZurgSettings(class UZurgNewSettings* _newZurgSettings);
    void SetStunned(bool _stun);
    void SetStateDelayed(EZurgState _newState, float _fuzzyDelay);
    void SetState(EZurgState _newState);
    void SetLife(int32 _newLife);
    bool SetLeaderZurgSettings();
    void SetLeader(class AZurgPawnLeader* _newLeader);
    void SetKamikaze(bool _isKamikaze);
    void SetConnectedToLeader(bool _connected);
    void SetCanSenseProximity(bool _enableProximitySense);
    void SetCanGrab(bool _canGrab);
    void SetCanAttack(bool _canAttack);
    void SetBehavior(EZurgBehavior _newBehavior);
    void RequestLeaderConnection();
    void OnZurgSettingsChanged(class UZurgNewSettings* _newZurgSettings);
    void OnZurgLostLeader();
    void OnZurgFoundLeader(class AZurgPawnLeader* _leader);
    void OnStateChanged(EZurgState _newState);
    void OnProximityExitDetection(class AActor* _detectedActor);
    void OnProximityEnterDetection(class AActor* _detectedActor);
    void OnExitSpotLight(class ULightableComponent* _lightable, class UAntiZurgSpotlightComponent* _spotlight);
    void OnEnterInSpotLight(class ULightableComponent* _lightable, class UAntiZurgSpotlightComponent* _spotlight);
    void OnEnlightenEnd(class ULightableComponent* _lightable, class UAntiZurgSpotlightComponent* _spotlight);
    void OnEnlightenBegin(class ULightableComponent* _lightable, class UAntiZurgSpotlightComponent* _spotlight);
    void OnDisplayDebug(class UCanvas* _canvas);
    void OnDetachedFromCat(class ACatPawn* _catPawn, class USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    void OnDetachedFromAttackPoint(class UZurgAttackPointComponent* _zurgAttackPoint);
    void OnAttackPoint(FVector _pointToAttack);
    void OnAttack(class AActor* _actorToAttack);
    void OnAttachOnAttackPoint(class UZurgAttackPointComponent* _zurgAttackPoint);
    void OnAttachOnActorColliderEndOverlap(class AActor* _otherActor);
    void OnAttachOnActorColliderBeginOverlap(class AActor* _otherActor);
    void OnAttachedOnCat(class ACatPawn* _catPawn, class USkeletalMeshComponent* _catSkeletalMesh, FName _socketName);
    void MoveToAtPreciseFrame(int32 _moveAtThisFrame, FVector _newLocation, float _randomRadius, float _acceptanceRadius);
    bool MoveTo(FVector _newLocation, float _randomRadius, float _acceptanceRadius);
    void Lod_2_Exit();
    void Lod_2_Enter();
    void Lod_1_Exit();
    void Lod_1_Enter();
    void Lod_0_Exit();
    void Lod_0_Enter();
    bool IsWalking();
    bool IsUnderAntiZurgSpotlight();
    bool IsStunned();
    bool IsSlaveValid(const class AZurgPawnSlave* _slave);
    bool IsKamikaze();
    bool IsConnectedToLeader();
    bool IsAttacking();
    bool IsActive();
    EZurgState GetState();
    class ARecastNavMesh* GetNavMesh();
    class ULifeComponent* GetLifeComponent();
    class AZurgPawnLeader* GetLeader();
    class UZurgNewSettings* GetCurrentZurgSettings();
    FVector GetCurrentMoveToLocation();
    EZurgBehavior GetBehavior();
    void DestroySlave();
    void Deactivated_Exit();
    void Deactivated_Enter();
    bool CanSenseProximity();
    bool CanMove();
    bool CanGrab();
    bool CanAttack();
    void Behavior_None_Exit();
    void Behavior_None_Enter();
    void Behavior_Escaping_Tick(float _dt);
    void Behavior_Escaping_Exit();
    void Behavior_Escaping_Enter();
    bool AttackPoint(FVector _pointToAttack);
    FVector Attack(class AActor* _actorToAttack);
    bool ApplyDamage(class AActor* _damageApplier, float _damageAmount);
    void Activated_Exit();
    void Activated_Enter();
    void _OnTakeDamage(class ULifeComponent* _lifeComponent, class AActor* _damageApplier, float _damageAmount);
    void _OnProximityColliderEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void _OnProximityColliderBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void _OnLifeRegeneration(class ULifeComponent* _lifeComponent, float _life);
    void _OnKilled(class ULifeComponent* _lifeComponent, class AActor* _killer);
    void _OnAttachOnActorColliderEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void _OnAttachOnActorColliderBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x640

class UZurgSettings : public UPrimaryDataAsset
{
    float NormalSpeed;                                                                // 0x0030 (size: 0x4)
    float MinAttackSpeed;                                                             // 0x0034 (size: 0x4)
    float MaxAttackSpeed;                                                             // 0x0038 (size: 0x4)
    float MinAttackSpeedDistance;                                                     // 0x003C (size: 0x4)
    float MaxAttackSpeedDistance;                                                     // 0x0040 (size: 0x4)
    float JumpRange;                                                                  // 0x0044 (size: 0x4)
    float JumpAnticipationRatio;                                                      // 0x0048 (size: 0x4)
    float DelayBeforeJump;                                                            // 0x004C (size: 0x4)
    float DelayBeforeJumpRandomRange;                                                 // 0x0050 (size: 0x4)
    float DelayBetweenJumps;                                                          // 0x0054 (size: 0x4)
    float JumpArcRatio;                                                               // 0x0058 (size: 0x4)
    float JumpArrivalRandomZoneRadius;                                                // 0x005C (size: 0x4)
    float EjectDistance;                                                              // 0x0060 (size: 0x4)
    float EjectDistanceRandomRange;                                                   // 0x0064 (size: 0x4)
    float EjectStunTime;                                                              // 0x0068 (size: 0x4)
    float SightRadius;                                                                // 0x006C (size: 0x4)
    float VisionConeAngleInDegrees;                                                   // 0x0070 (size: 0x4)
    float SureVisionConeAngleInDegrees;                                               // 0x0074 (size: 0x4)
    float MinRatioToLoseSight;                                                        // 0x0078 (size: 0x4)
    float JumpPerceptionHeightLimit;                                                  // 0x007C (size: 0x4)
    float CloseEncounterRadius;                                                       // 0x0080 (size: 0x4)
    float StruggleGaugeSize;                                                          // 0x0084 (size: 0x4)
    float LifeDecayPerSecond;                                                         // 0x0088 (size: 0x4)
    float SpeedModifier;                                                              // 0x008C (size: 0x4)
    float AlertsSize;                                                                 // 0x0090 (size: 0x4)
    float AlertsGrowingTime;                                                          // 0x0094 (size: 0x4)
    float AlertsSustainTime;                                                          // 0x0098 (size: 0x4)
    float MinDistanceBetweenAlerts;                                                   // 0x009C (size: 0x4)
    float TimeToBeSure;                                                               // 0x00A0 (size: 0x4)
    float TimeToBeSureRandomRange;                                                    // 0x00A4 (size: 0x4)
    float SureIntroductionStateDuration;                                              // 0x00A8 (size: 0x4)
    float SureIntroductionStateDurationRandomRange;                                   // 0x00AC (size: 0x4)
    float SearchDuration;                                                             // 0x00B0 (size: 0x4)
    float SearchDurationRandomRange;                                                  // 0x00B4 (size: 0x4)
    float TimeBetweenDirectionChange;                                                 // 0x00B8 (size: 0x4)
    float TimeBetweenDirectionChangeRandomRange;                                      // 0x00BC (size: 0x4)
    bool PlayIntroductionOnRedetect;                                                  // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class AZurgSpawningBox : public AActor
{
    float m_spawnVelocity;                                                            // 0x0228 (size: 0x4)
    bool m_drawDebug;                                                                 // 0x022C (size: 0x1)
    class USceneComponent* m_rootComponent;                                           // 0x0230 (size: 0x8)
    class UBoxComponent* m_spawningBoxComponent;                                      // 0x0238 (size: 0x8)
    class UArrowComponent* m_spawningVelocityDirectionArrowComponent;                 // 0x0240 (size: 0x8)
    class UEditorTickComponent* m_editorTickComponent;                                // 0x0248 (size: 0x8)

    FVector GetSuggestedSpawnVelocity();
    FVector GetRandomPointInBox();
    void _EditorTick(float _deltaTime);
}; // Size: 0x250

struct FPendingInteraction
{
    class UBackpackUsableComponent* Usable;                                           // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FInteractionDebugData
{
    class UPrimitiveComponent* RaycastFailReason;                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCameraCollisionData
{
}; // Size: 0x18

struct FCatPawnTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FCatPawnPostMovementTickFunction : public FCatPawnTickFunction
{
}; // Size: 0x30

struct FCatPawnPostAnimationTickFunction : public FCatPawnTickFunction
{
}; // Size: 0x30

struct FCatPawnPreAnimationTickFunction : public FCatPawnTickFunction
{
}; // Size: 0x30

struct FCatPawnPreInputTickFunction : public FCatPawnTickFunction
{
}; // Size: 0x30

struct FSequenceState
{
    class ASequence* Sequence;                                                        // 0x0000 (size: 0x8)
    FName CheckpointName;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDialogEvent
{
}; // Size: 0xC

struct FGroundProbeOrthoDistanceField
{
}; // Size: 0xD0

struct FHKPlayerControllerPostUpdateTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FReferenceSpeed
{
    FName SpeedName;                                                                  // 0x0000 (size: 0x8)
    class UAnimSequence* Animation;                                                   // 0x0008 (size: 0x8)
    float Speed;                                                                      // 0x0010 (size: 0x4)
    FTransform BeginMotion;                                                           // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FSlaveGroup
{
    TArray<class AZurgPawnSlave*> Slaves;                                             // 0x0000 (size: 0x10)
    int32 groupId;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FMoveToFrameOrder
{
}; // Size: 0x18

#endif
