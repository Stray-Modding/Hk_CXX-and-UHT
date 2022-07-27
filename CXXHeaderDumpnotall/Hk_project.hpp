#ifndef UE4SS_SDK_Hk_project_HPP
#define UE4SS_SDK_Hk_project_HPP

#include "Hk_project_enums.hpp"

class UHKSubsystemSettings : public UObject
{
};

class UAchievementSettings : public UHKSubsystemSettings
{
    uint32 MeowTarget;
    uint32 jumpTarget;
    uint32 SleepTargetMinutes;
    uint32 BasketballsDunkedTarget;
    uint32 ZurgPursuitCompletedWithoutTouchTarget;
    uint32 SentinelPatternCompletedWithoutDetectionTarget;
    uint32 DeathTarget;
    uint32 ClubVinylScratchedTarget;
    uint32 SewersCompletedWithoutKillTarget;
    uint32 GameCompleteTargetMinutes;
    uint32 AAKingMusicSheetsTarget;
    uint32 PaperBagWornTarget;
    uint32 TriedToPlayMahjongTarget;
    uint32 RobotsRubbedAgainstTarget;
    uint32 TVChannelsWatchedTarget;
    uint32 CollectedBadgesTarget;

};

class UHKGameSubsystem : public UGameInstanceSubsystem
{
    class UHKSubsystemSettings* m_settings;

};

class UAchievementSubsystem : public UHKGameSubsystem
{
};

struct FActivity
{
    EActivity ID;
    EChapter Chapter;
    TArray<EObjective> Objectives;

};

class UActivityData : public UPrimaryDataAsset
{
    TArray<FActivity> Activities;

};

class UActivitySettings : public UHKSubsystemSettings
{
    class UActivityData* ActivityData;

};

class UActivitySubsystem : public UHKGameSubsystem
{

    void SetObjectiveRevealed(EObjective _id);
    void SetObjectiveComplete(EObjective _id);
    void _OnChapterChanged(class UChapterSubsystem* _chapterSubsystem, EChapter _previousChapter, EChapter _currentChapter, bool _isOpeningChapter);
};

class UActorIdComponent : public UActorComponent
{
    FName m_id;

};

class AActorIdManager : public AManager
{

    class AActor* FindActorById(FName _actorId, class AActor* _callingActor);
};

class UAnimNotify_SoundEvent : public UAnimNotify
{
    FName EventName;
    float Velocity;

    void SetVelocity(float _velocity);
    void SetEventName(FName _eventName);
};

class UAntiZurgLightableComponent : public USphereComponent
{
    class AZurgManager* m_zurgManager;
    class ULifeComponent* m_ownerLifeComponent;

};

class UAntiZurgSpotlightComponent : public USpotLightComponent
{
    bool m_canRepulseZurgs;
    bool m_useDynamicObstacle;
    bool m_applyDamage;
    float m_damageToApplyPerDelay;
    float m_damageApplicationDelayInSecond;
    bool m_drawDebug;
    TSubclassOf<class UNavAreaBase> m_obstacleNavigationArea;
    bool m_traceEveryFrame;
    TEnumAsByte<ECollisionChannel> m_lightTraceChannel;
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    TEnumAsByte<ECollisionChannel> m_obstacleSphereOverlappChannel;
    class USphereComponent* m_obstacleSphereComponent;
    class UCurveFloat* m_radialDamageCurve;
    class UCurveFloat* m_distanceDamageCurve;

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
};

class UAntiZurgZoneComponent : public USphereComponent
{
    TSubclassOf<class UNavAreaBase> m_navArea;

    void SetSpotlightOwner(class UAntiZurgSpotlightComponent* _newSpotlight);
    class UAntiZurgSpotlightComponent* GetSpotLightOwner();
    void _OnSphereEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void _OnSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class UAudioHolder : public USceneComponent
{
    int32 AudioComponentCount;
    float MovementSnappingDistance;
    TArray<class UAudioComponent*> m_audioComponents;
    class APlayerCameraManager* m_cameraManager;

    void SetHolderCollisionRadius(float _radius);
    void SetHolderCollisionEnabled(bool _enabled);
    void OnHolderEndOverlapCamera(class AActor* _otherActor);
    void OnHolderBeginOverlapCamera(class AActor* _otherActor);
    bool IsHolderCollisionEnabled();
    class UAudioComponent* GetHolderAudio(uint8 _index);
};

class AAudioManager : public AManager
{
    int32 m_maxAudioHolderTicksPerFrame;

};

class UHKUserWidget : public UUserWidget
{
};

class UAudioSettingsWidget : public UHKUserWidget
{
    class USliderBoxWidget* MasterVolumeSliderBox;
    class USliderBoxWidget* MusicVolumeSliderBox;
    class USliderBoxWidget* EffectsVolumeSliderBox;
    class UHKButton* BackButton;
    class UHKButton* DefaultsButton;
    class UHKButton* TabLeftButton;
    class UHKButton* TabRightButton;
    class UHKTextBlock* SwitchTabTextBlock;
    FText m_resetToDefaultsDialogText;

};

struct FB12MemoryData
{
    FName ID;
    FText Description;
    class UTexture2D* LockedIcon;
    class UTexture2D* UnlockedIcon;
    TSubclassOf<class AActor> UnlockedActor;
    class UTexture2D* LockedBackground;
    class UTexture2D* Background;
    TSubclassOf<class ADialog> Dialog;

};

class UB12Memories : public UPrimaryDataAsset
{
    TArray<FB12MemoryData> MainMemories;
    TArray<FB12MemoryData> Memories;

    int32 GetMemoryCount();
    void FindMemoryIndex(FName _memoryId, int32& _outMainIndex, int32& _outSideIndex);
    bool FindMemoryData(FName _memoryId, FB12MemoryData& _outMemoryData);
};

struct FBackpackScreenEntry
{
    TSubclassOf<class UBackpackScreenUserWidget> Class;

};

struct FDialogLineSynchronizedActor
{
    class AActor* Actor;
    TArray<class UAnimSequence*> ActorAnimations;

};

struct FDialogLineSynchronized
{
    TArray<class UAnimSequence*> Animations;
    TArray<FDialogLineSynchronizedActor> ActorsSynchronizedAnimations;
    bool KeepLastAnimAsIdle;

};

struct FDialogLineAdvanced
{
    class UAnimSequence* Animation;
    FDialogLineSynchronized Synchronized;
    bool IsSynchronized;
    bool LoopAnimation;
    class UMaterialInstance* ScreenMaterial;
    TEnumAsByte<EDialogOrientationMode> LookAtMode;
    class AActor* LookAtActor;
    TEnumAsByte<EDialogOrientationMode> TurnTowardsMode;
    class AActor* TurnTowardsActor;
    class AActor* ShowDirectionActor;
    class AActor* DroneTargetTransform;

};

struct FDialogLine
{
    FText Text;
    bool EndDialog;
    TSubclassOf<class AActor> ItemToGive;
    FName MemoryToShow;
    FDialogLineAdvanced Advanced;

};

class ABackpack : public AActor
{
    FBackpackPendingDialogBegan PendingDialogBegan;
    void BackpackAction(class ABackpack* _backpack);
    FBackpackPendingDialogEnded PendingDialogEnded;
    void BackpackAction(class ABackpack* _backpack);
    FBackpackDialogBegan DialogBegan;
    void DialogAction(class ABackpack* _backpack, class ADialog* _dialog);
    FBackpackDialogLineBegan DialogLineBegan;
    void DialogAction(class ABackpack* _backpack, class ADialog* _dialog);
    FBackpackDialogEnded DialogEnded;
    void DialogAction(class ABackpack* _backpack, class ADialog* _dialog);
    FBackpackAddedObjectToInventory AddedObjectToInventory;
    void LootAction(class ABackpack* _backpack, class ULootableComponent* _loot);
    FBackpackRemovedObjectFromInventory RemovedObjectFromInventory;
    void LootAction(class ABackpack* _backpack, class ULootableComponent* _loot);
    FBackpackEmptyInteractionTriggered EmptyInteractionTriggered;
    void BackpackAction(class ABackpack* _backpack);
    FBackpackUseStarted UseStarted;
    void UseAction(class ABackpack* _backpack, class UBackpackUsableComponent* _loot);
    FBackpackUseEnded UseEnded;
    void UseAction(class ABackpack* _backpack, class UBackpackUsableComponent* _loot);
    FBackpackDroneSet DroneSet;
    void BackpackDroneAction(class ABackpack* _backpack, class ADrone* _drone);
    FBackpackDroneUnset DroneUnset;
    void BackpackDroneAction(class ABackpack* _backpack, class ADrone* _drone);
    class USkeletalMeshComponent* m_mesh;
    class UWidgetComponent* m_screenWidgetComponent;
    class UTalkableComponent* m_talkable;
    class ACatPawn* m_catPawn;
    class ADrone* M_Drone;
    class ABackpackGUI* m_GUI;
    class UPrimitiveComponent* m_interactionCollider;
    bool m_isBackpackMeshVisible;
    class UHierarchicalStateMachine* m_stateMachine;
    TEnumAsByte<ECollisionChannel> m_interactCollisionChannel;
    TSubclassOf<class AIEM> m_IEMClass;
    class ADialog* m_currentDialog;
    float m_pendingDialogRingTime;
    float m_interactionDetectionLossTime;
    uint8 m_B12HelpDisabledCount;
    uint8 m_showItemToB12DisabledCount;
    uint8 m_exitDialogDisabledCount;
    TArray<class ULootableComponent*> m_inventory;
    TArray<class TSubclassOf<AActor>> m_savedInventory;
    uint16 m_disableInventoryMenu;
    TArray<class UPhoto*> m_photos;
    class AHKHUD* m_HUD;
    TArray<FBackpackScreenEntry> m_backpackScreenStack;
    TSubclassOf<class UBackpackScreenUserWidget> m_defaultBackpackScreenWidgetClass;
    TSubclassOf<class UBackpackScreenUserWidget> m_IEMBackpackScreenWidgetClass;
    TSubclassOf<class UBackpackScreenUserWidget> m_notificationScreenWidgetClass;
    TSubclassOf<class UBackpackScreenUserWidget> m_usableBackpackScreenWidgetClass;
    TSubclassOf<class UBackpackScreenUserWidget> m_talkableBackpackScreenWidgetClass;
    class USoundBase* m_defaultStartInteractionSound;

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
};

class ABackpackGUI : public AActor
{
    float m_GUIInputDeadZone;

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
};

class UBackpackScreenUserWidget : public UUserWidget
{

    void OnBackpackSet();
    class ABackpack* GetBackpack();
};

class UCatUsableComponentBase : public UBoxComponent
{
    FCatUsableComponentBaseUseStarted UseStarted;
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    FCatUsableComponentBaseBeforeUseDone BeforeUseDone;
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    FCatUsableComponentBaseAfterUseDone AfterUseDone;
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    FText m_useTextFormat;
    FText m_displayedName;
    float m_interactRange;
    float m_visibleRange;
    bool m_startEnabled;
    bool m_disableShoulderCamera;
    class USoundBase* m_startInteractionSound;
    class ACatPawn* m_usingCat;
    class ACatPawn* m_focusingCat;
    bool m_isEnabled;
    bool m_isUseEnabled;
    bool m_isSelectable;

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
};

class UBackpackUsableComponent : public UCatUsableComponentBase
{
    float m_usageCooldownTime;
    bool m_deactivateCatInteractions;
    TSubclassOf<class UBackpackScreenUserWidget> m_backpackScreenWidgetClass;
    bool m_blockCatDuringUse;

    void SetVisualBox(class UBoxComponent* _visualBox);
    class UBoxComponent* GetVisualBox();
    class ABackpack* GetUsingBackpack();
    FTransform GetSelectionBoxTransform();
};

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
};

class UBindingIconWidget : public UUserWidget
{

    void SetSize(float _size);
    void SetBindingName(const FName& _bindingName);
};

struct FStatGroupBudget
{
    FName Name;
    float Budget;

};

class ABudgetManager : public AManager
{
    uint64 PhysicalMemoryBudget;
    TArray<FStatGroupBudget> m_statGroupBudgets;
    bool m_isProfilingEnabled;
    int32 m_samplesCount;
    float m_warningPercentage;

    void SetProfilingEnabled(bool _enabled);
    bool IsProfilingEnabled();
    FString DumpBudgets();
};

class UCameraTargetComponent : public USphereComponent
{
    float Influence;
    bool EnableCameraBackwardsMovement;
    bool ActivateOnView;
    float ViewXMinimum;
    float ViewYMinimum;
    float ViewXMaximum;
    float ViewYMaximum;
    bool UseTarget;
    FVector TargetLocation;
    bool EnableDistanceOffset;
    float DistanceMax;
    bool EnableOnDirection;
    bool m_enabled;
    float m_influenceCoreRadius;
    bool m_isKillZoneEnabled;
    float m_killZoneRadius;
    float m_maximumDirectionErrorTolerance;
    float m_minimumDirectionErrorTolerance;
    class UCurveFloat* m_influenceResponse_Curve;

    void SetKillZoneEnable(bool _enable);
    void SetKilled(bool _killed);
    void SetEnabled(bool _enabled);
    bool IsKilled();
    bool IsEnabled();
    float GetCameraDistanceOffset(class UCameraComponent* _camera, float _xScreenLimit, float _yScreenLimit, float _cameraDistanceOffsetMultiplier);
    void _OnEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
};

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
};

struct FCameraThirdPersonPreset
{
    bool SmoothEnabled;
    bool SmoothUseSpeed;
    float SmoothTimeTo90Percent;
    bool SmoothOutEnabled;
    bool SmoothOutUseSpeed;
    float SmoothOutTimeTo90Percent;
    bool LookSpeedModifierEnabled;
    float HorizontalLookSpeed;
    float VerticalLookSpeed;
    bool DistanceModifierEnabled;
    float DistanceRatio;
    bool FieldOfViewBaseEnabled;
    float FieldOfViewBase;
    bool FieldOfViewCurveEnabled;
    class UCurveFloat* FieldOfViewCurve;
    bool YawConstraintEnabled;
    float YawConstraintAmplitude;
    FVector YawConstraintDirection;
    bool PitchConstraintEnabled;
    float PitchConstraintMin;
    float PitchConstraintMax;
    bool CameraSplineEnabled;
    bool TargetSplineEnabled;
    TSubclassOf<class ACameraThirdPersonSplinesPreset> Splines;
    bool AbsoluteOffsetEnabled;
    FVector AbsoluteOffset;
    bool AbsoluteOffsetUseMinMaxPitch;
    float AbsoluteOffsetPitchMin;
    float AbsoluteOffsetPitchMax;
    bool CollisionExtrapolationEnabled;
    float MaxCollisionExtrapolationDistance;

};

