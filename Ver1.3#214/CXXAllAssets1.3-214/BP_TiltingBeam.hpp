#ifndef UE4SS_SDK_BP_TiltingBeam_HPP
#define UE4SS_SDK_BP_TiltingBeam_HPP

class ABP_TiltingBeam_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* Sound;                                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* SM_Physical_Platform_Hook;                            // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Beam;                                                 // 0x0240 (size: 0x8)
    class USceneComponent* Pivot_Beam;                                                // 0x0248 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0250 (size: 0x8)
    class USpringFloat_C* RotationSpring;                                             // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    class ABP_MovingSplineRail_C* RailSpline;                                         // 0x0268 (size: 0x8)
    bool CatIsOnBeam;                                                                 // 0x0270 (size: 0x1)
    float catWeight;                                                                  // 0x0274 (size: 0x4)
    TArray<class ACatPawn*> cat;                                                      // 0x0278 (size: 0x10)
    bool NeedToUpdate;                                                                // 0x0288 (size: 0x1)

    void BeamNeedToUpdate();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void Attach Spline();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void ExecuteUbergraph_BP_TiltingBeam(int32 EntryPoint);
}; // Size: 0x289

#endif
