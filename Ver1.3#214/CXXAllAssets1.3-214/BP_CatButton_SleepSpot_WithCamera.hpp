#ifndef UE4SS_SDK_BP_CatButton_SleepSpot_WithCamera_HPP
#define UE4SS_SDK_BP_CatButton_SleepSpot_WithCamera_HPP

class ABP_CatButton_SleepSpot_WithCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* CatPose;                                              // 0x0230 (size: 0x8)
    class USceneComponent* Camera pivot;                                              // 0x0238 (size: 0x8)
    class UCOMP_CatMoveToLoopAnim_C* COMP_CatMoveToLoopAnim;                          // 0x0240 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0248 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    bool [ Debug ] CamAtEnd;                                                          // 0x0260 (size: 0x1)
    FVector offsetSpline;                                                             // 0x0264 (size: 0xC)
    FVector LookAtOffset_AtStart;                                                     // 0x0270 (size: 0xC)
    FVector LookAtOffset_AtEnd;                                                       // 0x027C (size: 0xC)
    float durationCamMvt;                                                             // 0x0288 (size: 0x4)
    TEnumAsByte<EEasingFunction> Blend_Type;                                          // 0x028C (size: 0x1)
    float Blend cam Time IN;                                                          // 0x0290 (size: 0x4)
    float Blend Cam Time OUT min;                                                     // 0x0294 (size: 0x4)
    float Blend Cam Time OUT max;                                                     // 0x0298 (size: 0x4)
    class UAudioComponent* PurrLoop;                                                  // 0x02A0 (size: 0x8)
    float current alpha;                                                              // 0x02A8 (size: 0x4)
    class UAnimSequence* StretchAnim;                                                 // 0x02B0 (size: 0x8)
    class ACatPawn* UsingCat;                                                         // 0x02B8 (size: 0x8)
    FBP_CatButton_SleepSpot_WithCamera_CAfterStretch AfterStretch;                    // 0x02C0 (size: 0x10)
    void AfterStretch();
    FName sfx to play on enter;                                                       // 0x02D0 (size: 0x8)
    FName sfx to stop on exit;                                                        // 0x02D8 (size: 0x8)
    bool HasLooped;                                                                   // 0x02E0 (size: 0x1)
    bool StretchAfterSleep;                                                           // 0x02E1 (size: 0x1)
    bool SleepOnPillows;                                                              // 0x02E2 (size: 0x1)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA18B97C77();
    void Tick_6246EF4646E19036986D72BA18B97C77(float Ratio);
    void ReceiveBeginPlay();
    void CancelMvt();
    void Reset Cam();
    void BndEvt__BP_CatButton_SleepSpot_WithCamera_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CatButton_SleepSpot_WithCamera_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_2_OnStart__DelegateSignature();
    void BndEvt__BP_CatButton_SleepSpot_WithCamera_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_4_OnLoopStart__DelegateSignature();
    void BndEvt__BP_CatButton_SleepSpot_WithCamera_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_7_OnLoopEnd__DelegateSignature();
    void BndEvt__BP_CatButton_SleepSpot_WithCamera_COMP_CatMoveToLoopAnim_K2Node_ComponentBoundEvent_8_OnEnd__DelegateSignature();
    void TryExitCamAndPurr();
    void Break_HideFeedback_loop();
    void ExecuteUbergraph_BP_CatButton_SleepSpot_WithCamera(int32 EntryPoint);
    void AfterStretch__DelegateSignature();
}; // Size: 0x2E3

#endif