class ACameraThirdPerson : public AHKCamera
{
    bool m_speedOffsetEnabled;
    float m_speedOffsetInfluence;
    class USceneComponent* m_armRoot;
    class UCameraComponent* m_camera;
    float m_probeRadius;
    TEnumAsByte<ECollisionChannel> m_cameraTraceChannel;
    float m_inputThreshold;
    float m_additionalRaycastDeadDistance;
    float m_forwardDistanceDamping90Time;
    float m_backwardDistanceDamping90Time;
    bool m_useLinearVelocityOnSpline;
    bool m_collisionsAvoidanceEnabled;
    float m_collisionAvoidanceRadius;
    float m_collisionAvoidanceMinSpeed;
    bool m_collisionsAvoidanceExtrapolationEnabled;
    float m_collisionAvoidanceHorizontalExtrapolationTime;
    float m_collisionAvoidanceVerticalExtrapolationTime;
    float m_resetCameraTime;
    float m_resetPitch;
    FRuntimeFloatCurve m_attachLocationSmoothDistanceToSamplingTime;
    int32 m_attachLocationSmoothSampleCount;
    float m_attachLocationJumpCorrectionRatio;
    float m_backCamDelay;
    class UCurveFloat* m_gamepadInputResponseCurve;
    class UCurveFloat* m_mouseInputResponseCurve;
    class UCurveFloat* m_gamepadInputTimeTo90Curve;
    class UCurveFloat* m_mouseInputTimeTo90Curve;
    class UCurveFloat* m_mouseInputPitchRatioInputFactor;
    class UCurveFloat* m_gamePadPitchRatioInputFactor;
    float m_emptyGamepadInputTimeTo90;
    float m_emptyMouseInputTimeTo90;
    bool m_invertVelocityWithStick;
    bool m_yawRealignEnabled;
    class UCurveFloat* m_yawRealignCurve_InputDirectionDot_YawSpeed;
    float m_speedOffsetLengthSmootherForwardTime;
    float m_speedOffsetLengthSmootherBackwardTime;
    float m_speedOffsetDirectionSmootherTime;
    float m_speedOffsetDoubleSmootherTime;
    class UCurveFloat* m_forwardSpeedOffsetPitchResponse;
    class UCurveFloat* m_forwardSpeedOffsetCameraDotResponse;
    FSmootherFloat m_modifierTargetDistanceSmooth;
    FSmootherFloat m_modifierTargetFOVSmooth;
    bool m_dynamicSplineHeightEnabled;
    float m_dynamicSplineHeightMinimum;
    float m_dynamicSplineHeightRecoverBlendTime;
    float m_cameraTargetSmoothTime;
    float m_cameraTargetBlendOutTime;
    float m_cameraTargetDistanceOutMax;
    float m_cameraTargetOtherOffsetsResetTime;
    TSubclassOf<class AActor> m_cameraTargetClass;
    float m_cameraTargetDistanceXBorder;
    float m_cameraTargetDistanceYBorder;
    float m_cameraTargetDistanceOutSpeed;
    float m_cameraTargetDistanceInSpeed;
    float m_cameraTargetInterpolationSpeed;
    bool m_resetCameraOnInput;
    FCameraThirdPersonPreset DefaultPreset;
    float m_dialogResetDistance;
    float m_dialogResetTime;
    float m_dialogResetMinPitch;
    float m_dialogResetMaxPitch;
    bool m_dialogResetPitchUnderMin;
    bool m_dialogResetPitchAboveMax;
    int32 m_dialogResetProbeDistanceToObstacle;
    bool m_editionMode;
    bool m_smoothSplines;
    class USplineComponent* m_cameraSpline;
    class USplineComponent* m_targetSpline;
    float m_raycastTargetSmoothTimeTo90;
    FRuntimeFloatCurve m_raycastTargetDynamicheight;
    bool m_antiWobbleActivated;
    float m_antiWobbleTimeToRelease;
    float m_antiWobbleSensivityToRelease;
    float m_antiWobbleDistanceToRelease;
    float m_antiWobbleCatForwardAngleToRelease;
    float m_antiWobbleCatBackwardAngleToRelease;
    float m_antiWobbleCatSpeedToRelease;
    class UProximityProbeComponent* m_proximityProbeAttachPoint;
    class UProximityProbeComponent* m_proximityProbeCamera;

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
};

class ACameraThirdPersonModifier : public AActor
{
    FCameraThirdPersonPreset m_cameraPreset;
    bool m_enabled;
    float m_priority;
    class ACameraThirdPerson* m_camera;

    void SetEnabled(bool _enabled);
    void OnEnabled();
    void OnDisabled();
    bool IsEnabled();
};

class ACameraThirdPersonSplinesPreset : public AActor
{
    class USplineComponent* m_cameraSpline;
    class USplineComponent* m_targetSpline;

};

class UCatUsableComponent : public UCatUsableComponentBase
{
    bool m_hasInteractionLimitAngle;
    bool m_deactivateBackpackInteractions;
    float m_interactionLimitAngle;
    float m_interactionLimitAngleHysteresis;

    bool CanMeow();
};

class UCartonUsableComponent : public UCatUsableComponent
{
    bool m_useConstraints;
    float m_beginConstraint;
    float m_endConstraint;

    bool IsPointWithinConstraints(FVector _point);
    FVector ConstrainPoint(FVector _point);
    FVector ConstrainDirection(FVector _direction);
};

struct FLookAtAnimationState
{
    FRotator CurrentRotation;
    bool Enable;

};

class UHKAnimInstance : public UAnimInstance
{

    void OnSoundEvent(FName Name, float Velocity);
    FRotator FindLookAtRotator(FLookAtAnimationState& _lookAtState, bool& _enable, bool _lookAtEnable, FVector _lookAtLocation, float _angleLimit, float _hysteresis, int32 _virtualBoneBaseEffector, int32 _virtualBoneEndEffector, bool& _isInSight, float _speed);
};

struct FProbeDirectionData
{
    int32 Index;
    TArray<FVector> SurfaceVertices;
    FPlane LimitPlane;
    float DistanceToPlane;
    FVector Direction;
    float Angle;
    bool IsObstacle;
    bool IsGap;
    bool IsValid;

};

struct FGroundProbeSegmentData
{
    FVector Normal;
    int32 Type;

};

struct FGroundProbeData
{
    TArray<FProbeDirectionData> Directions;
    TArray<FVector> CleanSurfaceVertices;
    TArray<FGroundProbeSegmentData> CleanSurfaceSegmentsData;
    TWeakObjectPtr<class UPhysicalMaterial> PhysicMaterial;
    FVector RawLocation;
    FQuat RawRotation;
    FVector Location;
    FQuat Rotation;
    TWeakObjectPtr<class UPrimitiveComponent> GroundComponent;
    int32 LimitsCount;
    float Radius;

};

struct FJumpData
{
    FVector startVelocity;
    FGroundProbeData beginProbe;
    FVector jumpMotionBegin;
    FQuat jumpMotionBeginRotation;
    FVector jumpBegin;
    FQuat jumpBeginRotation;
    FVector jumpEnd;
    FQuat jumpEndRotation;
    FVector jumpEndFirstValidLocation;
    FQuat jumpEndFirstValidRotation;
    FVector jumpMotionEnd;
    float stopVelocity;
    FGroundProbeData jumpEndProbe;
    class USplineRailComponent* beginRail;
    class USplineRailComponent* endRail;
    bool hasGap;
    float gapSize;
    bool IsHanging;
    bool IsCrossing;
    bool isSlowJump;
    bool isFailedJump;
    FVector jumpTarget;
    FQuat jumpSearchRotation;

};

struct FJumpAnimationData
{
    class UAnimSequence* JumpAnimation;
    class UAnimSequence* JumpFailAnimation;
    class UAnimSequence* StopAnimation;
    class UAnimSequence* StopRailAnimation;
    class UAnimSequence* SlowAnimation;
    bool UseManualBounds;
    float MinLengthBound;
    float MaxLengthBound;
    float MinHeightBound;
    float MaxHeightBound;

};

struct FJumpBlock
{
    FJumpAnimationData Data;
    FVector2D Trajectory;
    FName SpeedName;
    float BeginTime;
    float EndTime;
    FTransform BeginMotion;
    FTransform EndMotion;
    bool HasEnablePlayerControlNotify;
    bool HasExitJumpNotify;

};

class UCatAnimInstance : public UHKAnimInstance
{
    class UJumpAnimationLibrary* m_jumpAnimationLibrary;
    bool m_logAnimationErrors;
    TSubclassOf<class UAnimNotify> m_enablePlayerControlNotifyClass;
    TSubclassOf<class UAnimNotify> m_jumpExitNotifyClass;
    float m_maxSlopeCorrectionAngle;

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
};

class ACatBend2 : public APawn
{
    float m_boneRotationSmoothTime;
    bool m_isRelaxEnabled;
    int32 m_relaxIterationCount;
    float m_relaxCenterWeight;
    float m_relaxSideWeight;

    void ProcessSpine();
    bool IsDebugEnabled();
    FRotator GetSpineBoneRotation(int32 _boneIndex);
    TArray<FName> GetSpineBoneChain();
    void BugTrigger();
};

class UCatFrottableComponent : public UCatUsableComponent
{
    FCatFrottableComponentOnFrotted OnFrotted;
    void CatFrottableDelegate(class UCatFrottableComponent* _component);
    class USplineComponent* m_trajectorySpline;
    class UCapsuleComponent* m_cylinder;
    bool m_useConstraints;
    float m_beginConstraint;
    float m_endConstraint;
    float m_eventBroadcastOffset;
    bool m_debugEnabled;
    float m_defaultRadius;
    float m_frottingDistance;
    FName m_frotMarkerName;
    class UAnimSequence* m_leftFrottingAnimation;
    class UAnimSequence* m_rightFrottingAnimation;
    float m_interpolationErrorRecoveryTime;

    void SetCylinder(class UCapsuleComponent* _capsule);
    void CatFrottableDelegate__DelegateSignature(class UCatFrottableComponent* _component);
};

class UCatMovementComponent : public UPawnMovementComponent
{
    float m_touchForceFactor;
    float m_minTouchForce;
    float m_maxTouchForce;
    float m_initialPushForceFactor;
    float m_pushForceFactor;
    float m_additionalDistanceFromGaps;
    FSmootherTransform m_railSyncSmoother;
    class UHierarchicalStateMachine* m_stateMachine;

