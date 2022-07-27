#ifndef UE4SS_SDK_SEQ_EndPursuit_HPP
#define UE4SS_SDK_SEQ_EndPursuit_HPP

class ASEQ_EndPursuit_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* scratchVibe;                                               // 0x0270 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanJump;                             // 0x0278 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanWindow;                           // 0x0280 (size: 0x8)
    bool Activate;                                                                    // 0x0288 (size: 0x1)
    class AActor* jumpTarget;                                                         // 0x0290 (size: 0x8)
    class AActor* MoveTarget;                                                         // 0x0298 (size: 0x8)
    class ABP_RotatingWindow_C* RotatingWindow;                                       // 0x02A0 (size: 0x8)
    class ABP_SplineRail_C* SplineRail;                                               // 0x02A8 (size: 0x8)
    class ABP_TutoZone_C* TutoMeow;                                                   // 0x02B0 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02B8 (size: 0x8)
    class UAnimSequence* Animation;                                                   // 0x02C0 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* Cam_modifier;                          // 0x02C8 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAB44E49D4();
    void Tick_6246EF4646E19036986D72BAB44E49D4(float Ratio);
    void Complete_6246EF4646E19036986D72BA8493B597();
    void Tick_6246EF4646E19036986D72BA8493B597(float Ratio);
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnStartSequence();
    void ExecuteUbergraph_SEQ_EndPursuit(int32 EntryPoint);
}; // Size: 0x2D0

#endif
