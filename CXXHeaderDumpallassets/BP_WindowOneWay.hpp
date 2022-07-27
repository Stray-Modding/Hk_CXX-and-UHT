#ifndef UE4SS_SDK_BP_WindowOneWay_HPP
#define UE4SS_SDK_BP_WindowOneWay_HPP

class ABP_WindowOneWay_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* window_oneWay_squeak_VIBE;                                 // 0x0230 (size: 0x8)
    class UBoxComponent* ActiveZone;                                                  // 0x0238 (size: 0x8)
    class USceneComponent* Sound;                                                     // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cylinder1;                                            // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0258 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0260 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0268 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0270 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Windows_100x80_cadre;                                 // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Door04_rotate_Door04_rotate;                          // 0x0288 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    float Timeline_0_NewTrack_0_CD5A40BC45BB2829B07D0B86B166F6E8;                     // 0x0298 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CD5A40BC45BB2829B07D0B86B166F6E8; // 0x029C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02A0 (size: 0x8)
    bool Enable;                                                                      // 0x02A8 (size: 0x1)
    FRotator Base_Rotation;                                                           // 0x02AC (size: 0xC)
    FRotator Target_Rotation;                                                         // 0x02B8 (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x02C4 (size: 0xC)
    bool Open;                                                                        // 0x02D0 (size: 0x1)
    bool CatIsOnWindow;                                                               // 0x02D1 (size: 0x1)
    float AngleRotation;                                                              // 0x02D4 (size: 0x4)
    float AngleRotationPrevious;                                                      // 0x02D8 (size: 0x4)
    float AngleRotationCurrent;                                                       // 0x02DC (size: 0x4)
    bool ScriptOn;                                                                    // 0x02E0 (size: 0x1)
    float TimeToClose;                                                                // 0x02E4 (size: 0x4)
    class UCurveFloat* CloseCurve;                                                    // 0x02E8 (size: 0x8)
    float Timer;                                                                      // 0x02F0 (size: 0x4)
    float SqueakPitch;                                                                // 0x02F4 (size: 0x4)
    class ABP_sfx_Play_Loop_Sequence_C* Squeak;                                       // 0x02F8 (size: 0x8)
    bool NeedToUpdate;                                                                // 0x0300 (size: 0x1)
    class ACatPawn* cat;                                                              // 0x0308 (size: 0x8)
    bool WindowMove;                                                                  // 0x0310 (size: 0x1)

    void WindowNeedUpdate();
    void GetMaxRatioToSpline(float& MaxRatio);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void CatIsOnRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void CatExitRail(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void BndEvt__BP_WindowOneWay_Enter_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CheckSideOfWindow();
    void BndEvt__BP_WindowOneWay_ActiveZone_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void WindowClose();
    void WindowOpen();
    void ExecuteUbergraph_BP_WindowOneWay(int32 EntryPoint);
}; // Size: 0x311

#endif