    void _CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class UCatMoveToUsableComponent : public UCatUsableComponent
{
    FCatMoveToUsableComponentAfterMoveUseStarted AfterMoveUseStarted;
    void CatUsableDelegate(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    bool m_alignWithTarget;
    bool m_isPrecise;
    bool m_stickToBeginRailOnExit;
    float m_moveToMaxSpeed;
    float m_ignoreTargetForMovement;
    class USceneComponent* m_moveToTarget;
    class USplineRailComponent* m_beginRail;

    void SetMoveToTarget(class USceneComponent* _target, FName _targetSocket);
    void SetIsPrecise(bool _value);
    void SetAlignWithTarget(bool _value);
    TEnumAsByte<ECatMoveToUsableState> GetState();
    class USceneComponent* GetMoveToTarget(FName& _outTargetSocket);
    FTransform GetLastMoveToTarget();
    void _OnFollowSplineEndReached(class ACatPawn* _cat);
    void _OnAfterMoveUseStarted(class ACatPawn* _cat);
    bool _IsMoveToFinished();
};

struct FDriftParameters
{
    class UCurveFloat* AngleDriftFactorCurve;
    class UCurveFloat* SpeedDriftFactorCurve;
    float DriftMultiplier;

};

struct FLookAtData
{
    TEnumAsByte<ELookAtType> Type;
    FVector RelativeTarget;
    FVector Target;
    class AActor* Actor;
    class USceneComponent* Component;
    FName ComponentSocket;

};

struct FCatLookAtEntry
{
    FLookAtData Data;

};

struct FZurgSocket
{
    FName SocketName;
    class AZurgPawnSlave* Zurg;

};

struct FGroundMaterialOverrideEntry
{
};

struct FInteractionData
{
    class UCatUsableComponentBase* Usable;
    class AInteractionFeedback* Feedback;
    class UPrimitiveComponent* VisibilityOccluder;
    class UPrimitiveComponent* InteractionOccluder;

};

struct FRailHangingTestResult
{
    TEnumAsByte<EHangingTestResult> Result;
    FVector BaseLocation;
    FQuat BaseRotation;
    FVector HangingLocation;
    FQuat HangingRotation;
    FPlane HangingPlane;
    int32 CurrentQuadrantId;
    int32 IdealQuadrantId;
    int32 TargetQuadrantId;
    float WallRatio;
    bool isWall;
    bool IsPointHanging;

};

struct FCustomAnimation
{
    class UAnimSequence* Animation;
    bool bIsLooping;
    bool EnableLookAt;
    bool IsSynchronized;
    bool KeepCollisions;
    FTransform StartTransform;
    float SynchronizationTime;
    float PlayRate;

};

struct FCatInterpolateAlongSplineParams
{
    float ResyncTime;
    bool DoOverrideRotation;
    FRotator OverridenRotation;
    bool EarliestExit;

};

class ACatPawn : public APawn
{
    FCatPawnJumpBegan JumpBegan;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnJumpEnded JumpEnded;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnDied Died;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnZurgAttached ZurgAttached;
    void CatZurgDelegate(class ACatPawn* _catPawn, class AZurgPawn* _zurg);
    FCatPawnZurgDetached ZurgDetached;
    void CatZurgDelegate(class ACatPawn* _catPawn, class AZurgPawn* _zurg);
    FCatPawnFollowSplineEndReached FollowSplineEndReached;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnFollowRailEndReached FollowRailEndReached;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnJumpStateBegan JumpStateBegan;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnJumpStateEnded JumpStateEnded;
    void CatDelegate(class ACatPawn* _catPawn);
    FCatPawnBeforeInteractionStart BeforeInteractionStart;
    void CatUsableDelegate(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    FCatPawnAfterInteractionStart AfterInteractionStart;
    void CatUsableDelegate(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    FCatPawnBeforeInteractionStop BeforeInteractionStop;
    void CatUsableDelegate(class ACatPawn* _catPawn, class UCatUsableComponentBase* _usable);
    FCatPawnClosestInteractionChanged ClosestInteractionChanged;
    void CatInteractionDelegate(class ACatPawn* _catPawn, TEnumAsByte<EUsableInteractionButton> _button, class UCatUsableComponentBase* _usable);
    FCatPawnAfterInteractionStop AfterInteractionStop;
    void CatDelegate(class ACatPawn* _catPawn);
    class USkeletalMeshComponent* m_visual;
    class UCapsuleComponent* m_capsule;
    class USphereComponent* m_largeInteractionCollider;
    class UCapsuleComponent* m_grabCapsule;
    class USplineComponent* m_trajectory;
    class ULifeComponent* m_lifeComponent;
    class UDrawMovementComponent* m_drawMovementComponent;
    class USceneComponent* m_root;
    class ACameraThirdPerson* m_cameraThirdPerson;
    TSubclassOf<class ACameraThirdPerson> m_cameraThirdPersonClass;
    FCameraThirdPersonPreset m_cameraShoulderPreset;
    class UCatMovementComponent* m_movement;
    class UHierarchicalStateMachine* m_stateMachine;
    float m_cameraYawSpeed;
    float m_cameraPitchSpeed;
    float m_inputThreshold;
    float m_jumpInputBufferDuration;
    float m_jumpReleasedBufferDuration;
    class UCurveFloat* m_inputResponse;
    class UCurveFloat* m_inputAngleCorrection_Curve;
    FSmootherCurved m_accelerationSmoother;
    FSmootherCurved m_runFactorSmoother;
    float m_maximumMovementInputSize;
    float m_inputTransitionStartBlendAngle;
    float m_inputTransitionSmootherTolerance;
    float m_groundProbeRadius;
    float m_jumpGroundProbeRadius;
    float m_UTurnAngleThreshold;
    float m_UTurnTimeThreshold;
    float m_UTurnTimeThresholdFollowSpline;
    float m_rotationRatio;
    float m_stepDownDistance;
    float m_maxSlope;
    bool m_isCatPilotEnabled;
    float m_catPilotDistanceFromObstacleRangeMin;
    float m_catPilotDistanceFromObstacleRangeMax;
    float m_catPilotCatFacingThresholdAngle;
    float m_catPilotCancelInputThresholdAngle;
    float m_catPilotCancelInputRampAngle;
    float m_minJumpLength;
    class UCurveVector* m_jumpCapacityCurve;
    class UCurveFloat* m_jumpAngleWeight_Curve;
    class UCurveFloat* m_jumpLengthWeight_Curve;
    class UCurveFloat* m_jumpHeightWeight_Curve;
    float m_jumpVisibilityWeight;
    float m_idealShortestJumpLength;
    class UCurveFloat* m_runningidealShortestJumpLength_Curve;
    float m_jumpSearchDirectionRotationRatio;
    float m_jumpSearchClampingAngle;
    float m_maxJumpAngle;
    class UCurveFloat* m_upJumpCurve;
    class UCurveFloat* m_downJumpCurve;
    float m_jumpDownPressedTriggerTime;
    bool m_enableButtonHeldJump;
    float m_jumpDownMaximumDistanceToGap;
    float m_jumpTrajectoryCastRadius;
    float m_autoJumpMaxDistanceToObstacle;
    class UCurveFloat* m_runningAutoJumpMaxDistanceToObstacle;
    float m_jumpProbeRadius;
    float m_jumpProbeInterval;
    float m_additionaProbeRaycastRadius;
    bool m_oneButtonJumpMode;
    float m_hangingTriggerAngle;
    float m_hangingTriggerAngleHysteresis;
    float m_hangingIntermediateRatio;
    float m_hangingStartTime;
    float m_hangingJumpDownTime;
    float m_hangingMaxVelocityThreshold;
    float m_hangingTriggeringDistanceToPlane;
    float m_hangingTriggeringDistanceToPlaneHysteresis;
    float m_hangingPivotDistance;
    class UCurveFloat* m_inputOverRailDirectionAngle_InputFactor_Curve;
    float m_maxRailDetectionSize;
    float m_maxInterplaneAngle;
    float m_railEndMargin;
    class UZurgSettings* m_zurgSettingsReference;
    float m_ZurgMinSpeedModifier;
    float m_struggleGaugeReinitValueAfterCompletion;
    float m_struggleGaugePressIncrement;
    float m_struggleGaugeDecayOverTime;
    uint16 m_ejectedZurgsOnStruggleCompletion;
    FVector m_gravity;
    float m_maxFallSpeed;
    bool m_canDieOnFall;
    float m_deadlyFallDistance;
    FDriftParameters m_baseDriftParameters;
    float m_driftLocomotionBeginIgnoreTime;
    float m_driftModeEnterThreshold;
    float m_driftModeExitThreshold;
    bool m_enableCatAnimationFeature;
    float m_catAnimationPressTime;
    TArray<class UAnimSequence*> m_catAnimations;
    FString m_zurgSocketPrefix;
    float m_jumpGroundCollisionTestOffset;
    FGroundProbeData m_previousProbeData;
    FGroundProbeData m_currentProbeData;
    TArray<class AActor*> m_movementIgnoredActors;
    float m_stepSmoothingTriggerAngleThreshold;
    float m_stepSmoothingTriggerHeightThreshold;
    float m_stepSmoothingEndAngleThreshold;
    float m_stepSmoothingEndHeightThreshold;
    FSmootherFloat m_stepPitchSmoother;
    FSmootherFloat m_stepHeightSmoother;
    class USplineRailComponent* m_nextRail;
    class USplineRailComponent* m_currentRail;
    class USplineRailComponent* m_previousDispatchRail;
    TArray<class USplineRailConnection*> m_overlappingRailConnexions;
    float m_railEnterLimitAngle;
    float m_railEnterFacingLimitAngle;
    float m_railEnterDistance;
    float m_railExitDistance;
    float m_minimumRailLength;
    float m_railSitLerpInTime;
    float m_railSitLerpOutTime;
    float m_railSitExitAngle;
    float m_perchExitDistanceThreshold;
    float m_perchExitAngleThreshold;
    float m_perchEnterTime;
    float m_maxJumpDownHeight;
    float m_maxJumpDownAngleDeviation;
    float m_jumpOnRailEndInputAngleMaxArc;
    float m_jumpBeginAnimationMovement;
    float m_jumpMinimumPreRotationTime;
    float m_jumpEndLerpTime;
    float m_slowJumpThreshold;
    FJumpData m_nextJumpData;
    FJumpData m_currentJumpData;
    TArray<FJumpData> m_activeJumpTargets;
    TArray<FJumpData> m_passiveJumpTargets;
    TArray<FJumpData> m_crossingJumpTargets;
    TArray<FCatLookAtEntry> m_lookAtStack;
    float m_lookAtValidYawRange;
    float m_UTurnInputThreshold;
    FSmootherRotation m_UTurnTargetRotationSmoother;
    FSmootherRotation m_hangingInputSmoother;
    FSmootherTransform m_hangingBaseTransformSmoother;
    FSmootherTransform m_hangingTargetTransformSmoother;
    float m_hangingEnterTime;
    float m_hangingAnimationTime;
    float m_hangingExitInputAngleAmplitude;
    TArray<class AActor*> m_fearRepelSources;
    float m_fearTime;
    TArray<FZurgSocket> m_zurgSockets;
    class ABackpack* M_BackPack;
    class UCatAnimInstance* m_animInstance;
    TArray<FName> m_jumpDebugDataTrackedBones;
    float m_jumpDebugDataSamplesPerSecond;
    float m_rootAlignmentThreshold;
    float m_jumpOnRailEndRotationLerpFactor;
    float m_movingJumpPredictionTime;
    float m_movingJumpSmootingTime;
    TMap<class USceneComponent*, class AScriptedJump*> m_scriptedJumpEntries;
    class AScriptedJump* m_currentScriptedJump;
    class USceneComponent* m_scriptedJumpStartEntry;
    class USceneComponent* m_scriptedJumpAnimationBegin;
    class USceneComponent* m_scriptedJumpAnimationEnd;
    class UAnimSequence* m_scriptedJumpAnimation;
    float m_scriptedJumpApproachTime;
    class UMovingActorComponent* m_movingActorComponent;
    class UMovingActorComponent* m_jumpBeginComponent;
    class UMovingActorComponent* m_jumpEndComponent;
    TWeakObjectPtr<class UPhysicalMaterial> m_groundMaterial;
    TWeakObjectPtr<class UPrimitiveComponent> m_groundVisualObject;
    TArray<FGroundMaterialOverrideEntry> m_groundMaterialOverrideStack;
    class AActor* m_hideoutActor;
    class USplineComponent* m_splineToFollow;
    float m_followSplineDistancePredictionFactor;
    FVectorPIDController m_followSplineInputPID;
    float m_followSplineStopTimePrediction;
    float m_skipSplineDistance;
    class UAnimSequence* m_followSplineEndInterpolateAnimation;
    float m_followSplineFailSafeTime;
    class UAnimSequence* m_interpolateAnimation;
    class USplineRailComponent* m_railToFollow;
    float m_automatedRailHangingCompleteThreshold;
    bool m_isCrossingEnabled;
    bool m_exludeCrossingFromJumps;
    float m_maxCrossingLength;
    float m_maxRunningCrossingLength;
    float m_minCrossingHeight;
    float m_maxCrossingHeight;
    float m_crossingMaxInputAngle;
    float m_crossingMaxInputCatAngle;
    float m_crossingMaxDistanceToObstacle;
    float m_crossingMaxTimeToObstacle;
    TArray<float> m_probeDirectionAngles;
    bool m_enabledDistanceFieldPilot;
    float m_distanceToObstacle;
    float m_negativeDistanceToObstacleWeight;
    float m_angleDeviationWeight;
    float m_smoothSamplingTime;
    float m_distanceDiffThreshold;
    int32 m_relaxIterationsCount;
    float m_pilotTimeAhead;
    float m_pilotDistanceToObstacle;
    float m_pilotSideFavorAngleThreshold;
    float m_pilotProbeDistanceAhead;
    float m_pilotProbeDeviationAngle;
    FRuntimeFloatCurve m_pilotResponseCurve;
    FRuntimeFloatCurve m_pilotAngleCompensationCurve;
    bool m_pilotDebugProbe;
    bool m_pilotDebugDistanceField;
    bool m_pilotDebugPathFind;
    bool m_pilotDebugPath;
    float m_interactionRadiusHysteresis;
    float m_closestInteractionHysteresis;
    float m_interactionSourcePoleHeight;
    FRuntimeFloatCurve m_usableDistanceToCatWeight;
    FRuntimeFloatCurve m_usableAngleWithCatForwardWeight;
    FRuntimeFloatCurve m_usableNormalizedDistanceToScreenCenterWeight;
    class USoundBase* m_defaultStartInteractionSound;
    TMap<class UCatUsableComponentBase*, class FInteractionData> m_availableInteractions;
    class UCatUsableComponentBase* m_closestInteraction;
    TArray<class UCatUsableComponentBase*> m_pendingInteractions;
    class UCatUsableComponentBase* m_overrideInteraction;
    class UCatUsableComponentBase* m_lookedAtInteraction;
    TMap<AActor*, int32> m_interactionActorsDependencies;
    float m_validTransformInterval;
    float m_validTransformMaxObstacleDistance;
    int32 m_storedValidTransformCount;
    bool m_validTransformDebugEnabled;
    FFloatRange m_idleTriggerTimeRange;
    bool m_canFailJumps;
    FInt32Range m_jumpsBeforeFailRange;
    FRotator m_cameraSavedRelativeRotation;
    bool m_debugHanging;
    bool m_debugUturn;
    bool m_debugInputs;
    uint32 m_debugLastJumpFlags;
    uint32 m_debugCatGroundProbeFlags;
    uint32 m_debugJumpSearchFlags;

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
};

class UCatPlayAnimationComponent : public UCatMoveToUsableComponent
{
    class UAnimSequence* m_animation;
    float m_syncTime;

};

struct FCatRemoteAction
{
    class AActor* Target;
    bool PreciseMove;
    bool JumpTransition;

};

class ACatRemoteController : public AActor
{
    TArray<FCatRemoteAction> m_actions;
    bool m_autoStart;
    bool m_loopSequence;
    class ACatPawn* m_controlledCat;
    class UHierarchicalStateMachine* m_stateMachine;

    void StopSequence();
    void StartSequence();
    void _OnJumpEnd(class ACatPawn* _cat);
    void _OnFollowSplineEndReached(class ACatPawn* _cat);
};

class UChapterEntryWidget : public UHKUserWidget
{
    class UHKButton* MainButton;
    class UHKTextBlock* ChapterText;
    class UHKTextBlock* MemoryText;
    class UImage* LockedImage;
    class UImage* ChapterImage;
    class UImage* ChapterSelectedImage;
    FText m_memoryText;
    FText m_restartDialogText;
    FText m_unexploredChapterText;

};

class UChapterMenuWidget : public UHKUserWidget
{
    class UScrollBox* ChapterScrollBox;
    class UChapterEntryWidget* ChapterEntry1;
    class UChapterEntryWidget* ChapterEntry2;
    class UChapterEntryWidget* ChapterEntry3;
    class UChapterEntryWidget* ChapterEntry4;
    class UChapterEntryWidget* ChapterEntry5;
    class UChapterEntryWidget* ChapterEntry6;
    class UChapterEntryWidget* ChapterEntry7;
    class UChapterEntryWidget* ChapterEntry8;
    class UChapterEntryWidget* ChapterEntry9;
    class UChapterEntryWidget* ChapterEntry10;
    class UChapterEntryWidget* ChapterEntry11;
    class UChapterEntryWidget* ChapterEntry12;
    class UHKButton* ChapterSelectionButton1;
    class UHKButton* ChapterSelectionButton2;
    class UHKButton* ChapterSelectionButton3;
    class UHKButton* ChapterSelectionButton4;
    class UHKButton* ChapterSelectionButton5;
    class UHKButton* ChapterSelectionButton6;
    class UHKButton* ChapterSelectionButton7;
    class UHKButton* ChapterSelectionButton8;
    class UHKButton* ChapterSelectionButton9;
    class UHKButton* ChapterSelectionButton10;
    class UHKButton* ChapterSelectionButton11;
    class UHKButton* ChapterSelectionButton12;
    class UTexture2D* ChapterSelectionLocked;
    class UTexture2D* ChapterSelectionUnLocked;
    class UTexture2D* ChapterSelectionSelected;
    class UImage* ChapterSelectionImage1;
    class UImage* ChapterSelectionImage2;
    class UImage* ChapterSelectionImage3;
    class UImage* ChapterSelectionImage4;
    class UImage* ChapterSelectionImage5;
    class UImage* ChapterSelectionImage6;
    class UImage* ChapterSelectionImage7;
    class UImage* ChapterSelectionImage8;
    class UImage* ChapterSelectionImage9;
    class UImage* ChapterSelectionImage10;
    class UImage* ChapterSelectionImage11;
    class UImage* ChapterSelectionImage12;
    class UHKButton* SelectButton;
    class UHKButton* BackButton;

};

class UChapterSubsystem : public UHKGameSubsystem
{

    void ChapterChanged__DelegateSignature(class UChapterSubsystem* _chapterSubsystem, EChapter _previousChapter, EChapter _currentChapter, bool _isOpeningChapter);
    void _OnBeforePersistentSaveDataSaved(class UHKSaveInstance* _saveInstance);
    void _OnAfterPersistentSaveDataLoaded(class UHKSaveInstance* _saveInstance);
};

struct FPlayingAnimationSynchronizedActors
{
    class AActor* ActorSynchronized;
    TArray<class UAnimSequence*> Animations;

};

struct FPlayingAnimation
{
    class UAnimSequence* Animation;
    float Duration;
    float PlayPosition;
    bool IsLooping;
    bool IsSynchronized;
    TArray<class UAnimSequence*> DroidAnimations;
    TArray<FPlayingAnimationSynchronizedActors> SynchronizedData;
    bool KeepLastAnimationAsIdle;

};

class ACharacterDroid : public ACharacter
{
    FCharacterDroidOnDroidMovementAnimationSettingsChanged OnDroidMovementAnimationSettingsChanged;
    void DroidMovementAnimationChangeDelegate(class UDroidMovementAnimationSettings* newAnimationSettings);
    FCharacterDroidOnDroidActivationChanged OnDroidActivationChanged;
    void DroidActivationChangeDelegate(bool activated);
    FCharacterDroidIdleAnimationChanged IdleAnimationChanged;
    void IdleAnimationChangedDelegate(class UAnimSequence* Animation, bool skipBlend);
    FCharacterDroidIdleAnimationPositionChanged IdleAnimationPositionChanged;
    void IdleAnimationPositionChangedDelegate(float newPosition);
    FCharacterDroidIsPlayingAnimationChanged IsPlayingAnimationChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsRepellingCatChanged IsRepellingCatChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsWaitingForInteractionChanged IsWaitingForInteractionChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsWithinDialogChanged IsWithinDialogChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsLookEnabledChanged IsLookEnabledChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidCurrentPostureChanged CurrentPostureChanged;
    void CurrentPostureChanged(EDroidPosture newValue);
    FCharacterDroidIsShowDirectionEnabledChanged IsShowDirectionEnabledChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidIsInRepelModeChanged IsInRepelModeChanged;
    void BooleanChangedDelegate(bool newValue);
    FCharacterDroidOnDroidMovementStateChanged OnDroidMovementStateChanged;
    void DroidMovementStateChangeDelegate(EDroidMovementState newMovementState);
    FCharacterDroidOnDroidBehaviorChanged OnDroidBehaviorChanged;
    void DroidBehaviorChanged(EDroidBehaviorState newBehavior);
    FCharacterDroidOnDroidLocomotionBehaviorChanged OnDroidLocomotionBehaviorChanged;
    void DroidLocomotionBehaviorChanged(EDroidLocomotionBehavior newLocomotionBehavior);
    bool m_drawMoveToDebug;
    float m_maxAngleToStartTurning;
    float m_movementTargetAngle;
    float m_movementTargetSpeed;
    float m_movementSteppingLateralDistance;
    float m_movementSteppingFrontalDistance;
    float m_currentMoveToStopDistance;
    float m_currentLateralAvoidanceValue;
    class USaveComponent* m_saveComponent;
    class UStreamingComponent* m_streamingComponent;
    class UGridSnappingComponent* m_catDetectorGridSnapping;
    class UCapsuleComponent* m_catDetector;
    class UCapsuleComponent* m_repelZone;
    class UArrowComponent* m_repelDirection;
    class UTalkableComponent* m_talkable;
    class USplineComponent* m_pathFindSplineComponent;
    bool m_doHateCats;
    bool m_faceCatDuringRepel;
    class UMaterialInstance* m_baseScreenMaterial;
    class UMaterialInstance* m_exchangeScreenMaterial;
    class UMaterialInstance* m_talkScreenMaterial;
    bool m_doHeadFollowCat;
    class UAnimSequence* m_idleAnimation;
    float m_lookAtSpeed;
    class UAnimSequence* m_currentStumbleAnimation;
    class UAnimSequence* m_currentFallingAnimation;
    class UAnimSequence* m_currentRaiseFromFrontAnimation;
    class UAnimSequence* m_currentRaiseFromBackAnimation;
    FTransform m_initialMeshRelativeTransform;
    class ADroidManager* m_droidManager;
    class AAIController* m_aiController;
    class UDroidMovementAnimationSettings* m_currentMovementAnimationSettings;
    class UDroidUsableComponent* m_currentUsable;
    bool m_overrideLookAt;
    FVector m_lookAtOverrideDirection;
    EDroidLookAtType m_currentLookAtType;
    FLookAtData m_userLookAtData;
    FLookAtData m_autonomousLookAtData;
    FLookAtData m_dialogLookAtData;
    FLookAtData m_overrideLookAtData;
    FLookAtData m_showDirectionData;
    FLookAtData m_userShowDirection;
    FLookAtData m_autonomousShowDirection;
    bool m_startsWithCollisionEnabled;
    FName m_takeActorSocketName;
    FName m_headSocketName;
    float m_aboutToStumbleTime;
    float m_stumbleChargeTime;
    float m_stumbledTime;
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    float m_turnTowardsSpeedRatio;
    float m_minimumAngleForTurnTowardInDegree;
    float m_repelMinimumTime;
    float m_repelPreparationDistance;
    float m_repelPreparationDistanceHysteresis;
    bool m_lookAtCatWhenWaitingObject;
    bool m_isMet;
    bool m_shouldCollisionBeEnabled;
    class UHierarchicalStateMachine* m_sstateMachine;
    float m_startingAngleCorrectionMaximum;
    float m_startingCorrectionStartDistance;
    bool m_useManualSkeletalMeshRefreshSetting;
    bool m_alwaysStationary;
    EDroidOnMeowedBehavior m_currentOnMeowedBehavior;
    bool m_shouldBeActive;
    TArray<class USkeletalMeshComponent*> m_attachedSkeletalMeshComponents;

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
};

class UCheckBoxWidget : public UHKUserWidget
{
    class UHKBorder* Border;
    class UHKCheckBox* CheckBox;
    class UTextBlock* CheckBoxText;
    FText Text;
    class USoundBase* m_onSelectedSound;
    class USoundBase* m_onCheckedSound;
    FLinearColor m_onHoveredTextColor;
    FLinearColor m_onHoveredBorderBrushColor;

};

class UControllerUnpluggedWidget : public UHKUserWidget
{
};

class UControlsViewWidget : public UHKUserWidget
{
    class UHKButton* BackButton;

};

class UCueBank : public UDataAsset
{
    TArray<class USoundCue*> SoundCues;

};

class ULightableComponent : public USceneComponent
{
    FLightableComponentOnEnlightenBegin OnEnlightenBegin;
    void LightableDelegate(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    FLightableComponentOnEnlightenEnd OnEnlightenEnd;
    void LightableDelegate(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);

    void LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void IsEnlighten(bool& _enlighten, float& _lightingRatio);
    class USceneComponent* GetOwnerSceneComponent();
    TArray<class UAntiZurgSpotlightComponent*> GetLights();
    void EnlightenEnd(class UAntiZurgSpotlightComponent* _spotlight);
    void EnlightenBegin(class UAntiZurgSpotlightComponent* _spotlight);
};

class UDamagableLightableComponent : public ULightableComponent
{
    FDamagableLightableComponentOnTakeDamage OnTakeDamage;
    void DamagableLightableDelegate(class UDamagableLightableComponent* _damagableLightableComponent, class AActor* _damageApplier, float _damage);

    bool IsTakingDamage();
    void DamagableLightableDelegate__DelegateSignature(class UDamagableLightableComponent* _damagableLightableComponent, class AActor* _damageApplier, float _damage);
};

class UDebugInputComponent : public UActorComponent
{
    FDebugInputComponentGamepadDPadDownPressed GamepadDPadDownPressed;
    void InputDelegate();
    FDebugInputComponentGamepadDPadDownReleased GamepadDPadDownReleased;
    void InputDelegate();
    FDebugInputComponentGamepadDPadLeftPressed GamepadDPadLeftPressed;
    void InputDelegate();
    FDebugInputComponentGamepadDPadLeftReleased GamepadDPadLeftReleased;
    void InputDelegate();
    FDebugInputComponentGamepadDPadRightPressed GamepadDPadRightPressed;
    void InputDelegate();
    FDebugInputComponentGamepadDPadRightReleased GamepadDPadRightReleased;
    void InputDelegate();
    FDebugInputComponentGamepadDPadUpPressed GamepadDPadUpPressed;
    void InputDelegate();
    FDebugInputComponentGamepadDPadUpReleased GamepadDPadUpReleased;
    void InputDelegate();
    FDebugInputComponentGamepadLeftShoulderPressed GamepadLeftShoulderPressed;
    void InputDelegate();
    FDebugInputComponentGamepadLeftShoulderReleased GamepadLeftShoulderReleased;
    void InputDelegate();
    FDebugInputComponentGamepadRightShoulderPressed GamepadRightShoulderPressed;
    void InputDelegate();
    FDebugInputComponentGamepadRightShoulderReleased GamepadRightShoulderReleased;
    void InputDelegate();
    FDebugInputComponentGamepadLeftTriggerPressed GamepadLeftTriggerPressed;
    void InputDelegate();
    FDebugInputComponentGamepadLeftTriggerReleased GamepadLeftTriggerReleased;
    void InputDelegate();
    FDebugInputComponentGamepadRightTriggerPressed GamepadRightTriggerPressed;
    void InputDelegate();
    FDebugInputComponentGamepadRightTriggerReleased GamepadRightTriggerReleased;
    void InputDelegate();
    FDebugInputComponentGamepadLeftThumbstickPressed GamepadLeftThumbstickPressed;
    void InputDelegate();
    FDebugInputComponentGamepadLeftThumbstickReleased GamepadLeftThumbstickReleased;
    void InputDelegate();
    FDebugInputComponentGamepadRightThumbstickPressed GamepadRightThumbstickPressed;
    void InputDelegate();
    FDebugInputComponentGamepadRightThumbstickReleased GamepadRightThumbstickReleased;
    void InputDelegate();
    FDebugInputComponentGamepadLeftStickXAxis GamepadLeftStickXAxis;
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadLeftStickYAxis GamepadLeftStickYAxis;
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadRightStickXAxis GamepadRightStickXAxis;
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadRightStickYAxis GamepadRightStickYAxis;
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadLeftTriggerAxis GamepadLeftTriggerAxis;
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadRightTriggerAxis GamepadRightTriggerAxis;
    void InputAxisDelegate(float _value);
    FDebugInputComponentGamepadSpecialLeftPressed GamepadSpecialLeftPressed;
    void InputDelegate();
    FDebugInputComponentGamepadSpecialLeftReleased GamepadSpecialLeftReleased;
    void InputDelegate();
    FDebugInputComponentGamepadSpecialRightPressed GamepadSpecialRightPressed;
    void InputDelegate();
    FDebugInputComponentGamepadSpecialRightReleased GamepadSpecialRightReleased;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonBottomPressed GamepadFaceButtonBottomPressed;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonBottomReleased GamepadFaceButtonBottomReleased;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonLeftPressed GamepadFaceButtonLeftPressed;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonLeftReleased GamepadFaceButtonLeftReleased;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonRightPressed GamepadFaceButtonRightPressed;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonRightReleased GamepadFaceButtonRightReleased;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonTopPressed GamepadFaceButtonTopPressed;
    void InputDelegate();
    FDebugInputComponentGamepadFaceButtonTopReleased GamepadFaceButtonTopReleased;
    void InputDelegate();

};

class ADebugInputManager : public AManager
{
};

class UDebugInputWidget : public UHKUserWidget
{
    class UUniformGridPanel* grid;
    class UScrollBox* ScrollBox;
    class UHKButton* BackButton;
    TSubclassOf<class UKeyIconWidget> m_keyIconWidgetClass;

};

struct FStartData
{
    TArray<class TSubclassOf<AActor>> Inventory;
    TArray<FName> UnlockedMemories;
    bool GodMode;
    bool NoBackpack;
    bool NoTorchlight;

};

struct FDebugProfile
{
    FString StartupSaveName;
    class AHKPlayerStart* PlayerStart;
    bool UseQuickStartTransform;
    FTransform QuickStartTransform;
    FStartData StartData;
    class UAnimSequence* JumpAnimationOverride;
    bool StreamingDebugModeEnabled;

};

class UDebugProfileObject : public UObject
{
    bool bDebugProfileEnabled;
    FDebugProfile DebugProfile;
    FString MapName;

};

class UDebugSaveGame : public USaveGame
{
    bool bDebugProfileEnabled;
    FDebugProfile DebugProfile;

};

class ADialog : public AActor
{
    class UBillboardComponent* m_billboard;
    class USaveComponent* m_save;
    bool m_canBeShownItems;
    bool m_autoResetCameraActivated;
    class UAnimSequence* m_currentSynchronizedAnimation;

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
};

class UDialogBoxWidget : public UHKUserWidget
{
    class UTextBlock* TitleText;
    class UTextBlock* OkButtonText;
    class UTextBlock* CancelButtonText;
    class UHKButton* OkButton;
    class UHKButton* CancelButton;
    class UHKButton* SelectButton;
    class UHKButton* BackButton;

};

class UDialogUserWidget : public UBackpackUserWidget
{
};

struct FDiskOperation
{
    class USaveGame* SaveGame;

};

class UDiskSubsystem : public UHKGameSubsystem
{
    TArray<FDiskOperation> m_diskOperations;

};

struct FDroidTick
{
    class ACharacterDroid* Droid;

};

class ADroidManager : public AManager
{
    int32 m_maxDroidTicksPerFrame;
    float m_droidSignificanceDistanceThreshold;
    TArray<class ACharacterDroid*> m_droids;
    TArray<FDroidTick> m_droidTickList;

};

class UDroidMovementAnimationSettings : public UPrimaryDataAsset
{
    class UBlendSpace1D* Start_LeftFoot;
    class UBlendSpace1D* Start_RightFoot;
    class UBlendSpace* WalkBlendSpace;
    class UAnimSequence* StopWalkAnimation_LeftFoot;
    class UAnimSequence* StopWalkAnimation_RightFoot;
    class UBlendSpace1D* TurnInPlaceBlendSpace;
    class UBlendSpace1D* FinalStepBlendSpace_LeftFoot;
    class UBlendSpace1D* FinalStepBlendSpace_RightFoot;

};

struct FAnimationUsingStruct
{
    class UAnimSequenceBase* AnimationAsset;
    bool loop;
    float playSpeed;
    float blendInTime;
    float blendOutTime;

};

struct FAnimationStartUseStruct
{
    class UAnimSequenceBase* AnimationAsset;
    float playSpeed;
    float blendInTime;
    float blendOutTime;

};

class UDroidUsableComponent : public USceneComponent
{
    FDroidUsableComponentOnStartUseEvent OnStartUseEvent;
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FDroidUsableComponentOnUsingEvent OnUsingEvent;
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FDroidUsableComponentOnStopUseEvent OnStopUseEvent;
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FDroidUsableComponentOnUseEndedEvent OnUseEndedEvent;
    void UseDelegate(class UDroidUsableComponent* DroidUsableComponent, class ACharacterDroid* Droid);
    FAnimationUsingStruct m_usingAnimation;
    FAnimationStartUseStruct m_startUseAnimation;
    FAnimationStartUseStruct m_stopUseAnimation;
    FText m_objectName;
    class AActor* m_startUsingTransformActor;
    bool m_isEnabled;
    bool m_enableTeleportAtEnd;
    class UHierarchicalStateMachine* m_stateMachine;

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
};

struct FDroneMovementTarget
{
    class USceneComponent* Component;

};

struct FDroneSpringParams
{
    float Stiffness;
    float CriticalDamping;
    float RotationTimeTo90;

};

struct FDroneMoveToParams
{
    float Speed;
    float RotationTimeTo90;

};

class ADrone : public AActor
{
    FDroneEquipped Equipped;
    void DroneActionDelegate(class ADrone* Drone);
    FDroneUnequipped Unequipped;
    void DroneActionDelegate(class ADrone* Drone);
    FDroneGUIOpened GUIOpened;
    void DroneActionDelegate(class ADrone* Drone);
    FDroneGUIClosed GUIClosed;
    void DroneActionDelegate(class ADrone* Drone);
    FDroneFoldingOver FoldingOver;
    void DroneActionDelegate(class ADrone* Drone);
    FDroneUnfoldingOver UnfoldingOver;
    void DroneActionDelegate(class ADrone* Drone);
    class UCapsuleComponent* m_capsule;
    class USkeletalMeshComponent* m_mesh;
    class UWidgetComponent* m_GUIWidgetComponent;
    float m_timeIdleBeforeFoldBack;
    TArray<FDroneMovementTarget> m_followTargetsList;
    FDroneMovementTarget m_currentFollowTarget;
    class USceneComponent* m_foldedComponent;
    class ABackpack* M_BackPack;
    class USceneComponent* m_customLookComponent;
    TArray<class UScannableComponent*> m_scanTargets;
    TArray<TEnumAsByte<ECollisionChannel>> m_scanCollisionChannels;
    float m_minAPNFov;
    float m_maxAPNFov;
    float m_APNRotateSpeed;
    float m_APNZoomSpeed;
    float m_scanRadius;
    float m_strongLightPressedTime;
    TSubclassOf<class UUserWidget> m_baseWidgetClass;
    TSubclassOf<class UDialogUserWidget> m_dialogWidgetClass;
    bool m_isLightUnlocked;
    bool m_isStrongLightUnlocked;
    uint8 m_strongLightDisabled;
    uint8 m_weakLightDisabled;
    class UHierarchicalStateMachine* m_stateMachine;

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
};

class UDroneMenuWidget : public UBackpackUserWidget
{

    void SetCategory(TEnumAsByte<EDroneMenuCategory> _category);
    TEnumAsByte<EDroneMenuCategory> GetCategory();
};

class UDroneSettings : public UPrimaryDataAsset
{
    float BatteryRechargeSpeed;
    float BatteryDechargeSpeed;
    float BatteryStartToRumble;
    float StrongLightReactivationPercentage;
    float StrongLightInnerConeAngle;
    float StrongLightOutterConeAngle;
    float StrongLightAttenuation;
    float DamageToApplyPerTime;
    float DamageApplicationTimeInSecond;
    class UCurveFloat* RadialDamageCurve;
    class UCurveFloat* DistanceDamageCurve;

};

class UDroneUsableComponent : public UBackpackUsableComponent
{
    FDroneUsableComponentDroneUseStarted DroneUseStarted;
    void DroneUseDelegate(class UDroneUsableComponent* Usable);
    FDroneUsableComponentDroneUseEnded DroneUseEnded;
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
};

class UEditorTickComponent : public UActorComponent
{
    FEditorTickComponentOnEditorTick OnEditorTick;
    void EditorTickSignature(float DeltaTime);

};

class AEditorTickingActor : public AActor
{

    void OnEditorTick(float DeltaSeconds);
    void _OnEditorTick(float _deltaTime);
};

class UExternalUISubsystem : public UHKGameSubsystem
{
};

struct FGameplayNoise
{
    class AActor* Emitter;

};

struct FNoiseEvent
{
    class AActor* Emitter;
    class UNoisableComponent* noisable;

};

class UGameAudioSubsystem : public UHKGameSubsystem
{
    TArray<class UNoisableComponent*> m_noisableList;
    TArray<FGameplayNoise> m_gameplayNoiseList;
    TArray<FNoiseEvent> m_noiseEventQueue;

    void EmitGameplayNoise(class AActor* _emitter, float _targetRadius, float _growTime, float _sustainTime);
};

class UGameplaySettingsWidget : public UHKUserWidget
{
    class UListBoxWidget* LanguageListBox;
    class UCheckBoxWidget* VibrationCheckBox;
    class UCheckBoxWidget* ReticuleCheckBox;
    class UCheckBoxWidget* AutoPauseCheckBox;
    class UCheckBoxWidget* HUDCheckBox;
    class UCheckBoxWidget* JumpPromptCheckBox;
    class UCheckBoxWidget* AutoCameraCheckBox;
    class UHKButton* BackButton;
    class UHKButton* DefaultsButton;
    class UHKTextBlock* SwitchTabTextBlock;
    class UHKButton* TabLeftButton;
    class UHKButton* TabRightButton;
    FText m_resetToDefaultsDialogText;

};

class AGameStateManager : public AManager
{
    FGameStateManagerOnGameSuspended OnGameSuspended;
    void GameStateManagerTypedDelegate(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    FGameStateManagerOnGameUnsuspended OnGameUnsuspended;
    void GameStateManagerTypedDelegate(TEnumAsByte<EGameSuspendedReason> _gameSuspendedReason);
    class UHierarchicalStateMachine* m_stateMachine;

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
};

class UGammaSettingsWidget : public UHKUserWidget
{
    class UHKProgressBar* BrightnessProgressBar;
    class UHKButton* ButtonLeft;
    class UHKButton* ButtonRight;
    class UHKButton* BackButton;
    class UHKButton* AcceptButton;
    class UHKButton* DefaultButton;
    class UHKTextBlock* ExplainText;
    class UImage* GammaIconLow;
    class UImage* GammaIconMiddle;
    class UImage* GammaIconHigh;
    class UHorizontalBox* KeyBox;
    class UWidgetAnimation* FadeInAnimation;
    class UTexture* m_gammaIconLowTexture;
    class UTexture* m_gammaIconMiddleTexture;
    class UTexture* m_gammaIconHighTexture;
    FText m_resetToDefaultsDialogText;
    class UMaterialInterface* m_gammaIconMaterial;
    class UMaterialInstanceDynamic* gammaIconLowMaterial;
    class UMaterialInstanceDynamic* gammaIconMiddleMaterial;
    class UMaterialInstanceDynamic* gammaIconHighMaterial;
    float m_minimumGammaValue;
    float m_maximumGammaValue;

};

class UGraphicsSettingsWidget : public UHKUserWidget
{
    class UScrollBox* ScrollBox;
    class USliderBoxWidget* MotionBlurSliderBox;
    class USliderBoxWidget* SharpnessSliderBox;
    class UListBoxWidget* ResolutionListBox;
    class UListBoxWidget* FrameRateListBox;
    class UHorizontalBox* GraphicsMemoryBox;
    class UTextBlock* GraphicsMemoryText;
    class UListBoxWidget* ScreenPercentageListBox;
    class UListBoxWidget* EffectsQualityListBox;
    class UListBoxWidget* ShadowQualityListBox;
    class UListBoxWidget* TextureQualityListBox;
    class UListBoxWidget* MeshQualityListBox;
    class UCheckBoxWidget* FullscreenCheckBox;
    class UCheckBoxWidget* VSyncCheckBox;
    class UHKButton* GammaButton;
    class UHKButton* BackButton;
    class UHKButton* DefaultsButton;
    FText m_resetToDefaultsDialogText;
    FText m_memoryGigabytesText;
    FText m_memoryUnavailableText;
    FText m_frameRateUncappedText;
    FText m_qualityLowText;
    FText m_qualityMediumText;
    FText m_qualityHighText;
    FText m_qualityVeryHighText;
    FText m_qualityFullText;
    class UHKTextBlock* SwitchTabTextBlock;
    class UHKButton* TabLeftButton;
    class UHKButton* TabRightButton;
    TSet<FIntPoint> m_resolutions;
    TSet<uint32> m_screenPercentages;

};

class UGridSnappingComponent : public USceneComponent
{
    float GridSize;

};

class UGroundProbeTools : public UBlueprintFunctionLibrary
{

    bool GetClosestDirectionData(FGroundProbeData& _probeData, FVector _origin, FVector _direction, FProbeDirectionData& _outProbeDirectionData, bool _debug);
};

class AHideout : public AActor
{

    void SetClosed(bool _value);
    bool IsClosed();
    bool IsAvailableForHiding();
    FVector GetHiddenLocation();
    class AActor* GetHiddenActor();
};

class UHKBorder : public UBorder
{
    FLinearColor m_selectedColor;

};

class UHKButton : public UButton
{
    class USoundBase* m_onSelectedSound;
    class USoundBase* m_onPressedSound;
    FLinearColor SelectedTextColor;
    float m_onHoveredAlpha;
    bool m_changeAlphaOnHovered;
    bool m_changeTextColorOnSelected;

    void _OnUnHovered();
    void _OnHovered();
    void _OnClicked();
};

struct FHKChapter
{
    FText Name;
    EChapter ID;
    TSet<FName> MemoryIds;
    TSoftObjectPtr<UWorld> StartLevel;
    class UTexture2D* UIImage;

};

class UHKChapters : public UPrimaryDataAsset
{
    TArray<FHKChapter> Chapters;

};

class UHKCheatManager : public UCheatManager
{
};

class UHKCheckBox : public UCheckBox
{

    void _OnCheckStateChanged(bool _isChecked);
};

class UHKCrowdManager : public UCrowdManager
{
};

class UHKGameEngine : public UGameEngine
{
};

class UDebugMenuEntry : public UObject
{
    FString Name;
    FString Description;
    FString AText;
    FString XText;
    FString YText;
    FDebugMenuEntryOnUpdate OnUpdate;
    void EntryAction(class UDebugMenuEntry* _entry);
    FDebugMenuEntryOnAPressed OnAPressed;
    void EntryAction(class UDebugMenuEntry* _entry);
    FDebugMenuEntryOnXPressed OnXPressed;
    void EntryAction(class UDebugMenuEntry* _entry);
    FDebugMenuEntryOnYPressed OnYPressed;
    void EntryAction(class UDebugMenuEntry* _entry);
    TArray<class UDebugMenuEntry*> m_children;
    class UDebugMenuEntry* m_parent;

    void Update();
    class UDebugMenuEntry* GetParent();
    TArray<class UDebugMenuEntry*> GetChildren();
    void EntryAction__DelegateSignature(class UDebugMenuEntry* _entry);
    void ClearAllChildren();
    void AddChild(class UDebugMenuEntry* _child);
};

class UHKGameInstance : public UJoyGameInstance
{
    FHKGameInstanceLoadCompleted LoadCompleted;
    void OnLoadComplete(float _loadTime, FString _mapName, class UWorld* _world);
    TArray<class TSubclassOf<AManager>> ManagerBlueprintClasses;
    TSubclassOf<class ACatPawn> CatClass;
    TSubclassOf<class ABackpack> BackpackClass;
    TSubclassOf<class ADrone> DroneClass;
    TSubclassOf<class AInteractionFeedback> InteractionFeedbackClass;
    class UHKSaveInstance* m_saveInstance;
    TSubclassOf<class UHKSaveInstance> m_saveInstanceClass;
    class UHKChapters* m_chapters;
    TArray<class TSubclassOf<AActor>> m_debugLootablesList;
    class UActivityData* m_activityData;
    class UB12Memories* m_b12MemoriesData;
    class UDebugMenuEntry* m_rootDebugMenuEntry;
    class UDebugMenuEntry* m_chaptersDebugMenuEntry;
    class UDebugMenuEntry* m_loadSaveDebugMenuEntry;
    class UDebugMenuEntry* m_loadSaveSlotsDebugMenuEntry;
    class UDebugMenuEntry* m_loadSaveFoldersDebugMenuEntry;
    class UDebugMenuEntry* m_quickSaveDebugMenuEntry;
    class UDebugMenuEntry* m_quickLoadDebugMenuEntry;
    class UDebugMenuEntry* m_cheatDebugMenuEntry;
    class UDebugMenuEntry* m_languageDebugMenuEntry;
    class UDebugMenuEntry* m_debugDebugMenuEntry;
    TMap<class TSubclassOf<UHKGameSubsystem>, class TSubclassOf<UHKSubsystemSettings>> m_subsystemToSettingsClassMap;
    TSoftObjectPtr<UWorld> m_zoneToLoad;
    TMap<class FName, class UAudioComponent*> m_persistentAudioComponents;

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
};

class AHKGameMode : public AGameMode
{
};

class UHKGameSettings : public UObject
{
    bool DisplayActorLinksOnlyWhileSelected;
    FName SessionSaveName;
    bool IsAudioLogEnabled;
    TEnumAsByte<ECollisionChannel> GameplaySoundTraceChannel;
    TEnumAsByte<ECollisionChannel> MovementObstacleProbeChannel;
    TEnumAsByte<ECollisionChannel> WalkableProbeChannel;
    TEnumAsByte<ECollisionChannel> InteractCollisionChannel;
    TEnumAsByte<ECollisionChannel> VisibilityCollisionChannel;
    bool LoadingNotificationEnabled;
    bool FadeToBlackDuringWaitForStreamingAndLoading;
    bool UseBaseMapMode;
    TSoftObjectPtr<UWorld> BaseMap;
    TArray<TSoftObjectPtr<UWorld>> BaseMapModeZones;
    TSoftObjectPtr<UKeyIconSetData> KeyIconSetData;
    TSoftObjectPtr<UTexture2D> LoadingScreenPawTexture;
    TSoftObjectPtr<UFont> LoadingScreenFont;
    TSoftObjectPtr<UWorld> MainMenuMap;
    float GUIInputDeadZone;
    float GUIFadeOutDuration;
    float GUIAutoFireDelay;
    float GUIAutoFireInterval;

};

struct FCustomKeyMapping
{
    FKey Key;
    FName Name;
    bool IsAxis;
    bool IsPad;
    bool IsNegativeScale;

};

class UHKGameUserSettings : public UGameUserSettings
{
    int32 MeshQuality;
    float MasterVolume;
    float MusicVolume;
    float EffectsVolume;
    float Gamma;
    float MotionBlurAmount;
    float LookSensitivity;
    float Sharpness;
    bool PadVibrationEnabled;
    bool InvertLookXEnabled;
    bool InvertLookYEnabled;
    bool ReticuleEnabled;
    TArray<FCustomKeyMapping> CustomKeyMappings;
    bool AutoPauseEnabled;
    bool JumpPromptEnabled;
    bool HUDEnabled;
    bool AutoCameraEnabled;
    bool FirstLaunch;
    uint32 ScreenPercentage;
    uint32 SteamDeckScreenPercentage;
    int32 SteamDeckEffectsQuality;
    int32 SteamDeckMeshQuality;
    int32 SteamDeckTextureQuality;
    int32 SteamDeckShadowQuality;

};

class UHKGlobalSaveGame : public USaveGame
{
    FString LastUsedSlot;
    TArray<uint8> GameUserSettingsData;
    FString Culture;

};

struct FActionDisplayKeyMappings
{
    TArray<FInputActionKeyMapping> KeyMappings;

};

struct FActionDisplay
{
    TArray<FActionDisplayKeyMappings> KeyMappingsSets;
    TArray<FName> ActionBindingNames;
    FText DisplayText;
    int32 Priority;
    bool Enabled;
    bool ShowAllKeys;

};

class AHKHUD : public AJoyHUD
{
    FHKHUDActionDisplayAdded ActionDisplayAdded;
    void HKHUDDelegate(class AHKHUD* _hud);
    FHKHUDActionDisplayRemoved ActionDisplayRemoved;
    void HKHUDDelegate(class AHKHUD* _hud);
    FHKHUDActionDisplayEnabledChanged ActionDisplayEnabledChanged;
    void HKHUDDelegate(class AHKHUD* _hud);
    TSubclassOf<class UUserWidget> m_HUDWidgetClass;
    TSubclassOf<class UHUDDebugWidget> m_HUDDebugWidgetClass;
    TMap<class TSubclassOf<UUserWidget>, class TSubclassOf<UUserWidget>> m_widgetToBlueprintMap;
    TArray<class UUserWidget*> m_widgets;
    class UUserWidget* m_HUDWidget;
    class UHUDDebugWidget* m_HUDDebugWidget;
    class USaveIconWidget* m_saveIcon;
    class UReticuleWidget* m_reticule;
    bool m_enableSaveIcon;

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
};

class UHKModuleDelegateHelper : public UObject
{

    void _OnNavDataRegisteredEvent(class ANavigationData* NavData);
};

class AHKPlayerCameraManager : public APlayerCameraManager
{
    FHKPlayerCameraManagerCameraChanged CameraChanged;
    void CameraTransitionDelegate(class AHKPlayerCameraManager* CameraManager, const FTransform& CurrentCameraTransform, class AActor* NextCamera, FViewTargetTransitionParams TransitionParams, EInputTransitionMode InputTransitionMode, float InputTransitionTime);
    class USphereComponent* m_collisionSphere;
    FVector m_maxDriftVelocity;
    FVector m_driftDeceleration;
    float m_maxDriftingAngularVelocity;
    float m_driftAngularDeceleration;

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
};

struct FWalkableDebuggedPrimitive
{
    TArray<class UMaterialInterface*> Materials;

};

struct FPS5TriggerEffectData
{
    EPS5TriggerEffectMode Mode;
    uint8 Value1;
    uint8 Value2;
    uint8 Value3;

};

class AHKPlayerController : public APlayerController
{
    float m_fadeOutTime;
    float m_targetTimeDilation;
    float m_timeDilationLerpRatio;
    TSubclassOf<class AHKSpectatorPawn> m_spectatorClass;
    float m_minimumWaitForStreamingTime;
    class UHierarchicalStateMachine* m_stateMachine;
    class AHKPlayerCameraManager* m_cameraManager;
    class ACatPawn* m_catPawn;
    class ABackpack* M_BackPack;
    class ADrone* M_Drone;
    class AHKSpectatorPawn* m_spectator;
    int32 m_debugJumpProbeWheelSubdivisions;
    class UDebugInputComponent* m_debugInputComponent;
    class AGameStateManager* m_gameStateManager;
    TArray<FWalkableDebuggedPrimitive> m_walkableDebuggedPrimitives;
    class UMaterialInterface* m_walkableDebugMaterial;
    class UMaterialInterface* m_movementObstacleDebugMaterial;
    int32 m_maxDebugTransformStackSize;
    class UTexture* m_defaultIcon;
    bool m_savedHasBackpack;
    bool m_savedHasUnlockedLight;
    TArray<class TSubclassOf<AActor>> m_savedInventory;
    class USoundSubmix* m_PS5VibrationSubmix;
    FPS5TriggerEffectData m_scratchablePS5TriggerEffect;

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
};

class UHKPlayerInput : public UPlayerInput
{
};

class AHKPlayerStart : public APlayerStart
{
    bool UseData;
    FStartData StartData;

    void BeforeCatSpawned();
    void AfterCatSpawned(class ACatPawn* _cat);
};

class UHKProgressBar : public UProgressBar
{

    void _OnValueChanged(float _value);
};

struct FObjectiveState
{
    EObjective ID;
    EObjectiveStatus status;

};

struct FActivityState
{
    EActivity ID;
    EActivityStatus status;
    TMap<class EObjective, class FObjectiveState> Objectives;

};

struct FActivitiesState
{
    TMap<class EActivity, class FActivityState> Activities;

};

class UHKPersistentSaveData : public UObject
{
    TSet<FName> UnlockedMemories;
    TMap<FName, uint64> StatCounts;
    TSet<FName> ScratchedChapters;
    FName MaxUnlockedChapterName;
    FActivitiesState ActivitiesState;

    void UnlockMemory(FName _memoryId);
    void SetUnlockedMemories(const TSet<FName>& _memories);
    void LockMemory(FName _memoryId);
    bool IsMemoryUnlocked(FName _memoryId);
    void Init();
    TSet<FName> GetUnlockedMemories();
    FString BlueprintToString();
};

class UHKSessionSaveData : public UObject
{
    bool IsInSentinelPattern;
    bool IsInZurgPursuit;

    FString BlueprintToString();
};

struct FPlayerSaveData
{
    FTransform PlayerTransform;
    FRotator CameraRelativeRotation;
    bool HasBackpack;
    TArray<uint8> BackpackData;
    TArray<uint8> DroneData;

};

struct FHKComponentSaveData
{
    FTransform RelativeTransform;
    FName Name;
    TArray<uint8> Data;
    bool NoAttachment;

};

struct FHKActorSaveData
{
    FName Name;
    TArray<uint8> Data;
    TArray<FHKComponentSaveData> ComponentsData;
    bool Destroyed;

};

struct FHKLevelSaveData
{
    FName Name;
    TMap<class FName, class FHKActorSaveData> Actors;

};

class UHKSaveGame : public USaveGame
{
    FDateTime Timestamp;
    FName ZoneName;
    FPlayerSaveData PlayerData;
    TMap<class FName, class FHKLevelSaveData> LevelsData;
    TArray<uint8> PersistentData;
    TArray<uint8> SessionData;
    FName ChapterName;
    uint32 Version;

};

struct FSaveSlotCache
{
    class UHKSaveGame* SaveGame;

};

class UHKSaveInstance : public UObject
{
    FHKSaveInstanceUnlockedMemoriesChanged UnlockedMemoriesChanged;
    void HKPersistentSaveDelegate(class UHKPersistentSaveData* _persistentSaveData);
    TSubclassOf<class UHKPersistentSaveData> m_persistentDataClass;
    TSubclassOf<class UHKSessionSaveData> m_sessionDataClass;
    class UHKSaveGame* m_saveData;
    class UHKPersistentSaveData* m_persistentSaveData;
    class UHKGlobalSaveGame* m_globalSaveData;
    class UHKSessionSaveData* m_sessionSaveData;
    TArray<FSaveSlotCache> m_fixedSlotsCache;
    uint8 m_fixedSlotsCount;

    void SavePersistentDataToDisk();
    bool IsSaving();
    bool IsSaveEnabled();
    void HKSaveInstanceDelegate__DelegateSignature(class UHKSaveInstance* _saveInstance);
    void HKPersistentSaveDelegate__DelegateSignature(class UHKPersistentSaveData* _persistentSaveData);
    class UHKSessionSaveData* GetSessionSaveData();
    class UHKPersistentSaveData* GetPersistentSaveData();
    void BP_SaveDataToDisk(bool _overridePlayerTransform, const FTransform& _playerTransform);
};

class UHKSlider : public USlider
{

    void _OnValueChanged(float _value);
};

class AHKSpectatorPawn : public ASpectatorPawn
{
    class UCameraComponent* m_camera;
    float m_moveSpeed;
    float m_horizontalLookSpeed;
    float m_verticalLookSpeed;
    float m_maxLookUpAngle;
    float m_teleportFeedbackClippingDistance;

};

class UHKTextBlock : public UTextBlock
{
    FLinearColor m_selectedColor;

};

class UHKUniformGridPanel : public UUniformGridPanel
{
};

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
};

struct FStreamingGroupData
{
    TArray<FName> Dependencies;
    TArray<TSoftObjectPtr<UWorld>> Levels;
    TArray<class ALevelStreamingVolume*> Volumes;
    FName GroupName;
    bool InitiallyActive;
    bool IgnoreDebugMode;

};

class AHKWorldSettings : public AWorldSettings
{
    class AHKPlayerStart* PlayerStart;
    bool StreamingDebugModeEnabled;
    TArray<FStreamingGroupData> StreamingGroups;
    FStartData StartData;
    TMap<class EChapter, class AHKPlayerStart*> m_chapterPlayerStarts;
    class USoundSubmix* m_masterSoundSubmix;
    class USoundSubmix* m_controllerSoundSubmix;
    TArray<class USoundSubmix*> m_musicSoundSubmixes;
    TArray<class USoundSubmix*> m_effectsSoundSubmixes;

    void AfterNotifyBeginPlay();
};

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
};

class UIconData : public UPrimaryDataAsset
{
    class UTexture2D* Texture;

};

class UKeyIconData : public UPrimaryDataAsset
{
    FKey Key;
    class UIconData* DefaultIcon;
    TMap<class EGameControllerType, class UIconData*> ControllerIcons;

};

class UKeyIconSetData : public UPrimaryDataAsset
{
    TArray<class UKeyIconData*> Keys;

    class UTexture2D* FindIconForKey(const FKey& _key, EGameControllerType _controller);
};

class UIdentitySubsystem : public UHKGameSubsystem
{
};

class AIEM : public AActor
{
};

class UIEMableComponent : public UBoxComponent
{
    FIEMableComponentOnIEMed OnIEMed;
    void IEMedDelegate(class UIEMableComponent* _IEMableComponent, class AIEM* _IEM);

    void IEMedDelegate__DelegateSignature(class UIEMableComponent* _IEMableComponent, class AIEM* _IEM);
    void _OnBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
};

class UInputBindingsWidget : public UHKUserWidget
{
    class UScrollBox* ScrollBox;
    class UVerticalBox* InputKeyRowVBox;
    class UInputKeyRowWidget* InputRowForward;
    class UInputKeyRowWidget* InputRowBack;
    class UInputKeyRowWidget* InputRowLeft;
    class UInputKeyRowWidget* InputRowRight;
    class UInputKeyRowWidget* InputRowRun;
    class UInputKeyRowWidget* InputRowJump;
    class UInputKeyRowWidget* InputRowInteract;
    class UInputKeyRowWidget* InputRowMeow;
    class UInputKeyRowWidget* InputRowCall;
    class UInputKeyRowWidget* InputRowMenu;
    class UInputKeyRowWidget* InputRowLight;
    class UInputKeyRowWidget* InputRowDefluxor;
    class UInputKeyRowWidget* InputRowHelp;
    class UInputKeyRowWidget* InputRowFirstPerson;
    class UInputKeyRowWidget* InputRowRecenter;
    class UInputKeyRowWidget* InputRowValidate;
    class UInputKeyRowWidget* InputRowExit;
    class UInputKeyRowWidget* InputRowNextDialog;
    class UInputKeyRowWidget* InputRowPrevCategory;
    class UInputKeyRowWidget* InputRowNextCategory;
    class UHorizontalBox* KeyBox;
    class UHorizontalBox* CancelKeyBox;
    class UHKButton* BackButton;
    class UHKButton* DefaultsButton;
    class UHKButton* CancelButton;
    class USoundBase* m_onKeyRowSelectedSound;
    class USoundBase* m_onKeyRowListeningStartSound;
    class USoundBase* m_onKeyRowListeningConfirmSound;
    FText m_applyBindingsDialogText;
    FText m_resetToDefaultsDialogText;
    FText m_invalidKeyDialogText;
    FText m_clearInputDialogText;
    float m_onListeningOtherKeyOpacity;

};

class UInputKeyRowWidget : public UHKUserWidget
{
    class UInputSelectorWidget* FirstKeyButton;
    class UInputSelectorWidget* SecondKeyButton;
    class UHKBorder* Border;
    class UHKTextBlock* ActionKeyTextBlock;
    class UImage* SeperatorImage;
    class UHKButton* KeyRowButton;
    FText m_actionKeyText;
    FLinearColor m_onHoveredTextColor;
    FLinearColor m_onListeningTextColor;
    FLinearColor m_onListeningBorderBrushColor;
    FLinearColor m_onHoveredBorderBrushColor;

};

class UInputSelectorWidget : public UHKUserWidget
{
    class USoundBase* m_onListeningCancelSound;
    class UHKButton* Button;
    class UHKTextBlock* Text;
    class UKeyIconWidget* KeyIcon;
    FText m_waitingText;
    TSet<FKey> m_escapeKeys;
    FLinearColor m_onListeningTextColor;

};

class UInputSettingsWidget : public UHKUserWidget
{
    class UCheckBoxWidget* InvertLookXCheckBox;
    class UCheckBoxWidget* InvertLookYCheckBox;
    class USliderBoxWidget* LookSensitivitySliderBox;
    class UHKButton* RebindButton;
    class UHKButton* BackButton;
    class UHKButton* DefaultsButton;
    class UHKTextBlock* SwitchTabTextBlock;
    class UHKButton* TabLeftButton;
    class UHKButton* TabRightButton;
    float m_minLookSensitivity;
    float m_maxLookSensitivity;
    FText m_resetToDefaultsDialogText;

};

class UInputSubsystemSettings : public UHKSubsystemSettings
{
    TMap<class FKey, class FKey> QwertyToAzerty;
    TMap<class FKey, class FKey> QwertyToQwertz;

};

class UInputSubsystem : public UHKGameSubsystem
{
    FInputSubsystemOnControllerTypeChanged OnControllerTypeChanged;
    void OnControllerTypeChangedEvent();
    class UInputComponent* m_inputComponent;

    void OnControllerTypeChangedEvent__DelegateSignature();
    EGameControllerType GetGameControllerType(bool _forceGamepad);
    TArray<FKey> GetBindingKeys(const FName& _name);
    FKey GetBindingKey(const FName& _name);
};

class AInteractionFeedback : public AActor
{
    class UCatUsableComponentBase* m_usable;

    void OnUsableChanged(class UCatUsableComponentBase* _previousUsable, class UCatUsableComponentBase* _currentUsable);
    class UCatUsableComponentBase* GetUsable();
    TEnumAsByte<EInteractionFeedbackState> GetState();
};

class UIntroWidget : public UHKUserWidget
{
    float m_maximumFlashingOpacity;
    float m_minimumFlashingOpacity;
    float m_flashingSpeed;
    class UWidgetAnimation* FadeAnimation;
    class UImage* SavingIconImage;

    void ShowGammaSetting();
    bool IsPcBuild();
    void _OpenMenu();
    void _OnSkipButtonPressed(FKey _key);
};

class AItemSelector : public AActor
{
    class ABackpack* M_BackPack;
    class UBackpackUsableComponent* m_usable;

    void OnSelectionExit();
    void OnSelectionEnter(class UBackpackUsableComponent* _usable);
    FTransform GetSelectionBoxTransform();
    void GetSelectionBox(FVector& _outOrigin, FVector& _outExtent);
    class UBackpackUsableComponent* GetSelectedUsable();
    class ABackpack* GetBackpack();
};

struct FSpeedAnimationData
{
    class UAnimSequence* MoveAnimation;
    TArray<FJumpAnimationData> JumpAnimations;

};

class UJumpAnimationLibrary : public UPrimaryDataAsset
{
    TMap<class FName, class FSpeedAnimationData> JumpAnimations;

    bool Check();
};

class UKeyIconWidget : public UUserWidget
{

    void SetKey(const FKey& _key);
    void SetIsSelected(bool _isSelected);
    bool IsKeyboardColumnHidden();
};

class ALevelScript : public AActor
{
    class USaveComponent* m_saveComponent;

    void OnInitialise(EChapter _chapter);
    void _OnStreamingGroupSaveLoaded(class UStreamingGroup* _streamingGroup);
};

class ULifeComponent : public UActorComponent
{
    FLifeComponentOnTakeDamage OnTakeDamage;
    void LifeComponenTakeDamagetDelegate(class ULifeComponent* _lifeComponent, class AActor* _damageApplier, float _damageAmount);
    FLifeComponentOnKilled OnKilled;
    void LifeComponentKilledDelegate(class ULifeComponent* _lifeComponent, class AActor* _killer);
    FLifeComponentOnRevived OnRevived;
    void LifeComponentRevivedDelegate(class ULifeComponent* _lifeComponent);
    FLifeComponentOnRegeneration OnRegeneration;
    void LifeComponentRegenerationDelegate(class ULifeComponent* _lifeComponent, float _life);
    bool m_canTakeDamage;
    float m_maxLife;
    float m_regenerationCoolDownAfterDamage;
    float m_regenerationTime;
    float m_regenerationPerTime;

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
};

class UListBoxWidget : public UHKUserWidget
{
    class UHKBorder* SelectionBorder;
    class UHKButton* LeftButton;
    class UHKButton* RightButton;
    class UHKTextBlock* Text;
    class UHKTextBlock* ListBoxText;
    class UHKBorder* Border;
    FText m_listBoxText;
    FLinearColor m_selectedTextColor;
    FLinearColor m_selectedSelectionBorderColor;

};

class ULoadingScreenSettings : public UHKSubsystemSettings
{
    float TimeWithoutLoadingBeforeEndingScreen;
    class USoundBase* LoadingScreenSound;
    float LoadingScreenSoundVolume;
    float LoadingScreenSoundFadeInDuration;
    float LoadingScreenSoundFadeOutDuration;

};

class ULoadingScreenSubsystem : public UHKGameSubsystem
{
    class UAudioComponent* m_loadingAudio;

    bool IsLoadingScreenOn();
    void EndLoadingScreen();
    void BeginLoadingScreen();
};

class UHKLoadingScreen : public UWidget
{
};

class ILookAtInterface : public IInterface
{

    FVector GetLookAtOffset();
};

class ULootableComponent : public UDroneUsableComponent
{
    FLootableComponentOnLooted OnLooted;
    void LootableLootedSignature(class ULootableComponent* _lootable);
    FLootableComponentOnDroped OnDroped;
    void LootableDropedSignature(class ULootableComponent* _lootable);
    class UTexture* Icon;
    FName ID;

    void LootableLootedSignature__DelegateSignature(class ULootableComponent* _lootable);
    void LootableInteractionStartSignature__DelegateSignature();
    void LootableInteractionEndSignature__DelegateSignature();
    void LootableDropedSignature__DelegateSignature(class ULootableComponent* _lootable);
    bool HasID(FName _id);
};

class UMainMenuWidget : public UHKUserWidget
{
    class UHKButton* StartButton;
    class UHKButton* OptionsButton;
    class UHKButton* CreditsButton;
    class UHKButton* QuitButton;
    class UHKButton* SelectButton;
    class UHKButton* BackButton;
    class UTextBlock* VersionText;
    TMap<class FString, class UTexture2D*> ChapterImages;
    TSoftObjectPtr<UWorld> m_creditsLevel;
    FText m_quitDialogText;
    FLinearColor m_fadeBeginColor;
    FLinearColor m_fadeEndColor;
    float m_fadeDuration;
    float m_creditsFadeDuration;

};

class AMenuGameMode : public AGameModeBase
{
};

class UNoisableComponent : public UBoxComponent
{
    FNoisableComponentOnNoised OnNoised;
    void NoiseDelegate(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);

    void SetEnabled(bool _enable);
    bool OnNoise(FVector _location, class AActor* _emitter);
    void NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    bool IsEnabled();
};

class UMeowableComponent : public UNoisableComponent
{
};

class UMovingActorComponent : public UActorComponent
{

    void Reset();
    FTransform PredictTransform(const FTransform& _transform, float _dt);
    void _OnAfterLoaded(class USaveComponent* _saveComponent);
};

class UPauseMenuWidget : public UHKUserWidget
{
    class UHKButton* ResumeButton;
    class UHKButton* OptionsButton;
    class UHKButton* ReloadCheckpointButton;
    class UHKButton* QuitButton;
    class UHKButton* SelectButton;
    class UHKButton* BackButton;
    class UTextBlock* VersionText;
    class UTextBlock* LastCheckPointTime;
    FText m_lastCheckPointTimeText;
    FText m_reloadCheckpointDialogText;
    FText m_reloadCheckpointDurationText;
    FText m_reloadCheckpointTimeText;
    FText m_noCheckpointDialogText;
    FText m_backButtonDialogText;
    FText m_quitDialogText;

};

class UPhoto : public UObject
{
    TArray<FText> ScannedNames;
    class UTexture2D* Texture;

};

class UPhysicsEventsComponent : public UActorComponent
{
    bool CanImpact;
    float ImpactThreshold;
    float ImpactMinVelocity;
    float ImpactMaxVelocity;
    bool CanSlide;
    float SlidingMinVelocity;
    float SlidingMaxVelocity;
    bool CanRoll;
    float RollingMinVelocity;
    float RollingMaxVelocity;
    float SurfaceMovingMinVelocity;
    float SurfaceMovingMaxVelocity;
    bool Debug;
    FPhysicsEventsComponentSurfaceMovingBegin SurfaceMovingBegin;
    void SurfaceMovingDelegate(class UPhysicsEventsComponent* _physicsEventsComponent);
    FPhysicsEventsComponentSurfaceMovingEnd SurfaceMovingEnd;
    void SurfaceMovingDelegate(class UPhysicsEventsComponent* _physicsEventsComponent);
    FPhysicsEventsComponentImpact Impact;
    void ImpactDelegate(class UPhysicsEventsComponent* _physicsEventsComponent, FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);
    class UMeshComponent* m_meshToObserve;

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
};

class UProximitySweepProbe : public UObject
{
};

class UProximityProbeComponent : public USceneComponent
{
    bool IgnoreRight;
    bool IgnoreLeft;
    bool IgnoreUp;
    bool IgnoreDown;
    bool IgnoreFront;
    bool IgnoreBack;
    float ProbeEndDistance;
    float ProbeStartDistance;
    float ProbeRadius;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    class UProximitySweepProbe* m_probes;

    bool IsObstacleDetected(TEnumAsByte<EProximityProbeDirection> _probeIndex);
    FVector GetObstacleLocation(TEnumAsByte<EProximityProbeDirection> _probeIndex);
    float GetObstacleDistance(TEnumAsByte<EProximityProbeDirection> _probeIndex);
};

class UReticuleWidget : public UHKUserWidget
{
};

class URichTextBlockKeyIconDecorator : public URichTextBlockDecorator
{
    TSubclassOf<class UBindingIconWidget> m_widgetClass;
    class UBindingIconWidget* m_widget;

};

class USaveComponent : public UActorComponent
{
    FSaveComponentBeforeSaved BeforeSaved;
    void SaveLoadDelegate(class USaveComponent* _saveComponent);
    FSaveComponentAfterLoaded AfterLoaded;
    void SaveLoadDelegate(class USaveComponent* _saveComponent);
    bool m_enabled;
    bool m_doSaveTransforms;
    FName m_levelNameOverride;

    void SetEnabled(bool _enabled);
    void SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    bool IsRegistered();
    bool IsEnabled();
};

class USaveGameDataAsset : public UPrimaryDataAsset
{
    FString saveName;
    class UHKSaveGame* SaveGame;

    void ImportSave();
};

class USaveIconWidget : public UHKUserWidget
{
    float m_minimumFlashingDuration;
    float m_minimumFlashingOpacity;
    float m_maximumFlashingOpacity;
    float m_flashingSpeed;

};

class USaveMenuWidget : public UHKUserWidget
{
    class USaveSlotWidget* SaveSlot1;
    class USaveSlotWidget* SaveSlot2;
    class USaveSlotWidget* SaveSlot3;
    class UHKButton* SelectButton;
    class UHKButton* BackButton;
    class USoundBase* m_onBackSound;

};

class USaveSlotWidget : public UHKUserWidget
{
    class UImage* ChapterImageBackground;
    class UImage* ChapterImageSelectionBackground;
    class UHKButton* MainButton;
    class UHKTextBlock* ImageText;
    class UHKTextBlock* TitleText;
    class UHKTextBlock* ChapterText;
    class UHKTextBlock* DurationText;
    class UHKTextBlock* MemoryText;
    class UHKTextBlock* StartButtonText;
    class UVerticalBox* MenuBox;
    class UHKButton* StartButton;
    class UHKButton* ChapterButton;
    class UHKButton* ClearButton;
    class UTexture2D* m_emptySaveSlotImage;
    float m_unSelectedOpacity;
    FText m_slotTitleText;
    FText m_memoryText;
    FText m_clearSlotDialogText;
    FText m_startGameText;
    FText m_newGameText;
    FText m_continueText;
    FText m_durationText;
    class UHKSaveGame* m_slotInfo;

};

class UScannableComponent : public UBoxComponent
{
    bool EnabledOnStart;
    FText DisplayName;
    TSubclassOf<class AActor> ClueActorClass;

    void SetScannableEnabled(bool _value);
    bool IsScannableEnabled();
};

class AScriptedJump : public AActor
{
    class USceneComponent* m_root;
    class USceneComponent* m_begin;
    class USceneComponent* m_animationBegin;
    class USceneComponent* m_end;
    class USceneComponent* m_animationEnd;
    float m_entryRadius;
    float m_entryAngle;
    class UAnimSequence* m_forwardAnimation;
    class UAnimSequence* m_backAnimation;

    void ViewportTick(float _dt);
    class USceneComponent* GetUpEntry();
    class USceneComponent* GetDownEntry();
    void _OnEntryEndOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex);
    void _OnEntryBeginOverlap(class UPrimitiveComponent* _overlappedComponent, class AActor* _otherActor, class UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
};

struct FTraceBoneName
{
    TArray<FName> BoneNames;

};

class ASentinel : public ACharacter
{
    FSentinelOnSentinelSettingsChanged OnSentinelSettingsChanged;
    void SentinelEventDelegate();
    FSentinelOnSentinelAggressivityChanged OnSentinelAggressivityChanged;
    void SentinelBoolEventDelegate(bool status);
    FSentinelOnSentinelActivityChanged OnSentinelActivityChanged;
    void SentinelBoolEventDelegate(bool status);
    FSentinelOnSentinelLockedTargetChanged OnSentinelLockedTargetChanged;
    void SentinelLockedTargetEventDelegate(class AActor* _targetActor);
    TArray<class ATargetPoint*> m_waypoints;
    FSmootherRotation m_rotationSmoother;
    class UNavigationQueryFilter* m_navigationQueryFilter;
    class USplineComponent* m_splinePathFindComponent;
    class USentinelSettings* m_sentinelSettings;
    bool m_drawDebug;
    class UStreamingComponent* m_streamingComponent;
    class UHierarchicalStateMachine* m_sentinelStateMachine;
    TMap<class USkeletalMesh*, class FTraceBoneName> m_bonesNameForVisionDetection;
    bool m_startSentinelActive;
    class AActor* m_lockedTargetActor;

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
};

class ASentinelProjectile : public AActor
{
    FSentinelProjectileFSentinelProjectileStateChanged FSentinelProjectileStateChanged;
    void SentinelProjectileStateChangedDelegate(ESentinelProjectileState _newState);
    FSentinelProjectileFOnProjectileHit FOnProjectileHit;
    void SentinelProjectileOnHitDelegate(const FHitResult& _hitResult);
    class USphereComponent* m_projectileSphereColliderComponent;
    class UProjectileMovementComponent* m_projectileMovementComponent;
    class UHierarchicalStateMachine* m_projectileStateMachine;
    ESentinelProjectileState m_currentSentinelProjectileState;

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
};

class USentinelSettings : public UPrimaryDataAsset
{
    bool Aggressive;
    float MinimumDistanceDetectionWhenTargetIsHiding;
    float VisionLightRotationSpeed;
    float ForwardLocationPrediction;
    float ForwardDirectionPrediction;
    float DistanceFromTargetToStartBraking;
    float ReachAcceptanceDistance;
    float RotationToMovementInTime;
    float InactiveZOffset;
    float PatrolZOffset;
    float DetectZOffset;
    float SearchingZOffset;
    float ChasingZOffset;
    float ZOffsetMovementTime;
    float PatrolMovementSpeed;
    float DetectMovementSpeed;
    float SearchingMovementSpeed;
    float ChasingMovementSpeed;
    float InactiveEyeRadius;
    float PatrolEyeRadius;
    float DetectionEyeRadius;
    float SearchingEyeRadius;
    float ChasingEyeRadius;
    FLinearColor InactiveStateColor;
    FLinearColor PatrolStateColor;
    FLinearColor SearchingStateColor;
    FLinearColor DetectStateColor;
    FLinearColor ChasingStateColor;
    TSubclassOf<class ASentinelProjectile> TazerProjectileClass;
    float TazerInterShootDelay;
    float TazerReloadTime;
    int32 TazerMaxShootCount;
    float TazerMinimumShootingDistance;
    float TazerShootingDistanceHysteresis;
    float TazerLoadingTime;
    float TazerUnLoadingTime;
    FVector2D TazerTrackingTimeReaction;
    float TazerInnerRadiusPrecision;
    float TazerOutterRadiusPrecision;
    float TazerPrecisionScaleUpTime;
    float TazerPrecisionScaleDownTime;
    float PatrolToSoundDetectionTimeInSecond;
    float PatrolToVisionDetectionTimeInSecond;
    float DetectSoundToSearchingTimeInSecond;
    float DetectVisionToChasingTimeInSecond;
    float DetectVisionToPatrolTimeInSecond;
    float SearchingViewToChasingTimeInSecond;
    float SearchingToPatrolWaitTimeInSecond;
    float SearchingScanAngleInDegree;
    float SearchingScanCount;
    float ChasingVisionLostTime;

};

class ASequence : public AEditorTickingActor
{
    class USaveComponent* m_saveComponent;
    class UStreamingComponent* m_streamingComponent;
    class UBillboardComponent* m_billboard;
    bool m_autoStartSequence;
    FString m_checkpointName;

    void StartSequence();
    void SetCheckpoint(FName _name);
    void OnStartSequence();
    void OnStartFromCheckpoint();
    FName GetCheckpoint();
    void _OnStreamedIn(class UStreamingComponent* _streamingComponent);
};

class USettingsMenuWidget : public UHKUserWidget
{
    class UTabButtonWidget* AudioButton;
    class UTabButtonWidget* GraphicsButton;
    class UTabButtonWidget* InputButton;
    class UTabButtonWidget* GameplayButton;
    class UAudioSettingsWidget* AudioSettings;
    class UGraphicsSettingsWidget* GraphicsSettings;
    class UInputSettingsWidget* InputSettings;
    class UGameplaySettingsWidget* GameplaySettings;
    FText m_applySettingsDialogText;

};

class USliderBoxWidget : public UHKUserWidget
{
    class UHKBorder* Border;
    class UHKTextBlock* SliderText;
    class UHKButton* LeftButton;
    class UHKButton* RightButton;
    class UHKSlider* Slider;
    int32 m_notchCount;
    class USoundBase* m_onSliderValueChangeSound;
    FLinearColor m_borderHoveredColor;
    FLinearColor m_textHoveredColor;
    FLinearColor m_sliderBarHoveredColor;
    FLinearColor m_sliderHandleHoveredColor;
    FText Text;

};

class USplineRailConnection : public UObject
{
    class USplineRailComponent* Rail;
    class USphereComponent* Collider;

};

class USplineRailComponent : public USplineComponent
{
    float Width;
    float Height;
    float TrajectoryRaycastEndOffset;
    FSplineRailComponentAfterCatEntered AfterCatEntered;
    void RailCatDelegate(class USplineRailComponent* _rail, class ACatPawn* _cat);
    FSplineRailComponentBeforeCatExited BeforeCatExited;
    void RailCatDelegate(class USplineRailComponent* _rail, class ACatPawn* _cat);
    class UProceduralMeshComponent* m_proceduralMeshComponent;
    class UBoxComponent* m_encapsulatingCollider;
    class UStreamingComponent* m_streamingComponent;
    class USplineRailConnection* m_beginGroundConnection;
    class USplineRailConnection* m_endGroundConnection;
    bool m_enabled;
    bool m_drawMesh;
    bool m_isBucket;
    bool m_enableBeginConnection;
    bool m_enableEndConnection;
    float m_additionalEncapsulatingColliderSize;
    float m_samplingStep;
    bool m_debug;
    float m_connectionRaycastDistance;
    float m_connectionRadius;
    TArray<class ACatPawn*> m_ridingCats;

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
};

class ASplineRailManager : public AManager
{
};

class UStatSubsystem : public UHKGameSubsystem
{

    void ResetCount(EStatEvent _id);
    void OnEvent(EStatEvent _id, int32 _increment);
    int32 GetDeltaMilliseconds();
    void _OnGameSaved(class UHKSaveInstance* _saveInstance);
    void _OnGameLoaded(class UHKSaveInstance* _saveInstance);
};

struct FComponentPhysicsSettings
{
};

class UStreamingComponent : public UActorComponent
{
    bool bDoNotTickUntilStreamedIn;
    bool bDisablePhysicsUntilStreamedIn;
    FStreamingComponentStreamedIn StreamedIn;
    void StreamingComponentDelegate(class UStreamingComponent* _component);
    FStreamingComponentStreamedOut StreamedOut;
    void StreamingComponentDelegate(class UStreamingComponent* _component);
    TMap<class FName, class FComponentPhysicsSettings> m_componentsPhysicsSettings;

    void StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetComponentSimulatePhysics(class UPrimitiveComponent* _component, bool _simulatePhysics);
    void SetComponentCollisionEnabled(class UPrimitiveComponent* _component, TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled);
    bool IsStreamedIn();
    void BlueprintOnStreamOut();
    void BlueprintOnStreamIn();
};

class UStreamingUnit : public UObject
{
    class UStreamingGroupDynamic* m_streamingGroup;
    class ULevelStreaming* m_levelStreaming;

    void _OnLevelStreamingUnloaded();
    void _OnLevelStreamingLoaded();
};

class UStreamingGroup : public UObject
{
    TArray<class UStreamingComponent*> m_streamingComponents;
    TArray<class UStreamingComponent*> m_pendingRegisterComponents;
    TArray<class UStreamingComponent*> m_pendingUnregisterComponents;

};

class UStreamingGroupPersistent : public UStreamingGroup
{
};

class UStreamingGroupDynamic : public UStreamingGroup
{
    TArray<class UStreamingUnit*> m_streamingUnits;

};

struct FStreamingGroupSavedState
{
    FName Name;
    bool IsActive;

};

class AStreamingGroupManager : public AManager
{
    FStreamingGroupManagerOnStreamingGroupSaveLoaded OnStreamingGroupSaveLoaded;
    void StreamingGroupSaveLoadedDelegate(class UStreamingGroup* StreamingGroup);
    TArray<class UStreamingGroupDynamic*> m_streamingGroups;
    class UStreamingGroupPersistent* m_persistentGroup;
    class USaveComponent* m_saveComponent;
    TArray<FStreamingGroupSavedState> m_savedGroupsStates;

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
};

class UTabButtonWidget : public UHKUserWidget
{
    class UHKButton* Button;
    class UTextBlock* ButtonTextBlock;
    class UImage* ButtonImage;
    FText ButtonText;

};

class UTalkableComponent : public UDroneUsableComponent
{
    FTalkableComponentDialogBegan DialogBegan;
    void TalkableDelegate(class UTalkableComponent* _talkableComponent);
    FTalkableComponentDialogEnded DialogEnded;
    void TalkableDelegate(class UTalkableComponent* _talkableComponent);
    FTalkableComponentDialogLineBegan DialogLineBegan;
    void TalkableLineDelegate(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    FTalkableComponentDialogLineDisplayed DialogLineDisplayed;
    void TalkableLineDelegate(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    FTalkableComponentDialogLineEnded DialogLineEnded;
    void TalkableLineDelegate(class UTalkableComponent* _talkableComponent, const FDialogLine& _line);
    FText m_notMetTextFormat;
    float m_callBeforeDialogTime;
    bool m_useB12Voice;
    bool m_alreadyMet;
    class ADialog* m_dialog;
    TSubclassOf<class ADialog> m_dialogClass;
    FColor m_primaryColor;
    FColor m_secondaryColor;
    bool m_isMet;
    bool m_turnTowardInterlocutor;
    float m_movementRange;
    float m_speedLimit;
    class ACharacterDroid* m_droidOwner;
    class ULootableComponent* m_itemToShow;

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
};

class UVoiceBank : public UDataAsset
{
    TArray<class USoundBase*> VoiceSounds;

};

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
};

class UZurgAttackPointComponent : public USphereComponent
{
    FZurgAttackPointComponentOnZurgAttached OnZurgAttached;
    void ZurgAttackPointComponentDelegate(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    FZurgAttackPointComponentOnZurgDetached OnZurgDetached;
    void ZurgAttackPointComponentDelegate(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);

    void ZurgAttackPointComponentDelegate__DelegateSignature(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    class AZurgPawnSlave* GetAttachedZurg();
    void DetachZurg();
    void AttachZurg(class AZurgPawnSlave* _zurg);
    void _OnSphereBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class UZurgAttackPointManagerComponent : public UActorComponent
{
    FInt32Range m_zurgCountDamageMultiplicator;

    void SetAttackPointsActive(bool _active);
    void OnZurgDetached(class UZurgAttackPointComponent* _zurgAttackPoint, class AZurgPawnSlave* _zurg);
    void OnZurgAttached(class UZurgAttackPointComponent* _zurgAttackPoint, class AZurgPawnSlave* _zurg);
    bool IsAttackPointsActive();
    void _OnLifeComponentKilled(class ULifeComponent* _lifeComponent, class AActor* _killer);
};

class UZurgCharacterMovementComponent : public UCharacterMovementComponent
{
};

class UZurgInterestPointComponent : public USceneComponent
{
};

struct FLightToSlaveTrace
{
    class UAntiZurgSpotlightComponent* Light;
    class AZurgPawnSlave* slave;

};

struct FLightToLightableTrace
{
    class UAntiZurgSpotlightComponent* Light;
    class UAntiZurgLightableComponent* lightable;

};

struct FSlaveTick
{
    class AZurgPawnSlave* slave;

};

struct FLeaderTick
{
    class AZurgPawnLeader* leader;

};

struct FSlaveSpawnRequest
{
    class AZurgPawnLeader* leader;

};

struct FSlaveKillRequest
{
    class AActor* damageApplier;
    class AZurgPawnSlave* slave;

};

class AZurgManager : public AManager
{
    float m_leaderDeactivationDistance;
    FZurgManagerOnZurgLeaderSpawnedDelegate OnZurgLeaderSpawnedDelegate;
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgLeaderDestroyedDelegate OnZurgLeaderDestroyedDelegate;
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgLeaderActivatedDelegate OnZurgLeaderActivatedDelegate;
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgLeaderDeactivatedDelegate OnZurgLeaderDeactivatedDelegate;
    void ZurgManagerLeaderDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgManagerOnZurgSlaveSpawnedDelegate OnZurgSlaveSpawnedDelegate;
    void ZurgManagerSlaveDelegate(class AZurgPawnSlave* _newZurg);
    FZurgManagerOnZurgSlaveDestroyedDelegate OnZurgSlaveDestroyedDelegate;
    void ZurgManagerSlaveDelegate(class AZurgPawnSlave* _newZurg);
    TSubclassOf<class AZurgPawnSlave> m_slaveBP;
    int32 m_maxSlaveTicksPerFrame;
    float m_slaveLODDistanceScale;
    int32 m_slavePoolInitialSize;
    int32 m_maxActivatedZurgCount;
    int32 m_maxSlaveSpawnPerFrame;
    int32 m_maxLeaderTicksPerFrame;
    float m_deactivationDistanceHysteresis;
    class ARecastNavMesh* m_navMesh;
    class UHKGameInstance* m_hkGameInstance;
    class ACatPawn* m_catPawn;
    class UAnimationSharingManager* m_animationSharingManager;
    class UAnimationSharingSetup* m_animationSharingSetup;
    TArray<class UAntiZurgSpotlightComponent*> m_antiZurgLights;
    TArray<class UAntiZurgLightableComponent*> m_antiZurgLightables;
    TArray<FLightToSlaveTrace> m_lightToSlaveTraces;
    TArray<FLightToLightableTrace> m_lightToLightableTraces;
    TArray<FSlaveTick> m_slaveTickList;
    TArray<FLeaderTick> m_leaderTickList;
    TArray<class AZurgPawnSlave*> m_slavePool;
    TArray<FSlaveSpawnRequest> m_slaveSpawnRequestQueue;
    TArray<FSlaveKillRequest> m_slaveKillQueue;

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
};

class UZurgNewSettings : public UPrimaryDataAsset
{
    int32 Life;
    int32 LifeRandomDelta;
    float LifeRegenerationTime;
    float LifeRegenerationCoolDownAfterDamage;
    float LifeRegenerationPerTime;
    FVector2D ChasingMovementMaxSpeed;
    FVector2D ChasingMovementAcceleration;
    FVector2D ChasingMovementGroundFriction;
    FVector2D ChasingMovementRandomRadius;
    FVector2D AngryMovementMaxSpeed;
    FVector2D AngryMovementAcceleration;
    FVector2D AngryMovementGroundFriction;
    FVector2D AngryMovementRandomRadius;
    FVector2D AlertMovementMaxSpeed;
    FVector2D AlertMovementAcceleration;
    FVector2D AlertMovementGroundFriction;
    FVector2D AlertMovementRandomRadius;
    FVector2D RoutineMovementMaxSpeed;
    FVector2D RoutineMovementAcceleration;
    FVector2D RoutineMovementGroundFriction;
    FVector2D RoutineMovementRandomRadius;
    class UBlendSpace* CustomMovementBlendSpace;
    FVector2D UnderLightMovementMaxSpeed;
    FVector2D UnderLightMovementAcceleration;
    FVector2D UnderLightMovementGroundFriction;
    float Precision;
    int32 MinimumZurgCountCloseToTargetToAttack;
    float MinimalSwarmAttackDistance;
    float MaximumJumpAttackDistance;
    float MaximumHeightAttackDistance;
    float AttackFuzzyDelay;
    FVector2D AttackJumpArc;
    float KamikazePercentage;
    float DamageToApplyPerSecond;
    float TimeToKillCatInSecond;
    float StruggleGaugeSize;
    float SpeedModifier;
    bool AttachOnCatWhenHit;
    float DistanceToAttachOnCat;
    float VisionOffset;
    float VisionUpperHeight;
    float VisionLowerHeight;
    float StatePropagationTime;
    float AngryToRoutineWaitTime;
    float AlertedToChasingWaitTime;
    float AlertedWhileSleepingToChasingWaitTime;
    float ProximityDetectionRadius;
    float UnderLightWakeUpTime;

};

class AZurgPawn : public ACharacter
{
    class UZurgSettings* ZurgSettings;

    void OnDetachedFromCat(class ACatPawn* _catPawn, class USceneComponent* _attachedComponent, FName _socketName);
    void OnAttachedToCat(class ACatPawn* _catPawn, class USceneComponent* _attachedComponent, FName _socketName);
    bool CanGrabCat();
};

struct FSpawningRequest
{
    int32 SpawnCount;
    float TimeInterval;
    float Duration;
    float BeginTime;
    int32 ID;

};

class AZurgPawnLeader : public APawn
{
    class UZurgNewSettings* SwarmSettings;
    FZurgPawnLeaderOnZurgLeaderActivated OnZurgLeaderActivated;
    void ZurgLeaderEventDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgPawnLeaderOnZurgLeaderDeactivated OnZurgLeaderDeactivated;
    void ZurgLeaderEventDelegate(class AZurgPawnLeader* _zurgLeader);
    FZurgPawnLeaderOnZurgSlaveSpawned OnZurgSlaveSpawned;
    void ZurgLeaderSlaveEventDelegate(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    FZurgPawnLeaderOnZurgSlaveDestroyed OnZurgSlaveDestroyed;
    void ZurgLeaderSlaveEventDelegate(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    FZurgPawnLeaderOnZurgSlaveKilled OnZurgSlaveKilled;
    void ZurgLeaderSlaveOnKilledEventDelegate(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave, class AActor* _killer);
    TSubclassOf<class AZurgPawnSlave> m_slaveClass;
    EZurgState m_initialSwarmState;
    int32 m_zurgSpawnCount;
    class AZurgSpawningBox* m_spawningBox;
    float m_spawningRadius;
    TSubclassOf<class UNavigationQueryFilter> m_movementQueryFilterClass;
    TEnumAsByte<ECollisionChannel> m_visionTraceChannel;
    class UNoisableComponent* m_noisableComponent;
    class UBoxComponent* m_damagableDetector;
    class ULightableComponent* m_lightableComponent;
    bool m_isAlreadySpawned;
    int32 m_slaveLeftBeforeSave;
    class UStreamingComponent* m_streamingComponent;
    class ACatPawn* m_cachedPlayerCatPawn;
    bool m_canBeManaged;
    TArray<FSpawningRequest> m_spawningRequests;
    class UHierarchicalStateMachine* m_stateMachine;
    EZurgState m_currentState;
    EZurgState m_beforeIdleState;
    EZurgLOD m_currentLOD;
    FVector m_swarmCenter;
    TArray<class AZurgPawnSlave*> m_zurgSlaves;
    TMap<AActor*, int32> m_actorToView;
    TArray<class AActor*> m_visibleActors;
    TArray<class AActor*> m_visionOverlappingActors;
    class USaveComponent* m_saveComponent;
    bool m_drawDebug;

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
};

class AZurgPawnSlave : public ACharacter
{
    FZurgPawnSlaveOnKilledDelegate OnKilledDelegate;
    void ZurgOnKilledDelegate(class AZurgPawnSlave* _zurgPawn, class AActor* _killer);
    FZurgPawnSlaveOnZurgExitGrabbing OnZurgExitGrabbing;
    void ZurgExitGrabbingDelegate(class AZurgPawnSlave* _zurgPawn);
    class ULifeComponent* m_lifeComponent;
    class USphereComponent* m_damagableSphereDetector;
    class UDamagableLightableComponent* m_damagableLightableComponent;
    TSubclassOf<class AActor> m_deathFxActorClass;
    float m_minimalLightIntensityToAvoid;
    float m_maxAccelerationTarget;
    float m_maxWalkSpeedTarget;
    class UZurgNewSettings* m_currentZurgSettings;
    class UHierarchicalStateMachine* m_stateMachine;
    TSubclassOf<class UNavigationQueryFilter> m_movementQueryFilterClass;
    class UZurgCharacterMovementComponent* m_zurgMovementComponent;
    FVector m_currentMoveToLocation;
    class USphereComponent* m_proximitySphereDetector;
    class USphereComponent* m_attachOnActorSphereCollider;

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
};

class UZurgSettings : public UPrimaryDataAsset
{
    float NormalSpeed;
    float MinAttackSpeed;
    float MaxAttackSpeed;
    float MinAttackSpeedDistance;
    float MaxAttackSpeedDistance;
    float JumpRange;
    float JumpAnticipationRatio;
    float DelayBeforeJump;
    float DelayBeforeJumpRandomRange;
    float DelayBetweenJumps;
    float JumpArcRatio;
    float JumpArrivalRandomZoneRadius;
    float EjectDistance;
    float EjectDistanceRandomRange;
    float EjectStunTime;
    float SightRadius;
    float VisionConeAngleInDegrees;
    float SureVisionConeAngleInDegrees;
    float MinRatioToLoseSight;
    float JumpPerceptionHeightLimit;
    float CloseEncounterRadius;
    float StruggleGaugeSize;
    float LifeDecayPerSecond;
    float SpeedModifier;
    float AlertsSize;
    float AlertsGrowingTime;
    float AlertsSustainTime;
    float MinDistanceBetweenAlerts;
    float TimeToBeSure;
    float TimeToBeSureRandomRange;
    float SureIntroductionStateDuration;
    float SureIntroductionStateDurationRandomRange;
    float SearchDuration;
    float SearchDurationRandomRange;
    float TimeBetweenDirectionChange;
    float TimeBetweenDirectionChangeRandomRange;
    bool PlayIntroductionOnRedetect;

};

class AZurgSpawningBox : public AActor
{
    float m_spawnVelocity;
    bool m_drawDebug;
    class USceneComponent* m_rootComponent;
    class UBoxComponent* m_spawningBoxComponent;
    class UArrowComponent* m_spawningVelocityDirectionArrowComponent;
    class UEditorTickComponent* m_editorTickComponent;

    FVector GetSuggestedSpawnVelocity();
    FVector GetRandomPointInBox();
    void _EditorTick(float _deltaTime);
};

struct FPendingInteraction
{
    class UBackpackUsableComponent* Usable;

};

struct FInteractionDebugData
{
    class UPrimitiveComponent* RaycastFailReason;

};

struct FCameraCollisionData
{
};

struct FCatPawnTickFunction : public FTickFunction
{
};

struct FCatPawnPostMovementTickFunction : public FCatPawnTickFunction
{
};

struct FCatPawnPostAnimationTickFunction : public FCatPawnTickFunction
{
};

struct FCatPawnPreAnimationTickFunction : public FCatPawnTickFunction
{
};

struct FCatPawnPreInputTickFunction : public FCatPawnTickFunction
{
};

struct FSequenceState
{
    class ASequence* Sequence;
    FName CheckpointName;

};

struct FDialogEvent
{
};

struct FGroundProbeOrthoDistanceField
{
};

struct FHKPlayerControllerPostUpdateTickFunction : public FTickFunction
{
};

struct FReferenceSpeed
{
    FName SpeedName;
    class UAnimSequence* Animation;
    float Speed;
    FTransform BeginMotion;

};

struct FSlaveGroup
{
    TArray<class AZurgPawnSlave*> Slaves;
    int32 groupId;

};

struct FMoveToFrameOrder
{
};

#endif
