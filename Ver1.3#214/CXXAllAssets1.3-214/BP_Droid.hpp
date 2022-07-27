#ifndef UE4SS_SDK_BP_Droid_HPP
#define UE4SS_SDK_BP_Droid_HPP

class ABP_Droid_C : public ACharacterDroid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B00 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper arm;                                // 0x0B08 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper servo pitched;                      // 0x0B10 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper servo fixed;                        // 0x0B18 (size: 0x8)
    class UBoxComponent* HeadLightableCollider;                                       // 0x0B20 (size: 0x8)
    class UGridSnappingComponent* GridSnapping;                                       // 0x0B28 (size: 0x8)
    class ULightableComponent* lightable;                                             // 0x0B30 (size: 0x8)
    class UArrowComponent* GUIFeedbackSocket;                                         // 0x0B38 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0B40 (size: 0x8)
    class USceneComponent* TalkTransform;                                             // 0x0B48 (size: 0x8)
    class USkeletalMeshComponent* Droid_Head;                                         // 0x0B50 (size: 0x8)
    class UCOMP_CameraTarget_C* COMP_CameraTarget;                                    // 0x0B58 (size: 0x8)
    class UCOMP_Voice_C* VoiceComponent;                                              // 0x0B60 (size: 0x8)
    class UCapsuleComponent* Right Leg;                                               // 0x0B68 (size: 0x8)
    class UCapsuleComponent* Left Leg;                                                // 0x0B70 (size: 0x8)
    class USphereComponent* Drone_anchor;                                             // 0x0B78 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0B80 (size: 0x8)
    class UArrowComponent* Drone_anchor_arrow;                                        // 0x0B88 (size: 0x8)
    FRandomStream randomstream heads;                                                 // 0x0B90 (size: 0x8)
    class UMaterialInstanceDynamic* Dynamat Body;                                     // 0x0B98 (size: 0x8)
    class UMaterialInstanceDynamic* Dynamat Head;                                     // 0x0BA0 (size: 0x8)
    bool Anim_Add_?;                                                                  // 0x0BA8 (size: 0x1)
    FRandomStream randomstream colors;                                                // 0x0BAC (size: 0x8)
    bool Cam_Fade_?;                                                                  // 0x0BB4 (size: 0x1)
    bool Random Colors ?;                                                             // 0x0BB5 (size: 0x1)
    bool Seed Random Colors;                                                          // 0x0BB6 (size: 0x1)
    bool Fill all colors/Ro/Metal ?;                                                  // 0x0BB7 (size: 0x1)
    FLinearColor Fill Color;                                                          // 0x0BB8 (size: 0x10)
    float Fill Ro;                                                                    // 0x0BC8 (size: 0x4)
    float Fill Metal;                                                                 // 0x0BCC (size: 0x4)
    FLinearColor Color Head;                                                          // 0x0BD0 (size: 0x10)
    float Ro Head;                                                                    // 0x0BE0 (size: 0x4)
    float Metal Head;                                                                 // 0x0BE4 (size: 0x4)
    FLinearColor Color Hears;                                                         // 0x0BE8 (size: 0x10)
    float Ro Hears;                                                                   // 0x0BF8 (size: 0x4)
    float Metal Hears;                                                                // 0x0BFC (size: 0x4)
    FLinearColor Color Chest;                                                         // 0x0C00 (size: 0x10)
    float Ro Chest;                                                                   // 0x0C10 (size: 0x4)
    float Metal Chest;                                                                // 0x0C14 (size: 0x4)
    FLinearColor Color Hips;                                                          // 0x0C18 (size: 0x10)
    float Ro Hips;                                                                    // 0x0C28 (size: 0x4)
    float Metal Hips;                                                                 // 0x0C2C (size: 0x4)
    FLinearColor Color Right Arm;                                                     // 0x0C30 (size: 0x10)
    float Ro Right Arm;                                                               // 0x0C40 (size: 0x4)
    float Metal Right Arm;                                                            // 0x0C44 (size: 0x4)
    FLinearColor Color Left Arm;                                                      // 0x0C48 (size: 0x10)
    float Ro Left Arm;                                                                // 0x0C58 (size: 0x4)
    float Metal Left Arm;                                                             // 0x0C5C (size: 0x4)
    FLinearColor Color Leg Right;                                                     // 0x0C60 (size: 0x10)
    float Ro Leg Right;                                                               // 0x0C70 (size: 0x4)
    float Metal Leg Right;                                                            // 0x0C74 (size: 0x4)
    FLinearColor Color Leg Left;                                                      // 0x0C78 (size: 0x10)
    float Ro Leg Left;                                                                // 0x0C88 (size: 0x4)
    float Metal Leg Left;                                                             // 0x0C8C (size: 0x4)
    FLinearColor Color Joint;                                                         // 0x0C90 (size: 0x10)
    float Ro Joint;                                                                   // 0x0CA0 (size: 0x4)
    float Metal Joint;                                                                // 0x0CA4 (size: 0x4)
    TArray<FAttachedActor> AttachedActors;                                            // 0x0CA8 (size: 0x10)
    class UMaterialInstanceDynamic* dynamat2;                                         // 0x0CB8 (size: 0x8)
    bool Swap_TalkingAnimation;                                                       // 0x0CC0 (size: 0x1)
    bool Override Material ?;                                                         // 0x0CC1 (size: 0x1)
    class USoundWave* servoWave;                                                      // 0x0CC8 (size: 0x8)
    float servoPitch;                                                                 // 0x0CD0 (size: 0x4)
    class UMaterialInstance* Overrided Material Instance;                             // 0x0CD8 (size: 0x8)
    TArray<class USoundCue*> collision cues;                                          // 0x0CE0 (size: 0x10)
    class AActor* ActorToUseAtStart;                                                  // 0x0CF0 (size: 0x8)
    bool bSetupShowDirection;                                                         // 0x0CF8 (size: 0x1)
    float MovementTargetRotationAngle;                                                // 0x0CFC (size: 0x4)
    float MovementTargetLastStepsForward;                                             // 0x0D00 (size: 0x4)
    float MovementTargetLastStepsLateral;                                             // 0x0D04 (size: 0x4)
    float MovementTargetSpeed;                                                        // 0x0D08 (size: 0x4)
    bool BlendShowDirectionWithIdle;                                                  // 0x0D0C (size: 0x1)
    class AActor* SetupShowDirectionActor;                                            // 0x0D10 (size: 0x8)
    bool bEnableDialogCameraTargetTest;                                               // 0x0D18 (size: 0x1)
    float MovementSpeedFactor;                                                        // 0x0D1C (size: 0x4)
    bool Random Movement Speed Factor ?;                                              // 0x0D20 (size: 0x1)
    float LookAtHysteresis;                                                           // 0x0D24 (size: 0x4)
    float LookAtFuzzyDelay;                                                           // 0x0D28 (size: 0x4)
    bool RandomLookAtEnable;                                                          // 0x0D2C (size: 0x1)
    float LookAtOscillation;                                                          // 0x0D30 (size: 0x4)
    float LookAtOscillationDamping;                                                   // 0x0D34 (size: 0x4)
    float RandomSpeedMin;                                                             // 0x0D38 (size: 0x4)
    float RandomSpeedMax;                                                             // 0x0D3C (size: 0x4)
    float RandomLookAtDelayMinimum;                                                   // 0x0D40 (size: 0x4)
    float RandomLookAtDelayMaximum;                                                   // 0x0D44 (size: 0x4)
    TArray<class USkeletalMesh*> DroidHeadMeshes;                                     // 0x0D48 (size: 0x10)
    TEnumAsByte<DroidHead_List> Head;                                                 // 0x0D58 (size: 0x1)
    bool Head Random ?;                                                               // 0x0D59 (size: 0x1)
    bool Seed Head Random;                                                            // 0x0D5A (size: 0x1)
    bool KeepIdleWhenMoving;                                                          // 0x0D5B (size: 0x1)
    bool Has Fallen;                                                                  // 0x0D5C (size: 0x1)
    bool Is Carrying Object;                                                          // 0x0D5D (size: 0x1)
    int32 HeadRandomInt;                                                              // 0x0D60 (size: 0x4)
    TArray<class ASkeletalMeshActor*> Cloth Mesh;                                     // 0x0D68 (size: 0x10)
    float DisturbedTime;                                                              // 0x0D78 (size: 0x4)
    float DisturbedRandomMaxTime;                                                     // 0x0D7C (size: 0x4)
    bool OrientTowardOnDisturbed;                                                     // 0x0D80 (size: 0x1)
    FLookAtData TempBeforeMeowedLookAtData;                                           // 0x0D88 (size: 0x38)
    bool LookAtCatOnDistrubed;                                                        // 0x0DC0 (size: 0x1)
    FVector TempDisturbedInitialOrientation;                                          // 0x0DC4 (size: 0xC)
    TSubclassOf<class ABP_Props_Throwable_C> ThrowingObjectClass;                     // 0x0DD0 (size: 0x8)
    class ABP_Props_Throwable_C* CurrentThrowingObject;                               // 0x0DD8 (size: 0x8)
    class AActor* ThrowingOnThisActor;                                                // 0x0DE0 (size: 0x8)
    class UAnimSequence* ThrowingObjectAnimation;                                     // 0x0DE8 (size: 0x8)
    class UAnimSequence* ThrowObjectOnMoewAnimation;                                  // 0x0DF0 (size: 0x8)
    bool bCanThrowObject;                                                             // 0x0DF8 (size: 0x1)
    float PlayAnimationTime;                                                          // 0x0DFC (size: 0x4)
    float PlayAnimRandomMaxTime;                                                      // 0x0E00 (size: 0x4)
    class UAnimSequence* BehaviorPlayAnimation;                                       // 0x0E08 (size: 0x8)
    FTimerHandle OnMeowBehaviorTimerHandle;                                           // 0x0E10 (size: 0x8)
    class AActor* TempOnMeowedPlayAnimationToThisActor;                               // 0x0E18 (size: 0x8)
    bool bCanBeDazzled;                                                               // 0x0E20 (size: 0x1)
    class UAnimSequence* TempBehaviorAnimationToPlay;                                 // 0x0E28 (size: 0x8)
    EDroidLookAtType TempBeforePlayAnimLookAtType;                                    // 0x0E30 (size: 0x1)
    class UBlendSpace* DazzledBlendspace;                                             // 0x0E38 (size: 0x8)
    FRotator DazzledDirectionRotator;                                                 // 0x0E40 (size: 0xC)
    float TempPlayAnimationTime;                                                      // 0x0E4C (size: 0x4)
    TSubclassOf<class UAnimInstance> ABP_Class;                                       // 0x0E50 (size: 0x8)
    bool bRagdolFrontSideDown;                                                        // 0x0E58 (size: 0x1)
    float LookAtActivationAngleLimit;                                                 // 0x0E5C (size: 0x4)
    FRotator LookAtAngleLimit;                                                        // 0x0E60 (size: 0xC)
    FVector CustomHeadScale;                                                          // 0x0E6C (size: 0xC)
    class UBlendSpace* ShowDirectionBlendSpace;                                       // 0x0E78 (size: 0x8)
    float ThrowingAnimationDuration;                                                  // 0x0E80 (size: 0x4)
    float ThrowingTrajectoryArc;                                                      // 0x0E84 (size: 0x4)
    bool ThrowingAnimationBlendWithIdle;                                              // 0x0E88 (size: 0x1)
    bool ThrowingAnimationBlendWithIdleTemp;                                          // 0x0E89 (size: 0x1)
    float ThrowingTrajectoryArcTemp;                                                  // 0x0E8C (size: 0x4)
    class USoundBase* footstep base;                                                  // 0x0E90 (size: 0x8)
    class UMaterialInstance* ScreenOnMeowed;                                          // 0x0E98 (size: 0x8)
    bool ScreenOnMeowedPushed;                                                        // 0x0EA0 (size: 0x1)
    float servo gain global;                                                          // 0x0EA4 (size: 0x4)

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
}; // Size: 0xEA8

#endif
