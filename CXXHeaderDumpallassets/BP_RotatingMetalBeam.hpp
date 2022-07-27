#ifndef UE4SS_SDK_BP_RotatingMetalBeam_HPP
#define UE4SS_SDK_BP_RotatingMetalBeam_HPP

class ABP_RotatingMetalBeam_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Squeak_VIBE;                                               // 0x0230 (size: 0x8)
    class UAudioComponent* Impact_VIBE;                                               // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class UArrowComponent* Max;                                                       // 0x0248 (size: 0x8)
    class UArrowComponent* Min;                                                       // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Beam;                                                 // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    class ABP_MovingSplineRail_C* spline rail;                                        // 0x0270 (size: 0x8)
    float DestAngle;                                                                  // 0x0278 (size: 0x4)
    bool CatIsOnBeam;                                                                 // 0x027C (size: 0x1)
    class UAudioComponent* SoundSqueak;                                               // 0x0280 (size: 0x8)
    float AngleMin;                                                                   // 0x0288 (size: 0x4)
    float AngleMax;                                                                   // 0x028C (size: 0x4)
    float RotateAngleMin;                                                             // 0x0290 (size: 0x4)
    float RotateAngleMax;                                                             // 0x0294 (size: 0x4)
    float RotationSpeedFactor;                                                        // 0x0298 (size: 0x4)
    float beamLength;                                                                 // 0x029C (size: 0x4)
    class ACatPawn* cat;                                                              // 0x02A0 (size: 0x8)
    bool DisableJumpDuringTime;                                                       // 0x02A8 (size: 0x1)
    float TimeToDisable;                                                              // 0x02AC (size: 0x4)
    bool NeedToUpdate;                                                                // 0x02B0 (size: 0x1)
    bool UseForceFeedback;                                                            // 0x02B1 (size: 0x1)

    void BeamNeedToUpdate();
    void SetForce(float B);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void AttachSplineRail();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveBeginPlay();
    void CatSpeedOnBeam();
    void UpdateBeamRotation();
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_RotatingMetalBeam(int32 EntryPoint);
}; // Size: 0x2B2

#endif
