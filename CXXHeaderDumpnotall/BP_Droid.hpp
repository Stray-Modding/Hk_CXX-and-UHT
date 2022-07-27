#ifndef UE4SS_SDK_BP_Droid_HPP
#define UE4SS_SDK_BP_Droid_HPP

class ABP_Droid_C : public ACharacterDroid
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_simpleLooper_C* COMP_simpleLooper arm;
    class UCOMP_simpleLooper_C* COMP_simpleLooper servo pitched;
    class UCOMP_simpleLooper_C* COMP_simpleLooper servo fixed;
    class UBoxComponent* HeadLightableCollider;
    class UGridSnappingComponent* GridSnapping;
    class ULightableComponent* lightable;
    class UArrowComponent* GUIFeedbackSocket;
    class UMeowableComponent* Meowable;
    class USceneComponent* TalkTransform;
    class USkeletalMeshComponent* Droid_Head;
    class UCOMP_CameraTarget_C* COMP_CameraTarget;
    class UCOMP_Voice_C* VoiceComponent;
    class UCapsuleComponent* Right Leg;
    class UCapsuleComponent* Left Leg;
    class USphereComponent* Drone_anchor;
    class USpotLightComponent* SpotLight;
    class UArrowComponent* Drone_anchor_arrow;
    FRandomStream randomstream heads;
    class UMaterialInstanceDynamic* Dynamat Body;
    class UMaterialInstanceDynamic* Dynamat Head;
    bool Anim_Add_?;
    FRandomStream randomstream colors;
    bool Cam_Fade_?;
    bool Random Colors ?;
    bool Seed Random Colors;
    bool Fill all colors/Ro/Metal ?;
    FLinearColor Fill Color;
    float Fill Ro;
    float Fill Metal;
    FLinearColor Color Head;
    float Ro Head;
    float Metal Head;
    FLinearColor Color Hears;
    float Ro Hears;
    float Metal Hears;
    FLinearColor Color Chest;
    float Ro Chest;
    float Metal Chest;
    FLinearColor Color Hips;
    float Ro Hips;
    float Metal Hips;
    FLinearColor Color Right Arm;
    float Ro Right Arm;
    float Metal Right Arm;
    FLinearColor Color Left Arm;
    float Ro Left Arm;
    float Metal Left Arm;
    FLinearColor Color Leg Right;
    float Ro Leg Right;
    float Metal Leg Right;
    FLinearColor Color Leg Left;
    float Ro Leg Left;
    float Metal Leg Left;
    FLinearColor Color Joint;
    float Ro Joint;
    float Metal Joint;
    TArray<FAttachedActor> AttachedActors;
    class UMaterialInstanceDynamic* dynamat2;
    bool Swap_TalkingAnimation;
    bool Override Material ?;
    class USoundWave* servoWave;
    float servoPitch;
    class UMaterialInstance* Overrided Material Instance;
    TArray<class USoundCue*> collision cues;
    class AActor* ActorToUseAtStart;
    bool bSetupShowDirection;
    float MovementTargetRotationAngle;
    float MovementTargetLastStepsForward;
    float MovementTargetLastStepsLateral;
    float MovementTargetSpeed;
    bool BlendShowDirectionWithIdle;
    class AActor* SetupShowDirectionActor;
    bool bEnableDialogCameraTargetTest;
    float MovementSpeedFactor;
    bool Random Movement Speed Factor ?;
    float LookAtHysteresis;
    float LookAtFuzzyDelay;
    bool RandomLookAtEnable;
    float LookAtOscillation;
    float LookAtOscillationDamping;
    float RandomSpeedMin;
    float RandomSpeedMax;
    float RandomLookAtDelayMinimum;
    float RandomLookAtDelayMaximum;
    TArray<class USkeletalMesh*> DroidHeadMeshes;
    TEnumAsByte<DroidHead_List> Head;
    bool Head Random ?;
    bool Seed Head Random;
    bool KeepIdleWhenMoving;
    bool Has Fallen;
    bool Is Carrying Object;
    int32 HeadRandomInt;
    TArray<class ASkeletalMeshActor*> Cloth Mesh;
    float DisturbedTime;
    float DisturbedRandomMaxTime;
    bool OrientTowardOnDisturbed;
    FLookAtData TempBeforeMeowedLookAtData;
    bool LookAtCatOnDistrubed;
    FVector TempDisturbedInitialOrientation;
    TSubclassOf<class ABP_Props_Throwable_C> ThrowingObjectClass;
    class ABP_Props_Throwable_C* CurrentThrowingObject;
    class AActor* ThrowingOnThisActor;
    class UAnimSequence* ThrowingObjectAnimation;
    class UAnimSequence* ThrowObjectOnMoewAnimation;
    bool bCanThrowObject;
    float PlayAnimationTime;
    float PlayAnimRandomMaxTime;
    class UAnimSequence* BehaviorPlayAnimation;
    FTimerHandle OnMeowBehaviorTimerHandle;
    class AActor* TempOnMeowedPlayAnimationToThisActor;
    bool bCanBeDazzled;
    class UAnimSequence* TempBehaviorAnimationToPlay;
    EDroidLookAtType TempBeforePlayAnimLookAtType;
    class UBlendSpace* DazzledBlendspace;
    FRotator DazzledDirectionRotator;
    float TempPlayAnimationTime;
    TSubclassOf<class UAnimInstance> ABP_Class;
    bool bRagdolFrontSideDown;
    float LookAtActivationAngleLimit;
    FRotator LookAtAngleLimit;
    FVector CustomHeadScale;
    class UBlendSpace* ShowDirectionBlendSpace;
    float ThrowingAnimationDuration;
    float ThrowingTrajectoryArc;
    bool ThrowingAnimationBlendWithIdle;
    bool ThrowingAnimationBlendWithIdleTemp;
    float ThrowingTrajectoryArcTemp;
    class USoundBase* footstep base;
    class UMaterialInstance* ScreenOnMeowed;
    bool ScreenOnMeowedPushed;
    float servo gain global;

    void SetMovementTargetAngle(float MovementTargetRotationAngle);
    void SetMovementTargetSpeed(float MovementTargetSpeed);
    void DestroyAttachedActors();
    void AddAttachedActor(FName Socket, class AActor* Actor, FVector Offset, FRotator OffsetRotation);
    TArray<class AActor*> GetVisionIgnoredActors();
    void SetScreenMaterial(class UMaterialInstance* MaterialInstance);
    void UserConstructionScript();
    void Posture_Ragdoll_Enter();
    void Posture_Ragdoll_Tick(float _dt);
    void Posture_Ragdoll_Exit();
    void OnRisingUpAnimationDone();
    void Posture_StandingUp_Enter();
    void Posture_StandingUp_Tick(float _dt);
    void Posture_StandingUp_Exit();
    void Posture_RisingUp_Enter();
    void Posture_RisingUp_Tick(float _dt);
    void Posture_RisingUp_Exit();
    void Posture_Stumbling_Enter();
    void Posture_Stumbling_Tick(float _dt);
    void Posture_Stumbling_Exit();
    void OnFallingToRagdoll();
    void Posture_Falling_Enter();
    void Posture_Falling_Tick(float _dt);
    void Posture_Falling_Exit();
    void OnStumblingAnimationDone();
    void OnRaise(class UAnimSequence* _raiseFromFrontAnimation, class UAnimSequence* _raiseFromBackAnimation);
    void BndEvt__Meowable_K2Node_ComponentBoundEvent_1_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void Behavior_PlayingAnimation_Enter();
    void Behavior_PlayingAnimation_Tick(float _dt);
    void Behavior_PlayingAnimation_Exit();
    void Behavior_Disturbed_Enter();
    void Behavior_Disturbed_Tick(float _dt);
    void Behavior_Disturbed_Exit();
    void Behavior_ThrowObject_Enter();
    void Behavior_ThrowObject_Exit();
    void Behavior_ThrowObject_Tick(float _dt);
    void Behavior_Dazzled_Enter();
    void Behavior_Dazzled_Tick(float _dt);
    void Behavior_Dazzled_Exit();
    void UpdateDazzled();
    void OnMeowPlayAnimationTimerEnd();
    void ThrowObjectTo(class UAnimSequence* _throwAnimation, class AActor* _throwToThisActor, float _trajectoryArc, bool _blendWithIdle);
    void OnThrowObject();
    void SetDisturbed(bool _disturbed);
    void OnDisturbedForDurationTimerEndedEvent();
    void SetDisturbedForDuration();
    void PlayAnimationBehavior(class UAnimSequence* _anim, class AActor* _lookAtActor, float _time, float _maxRandomTime);
    void BndEvt__Lightable_K2Node_ComponentBoundEvent_0_LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void BndEvt__Lightable_K2Node_ComponentBoundEvent_1_LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void OnThrowingExitStateStopLookAtTimerEvent();
    void OnDroidBehaviorChanged_Event_0(EDroidBehaviorState newBehavior);
    void End Screen Mat Meow Reaction();
    void Start Screen Mat Meow Reaction();
    void ChatDansLesPiedsPutain(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void OnScreenMaterialChanged(class UMaterialInstance* _materialInstance);
    void OnDialogLineBegan(class ADialog* _dialog);
    void OnDialogStopped();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_2_Phrase Started Play__DelegateSignature();
    void BndEvt__VoiceComponent_K2Node_ComponentBoundEvent_3_Phrase Stoppped Play__DelegateSignature();
    void OnActivate();
    void OnDeactivate();
    void OnDialogLineDisplayed(class ADialog* _dialog);
    void AttachClothes();
    void OnPreciseCatCollisionsEnabled(TEnumAsByte<ECollisionEnabled::Type> _collisionEnabled);
    void OnDisplayDebug(class UCanvas* _canvas);
    void DetachClothes();
    void BndEvt__BP_Droid_m_streamingComponent_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_Droid_m_streamingComponent_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Droid(int32 EntryPoint);
};

#endif