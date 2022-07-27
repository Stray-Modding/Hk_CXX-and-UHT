#ifndef UE4SS_SDK_Chariot_Spline_HPP
#define UE4SS_SDK_Chariot_Spline_HPP

class AChariot_Spline_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* ImpactCenterVibration;                                     // 0x0278 (size: 0x8)
    class UArrowComponent* FX_WaterSplash1;                                           // 0x0280 (size: 0x8)
    class UArrowComponent* FX_WaterSplash;                                            // 0x0288 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooperCatDrift;                            // 0x0290 (size: 0x8)
    class UArrowComponent* FX_SparkleFirstImpact;                                     // 0x0298 (size: 0x8)
    class UArrowComponent* FX_SparkleBeforeJump2;                                     // 0x02A0 (size: 0x8)
    class UArrowComponent* FX_SparkleBeforeJump;                                      // 0x02A8 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x02B0 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x02B8 (size: 0x8)
    class USceneComponent* SplineSocket;                                              // 0x02C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* PropsGround_carton_1;                                 // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* PropsGround_carton_2;                                 // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* PropsGround01_00;                                     // 0x0300 (size: 0x8)
    class UStaticMeshComponent* PropsGround01_05;                                     // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Cardboard_1;                                          // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Chariot;                                              // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    class USceneComponent* Impact;                                                    // 0x0328 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper roll;                               // 0x0330 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0338 (size: 0x8)
    class USceneComponent* Trolley;                                                   // 0x0340 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0348 (size: 0x8)
    float Time;                                                                       // 0x0350 (size: 0x4)
    float timeJump;                                                                   // 0x0354 (size: 0x4)
    bool CanForceFeedback;                                                            // 0x0358 (size: 0x1)
    class AActor* SplineToFollow;                                                     // 0x0360 (size: 0x8)
    class UCameraShakeBase* CameraShake;                                              // 0x0368 (size: 0x8)
    bool Finish;                                                                      // 0x0370 (size: 0x1)
    class AActor* SplineJump;                                                         // 0x0378 (size: 0x8)
    bool Jump;                                                                        // 0x0380 (size: 0x1)
    class ABP_MovingSplineRail_C* SplineRail;                                         // 0x0388 (size: 0x8)
    float Speed;                                                                      // 0x0390 (size: 0x4)
    class ABP_sfx_Play_Loop_Sequence_C* Sound;                                        // 0x0398 (size: 0x8)
    class UAnimSequence* AnimCatFall;                                                 // 0x03A0 (size: 0x8)
    class ABP_SplineCamera_C* CameraSplineTrolley;                                    // 0x03A8 (size: 0x8)
    TEnumAsByte<TrolleySequence> TrolleySequence;                                     // 0x03B0 (size: 0x1)
    class ADial_B12Tracker_C* B12_Dial;                                               // 0x03B8 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x03C0 (size: 0x8)
    class USplineComponent* JumpFallSplineComp;                                       // 0x03C8 (size: 0x8)
    class AActor* B12_POS;                                                            // 0x03D0 (size: 0x8)
    class UCameraShakeBase* ShakeTrolleyMove;                                         // 0x03D8 (size: 0x8)
    class UCurveFloat* curveCamDistance;                                              // 0x03E0 (size: 0x8)
    class UCurveFloat* curveCamFocal;                                                 // 0x03E8 (size: 0x8)
    class ASeq_CatInjuredAfterFall_C* SEQ_CatInjured;                                 // 0x03F0 (size: 0x8)

    void GetAnimationRatio(float& Ratio);
    void Complete_6246EF4646E19036986D72BA8860F4EA();
    void Tick_6246EF4646E19036986D72BA8860F4EA(float Ratio);
    void Complete_6246EF4646E19036986D72BA97A64057();
    void Tick_6246EF4646E19036986D72BA97A64057(float Ratio);
    void Complete_6246EF4646E19036986D72BA752F27FE();
    void Tick_6246EF4646E19036986D72BA752F27FE(float Ratio);
    void Complete_6246EF4646E19036986D72BAA47C8D29();
    void Tick_6246EF4646E19036986D72BAA47C8D29(float Ratio);
    void Complete_6246EF4646E19036986D72BADD9C0577();
    void Tick_6246EF4646E19036986D72BADD9C0577(float Ratio);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void Attach_Rail();
    void OnStartSequence();
    void Camera_Shake(float Scale);
    void Move Trolley(float Time);
    void FX_TrolleyRide(float InputPin);
    void BndEvt__Chariot_Spline_m_streamingComponent_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CameraShakeMove(float Scale);
    void StopCameraShakeMove();
    void CameraShakeFall(float Scale);
    void FX_CatFall();
    void Trigger_ForceFeedback(float _duration, TEnumAsByte<ForceFeedbackTrolley_Type> Selection);
    void ExecuteUbergraph_Chariot_Spline(int32 EntryPoint);
}; // Size: 0x3F8

#endif
