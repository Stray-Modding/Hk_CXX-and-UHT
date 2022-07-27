#ifndef UE4SS_SDK_BP_SewerBark_HPP
#define UE4SS_SDK_BP_SewerBark_HPP

class ABP_SewerBark_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USpringFloat_C* Light_RotY;                                                 // 0x0230 (size: 0x8)
    class USpringFloat_C* Light_RotX;                                                 // 0x0238 (size: 0x8)
    class UAudioComponent* bark_VIBE;                                                 // 0x0240 (size: 0x8)
    class USceneComponent* FX;                                                        // 0x0248 (size: 0x8)
    class UBoxComponent* Droid_COL_02;                                                // 0x0250 (size: 0x8)
    class UBoxComponent* Droid_COL_01;                                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Boat_Collision;                                       // 0x0268 (size: 0x8)
    class UArrowComponent* Droid_Socket;                                              // 0x0270 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0278 (size: 0x8)
    class UPointLightComponent* Bark_Light;                                           // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Bark_Light_Mesh;                                      // 0x0288 (size: 0x8)
    class UCOMP_wanderer_C* COMP_wanderer;                                            // 0x0290 (size: 0x8)
    class UMovingActorComponent* MovingActor;                                         // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Bark;                                                 // 0x02A0 (size: 0x8)
    class UBoxComponent* IsOnBoatZone;                                                // 0x02A8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B0 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02B8 (size: 0x8)
    class USpringFloat_C* Spring_RotY;                                                // 0x02C0 (size: 0x8)
    class USpringFloat_C* Spring_RotX;                                                // 0x02C8 (size: 0x8)
    class USpringFloat_C* Spring_Z;                                                   // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)
    bool Activate;                                                                    // 0x02E0 (size: 0x1)
    class ABP_Droid_C* Droid;                                                         // 0x02E8 (size: 0x8)
    float BarkSpeed;                                                                  // 0x02F0 (size: 0x4)
    float BarkSpeedOnLanding;                                                         // 0x02F4 (size: 0x4)
    float TargetOffsetZ;                                                              // 0x02F8 (size: 0x4)
    bool CatIsOnBark;                                                                 // 0x02FC (size: 0x1)
    bool DroidIsOnBark;                                                               // 0x02FD (size: 0x1)
    FVector InitLocation;                                                             // 0x0300 (size: 0xC)
    float RotationX;                                                                  // 0x030C (size: 0x4)
    FRotator Init_Rotator;                                                            // 0x0310 (size: 0xC)
    class USoundBase* sound to play when cat lands;                                   // 0x0320 (size: 0x8)
    class AActor* SplineToFollow;                                                     // 0x0328 (size: 0x8)
    class AActor* TargetOnSpline;                                                     // 0x0330 (size: 0x8)
    float TargetDistance;                                                             // 0x0338 (size: 0x4)
    float CurrentDistance;                                                            // 0x033C (size: 0x4)
    float RadiusApprochBrake;                                                         // 0x0340 (size: 0x4)
    float DistanceToTarget;                                                           // 0x0344 (size: 0x4)
    bool Brake;                                                                       // 0x0348 (size: 0x1)
    float Acceleration;                                                               // 0x034C (size: 0x4)
    float Previous_Speed;                                                             // 0x0350 (size: 0x4)
    float SpeedTarget;                                                                // 0x0354 (size: 0x4)
    float Speed;                                                                      // 0x0358 (size: 0x4)
    bool CatNeedToBeOnBark;                                                           // 0x035C (size: 0x1)
    float SpeedBeforeBrake;                                                           // 0x0360 (size: 0x4)
    float AccelerationFactor;                                                         // 0x0364 (size: 0x4)
    float RotationY;                                                                  // 0x0368 (size: 0x4)
    bool isLanding;                                                                   // 0x036C (size: 0x1)
    FRotator LandingInitRotator;                                                      // 0x0370 (size: 0xC)
    float LandingRatio;                                                               // 0x037C (size: 0x4)
    bool ReachLand;                                                                   // 0x0380 (size: 0x1)
    float SpeedToStop;                                                                // 0x0384 (size: 0x4)
    bool DroidRightFootIsOnBark;                                                      // 0x0388 (size: 0x1)
    bool DroidLeftFootIsOnBark;                                                       // 0x0389 (size: 0x1)
    class UParticleSystemComponent* FX_WaterTrail;                                    // 0x0390 (size: 0x8)
    bool NeedToUpdate;                                                                // 0x0398 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x03A0 (size: 0x8)
    bool DroidScriptedMode;                                                           // 0x03A8 (size: 0x1)
    float DebugDistance;                                                              // 0x03AC (size: 0x4)
    float VelocityLength;                                                             // 0x03B0 (size: 0x4)
    FRotator TargetRotator;                                                           // 0x03B4 (size: 0xC)
    FRotator CurrentTarget Rotator;                                                   // 0x03C0 (size: 0xC)
    FVector TargetLocation;                                                           // 0x03CC (size: 0xC)
    FVector CurrentTargetLocation;                                                    // 0x03D8 (size: 0xC)
    float DistanceDiffSigned;                                                         // 0x03E4 (size: 0x4)
    float Delta Seconds;                                                              // 0x03E8 (size: 0x4)

    void NeedToUpdateBark();
    void SetLandingTarget(class AActor* TargetOnSpline);
    void SetTarget(class AActor* TargetOnSpline);
    void SimulatePhysic();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Update_Droid();
    void Bark Transform OnSpline(float Distance, bool Init);
    void Update Target On Spline();
    void Update Bark Speed();
    void Bark Landing();
    void BndEvt__Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void Check Is On Bark();
    void BndEvt__BP_SewerBark_IsOnBoatZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SewerBark_IsOnBoatZone_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateCurrentDistance();
    void ExecuteUbergraph_BP_SewerBark(int32 EntryPoint);
}; // Size: 0x3EC

#endif
