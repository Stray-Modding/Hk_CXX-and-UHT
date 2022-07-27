#ifndef UE4SS_SDK_BP_Jail_CatCage_HPP
#define UE4SS_SDK_BP_Jail_CatCage_HPP

class ABP_Jail_CatCage_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* cage_moves_01;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0240 (size: 0x8)
    class USpringFloat_C* PadlockRot;                                                 // 0x0248 (size: 0x8)
    class UArrowComponent* SplineRailPos;                                             // 0x0250 (size: 0x8)
    class USpringFloat_C* CageDoorRot;                                                // 0x0258 (size: 0x8)
    class USpringFloat_C* PadLockRotX;                                                // 0x0260 (size: 0x8)
    class USpringFloat_C* ChainRotX;                                                  // 0x0268 (size: 0x8)
    class USpringFloat_C* MainAnchorRotX;                                             // 0x0270 (size: 0x8)
    class USceneComponent* Cage;                                                      // 0x0278 (size: 0x8)
    class USceneComponent* MainAnchor;                                                // 0x0280 (size: 0x8)
    class USpringFloat_C* CageRotX;                                                   // 0x0288 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Jail_Cat_Cage;                                        // 0x0298 (size: 0x8)
    class USceneComponent* ScenePadlock;                                              // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Padlock;                                              // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Jail_Cat_Cage_Door;                                   // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Padlock_2;                                            // 0x02B8 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    bool Activate;                                                                    // 0x02D0 (size: 0x1)
    float PreviousJoyDirX;                                                            // 0x02D4 (size: 0x4)
    float PreviousJoyDirY;                                                            // 0x02D8 (size: 0x4)
    FVector JoyDir;                                                                   // 0x02DC (size: 0xC)
    class ABP_MovingSplineRail_C* spline rail;                                        // 0x02E8 (size: 0x8)
    int32 HitNumber;                                                                  // 0x02F0 (size: 0x4)
    bool DoorIsBroken;                                                                // 0x02F4 (size: 0x1)
    bool UnfreezeCat;                                                                 // 0x02F5 (size: 0x1)
    int32 SplineSegment;                                                              // 0x02F8 (size: 0x4)
    TArray<class USplineMeshComponent*> ChainSplineMesh;                              // 0x0300 (size: 0x10)
    FVector PreviousCageLocation;                                                     // 0x0310 (size: 0xC)
    FVector CageLocation;                                                             // 0x031C (size: 0xC)
    FVector CageVelocity;                                                             // 0x0328 (size: 0xC)
    FVector CageAngularVelocity;                                                      // 0x0334 (size: 0xC)
    FRotator PreviousCageRotator;                                                     // 0x0340 (size: 0xC)
    FRotator CageRotator;                                                             // 0x034C (size: 0xC)
    float JoyDirSpeedX;                                                               // 0x0358 (size: 0x4)
    float JoyDirSpeedY;                                                               // 0x035C (size: 0x4)
    float JoyDirSpeedX_Smooth;                                                        // 0x0360 (size: 0x4)
    float JoyDirSpeedY_Smooth;                                                        // 0x0364 (size: 0x4)
    class ABP_SplineCamera_C* Camera spline;                                          // 0x0368 (size: 0x8)
    float ChainLength;                                                                // 0x0370 (size: 0x4)
    float WallLimit;                                                                  // 0x0374 (size: 0x4)
    float CageVelocityValue;                                                          // 0x0378 (size: 0x4)
    bool Debug;                                                                       // 0x037C (size: 0x1)
    float ImpactThreshold;                                                            // 0x0380 (size: 0x4)
    int32 ImpactNumberBeforeBreak;                                                    // 0x0384 (size: 0x4)
    bool CageImpact;                                                                  // 0x0388 (size: 0x1)
    float ImpactTimer;                                                                // 0x038C (size: 0x4)
    class ABP_OrientCameraThirdPersonZone_C* OrientCamera;                            // 0x0390 (size: 0x8)
    float sfx_grinding_volume;                                                        // 0x0398 (size: 0x4)
    class ABP_CatPawn_C* CatPawn;                                                     // 0x03A0 (size: 0x8)
    TEnumAsByte<E_CatCageState> AnimIdealTargetState;                                 // 0x03A8 (size: 0x1)
    float TimeInIdealTargetState;                                                     // 0x03AC (size: 0x4)
    float JoySmooth;                                                                  // 0x03B0 (size: 0x4)
    float AnimImpulse;                                                                // 0x03B4 (size: 0x4)
    float CageImpulseForce;                                                           // 0x03B8 (size: 0x4)
    float ChainImpulseForce;                                                          // 0x03BC (size: 0x4)
    class UCameraShakeBase* CameraShake;                                              // 0x03C0 (size: 0x8)
    bool InputAvailable;                                                              // 0x03C8 (size: 0x1)
    bool StartFadeOut;                                                                // 0x03C9 (size: 0x1)
    bool CatIsOnCage;                                                                 // 0x03CA (size: 0x1)
    float VibrationLevel;                                                             // 0x03CC (size: 0x4)

    void UpdateJoyParameters();
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA16739BA6();
    void Tick_6246EF4646E19036986D72BA16739BA6(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Update_Chain();
    void Update_ForceOnCage();
    void UpdateDebug();
    void Attach_Rail();
    void LogicTrigger();
    void SetAnimIdealTargetState(TEnumAsByte<E_CatCageState> State);
    void Camera_Shake(float Scale);
    void InitCatInJail();
    void Update Vibration();
    void ExecuteUbergraph_BP_Jail_CatCage(int32 EntryPoint);
}; // Size: 0x3D0

#endif
