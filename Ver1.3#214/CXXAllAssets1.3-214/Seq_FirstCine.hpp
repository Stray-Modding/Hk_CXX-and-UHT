#ifndef UE4SS_SDK_Seq_FirstCine_HPP
#define UE4SS_SDK_Seq_FirstCine_HPP

class ASeq_FirstCine_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_PlanExterieur;                        // 0x0270 (size: 0x8)
    class ABP_CatFollow_C* Red_Cat;                                                   // 0x0278 (size: 0x8)
    class ABP_CatPawn_C* Player_Cat;                                                  // 0x0280 (size: 0x8)
    class ABP_CatFollow_C* Black_Cat;                                                 // 0x0288 (size: 0x8)
    class AActor* RedCat_StartPOS;                                                    // 0x0290 (size: 0x8)
    class AActor* PlayerCat_FirstRailPOS;                                             // 0x0298 (size: 0x8)
    class AActor* PlayerCat_SecondRailPOS;                                            // 0x02A0 (size: 0x8)
    class ABP_SplineRail_C* PlayerCat_FirstSplineRail;                                // 0x02A8 (size: 0x8)
    class ABP_SplineRail_C* PlayerCat_SecondSplineRail;                               // 0x02B0 (size: 0x8)
    class ABP_SplineRail_C* PlayerCat_ThirdSplineRail;                                // 0x02B8 (size: 0x8)
    class ABP_SplineRail_C* BlackCat_FirstSplineRail;                                 // 0x02C0 (size: 0x8)
    class AActor* BlackCat_EndPOS;                                                    // 0x02C8 (size: 0x8)
    class AActor* Target_PlanExterieur;                                               // 0x02D0 (size: 0x8)
    class ABP_ActorSpline_C* SplineTarget_PlanExterieur;                              // 0x02D8 (size: 0x8)
    float DebugTime;                                                                  // 0x02E0 (size: 0x4)
    bool Active;                                                                      // 0x02E4 (size: 0x1)
    float Timer;                                                                      // 0x02E8 (size: 0x4)
    class ABP_SplineRail_C* PlayerCat_ThirdSplineRail_Bis;                            // 0x02F0 (size: 0x8)
    class AActor* PlayerCat_PlateformeJumpPOS;                                        // 0x02F8 (size: 0x8)
    class AActor* PlayerCat_JumpOnRoof;                                               // 0x0300 (size: 0x8)
    class AActor* PlayerCat_StartGamePos;                                             // 0x0308 (size: 0x8)
    class ABP_CatFollow_C* White_Cat;                                                 // 0x0310 (size: 0x8)
    class AActor* WhiteCat_StartPOS;                                                  // 0x0318 (size: 0x8)
    class ABP_SplineRail_C* WhiteCat_FirstSplineRail;                                 // 0x0320 (size: 0x8)
    float Time_PlanSequence;                                                          // 0x0328 (size: 0x4)
    class AActor* WhiteCat_StartGamePos;                                              // 0x0330 (size: 0x8)
    class AActor* RedCat_MoveOnTheRoofPOS;                                            // 0x0338 (size: 0x8)
    class ABP_SplineRail_C* RedCat_BarrelRail;                                        // 0x0340 (size: 0x8)
    class AActor* RedCat_JumpFromBarrelPOS;                                           // 0x0348 (size: 0x8)
    class AActor* RedCat_StartGamePOS;                                                // 0x0350 (size: 0x8)
    class AActor* BlackCat_SecondJumpPOS;                                             // 0x0358 (size: 0x8)
    class AActor* BlackCat_HangingTarget;                                             // 0x0360 (size: 0x8)
    class AActor* BlackCat_LookAtTarget;                                              // 0x0368 (size: 0x8)
    class AActor* BlackCat_LookAtTarget_2;                                            // 0x0370 (size: 0x8)
    class AActor* WhiteCat_MoveOnRoof;                                                // 0x0378 (size: 0x8)
    class AActor* WhiteCat_JumpOnMuret;                                               // 0x0380 (size: 0x8)
    class AActor* WhiteCat_MoveOnMuret;                                               // 0x0388 (size: 0x8)
    class AActor* WhiteCat_LastJump;                                                  // 0x0390 (size: 0x8)
    class AActor* BlackCat_LookAtTarget_3;                                            // 0x0398 (size: 0x8)
    class ALevelSequenceActor* Sequencer;                                             // 0x03A0 (size: 0x8)
    class AActor* WhiteCat_HangingPOS;                                                // 0x03A8 (size: 0x8)
    class AActor* WhiteCat_HangingTargetPOS;                                          // 0x03B0 (size: 0x8)
    class AActor* PlayerCat_MoveToWhiteCat_POS;                                       // 0x03B8 (size: 0x8)
    TArray<class ABP_PigeonsSpawner_C*> Pigeon;                                       // 0x03C0 (size: 0x10)
    class UAnimSequence* Animation;                                                   // 0x03D0 (size: 0x8)
    bool Finished;                                                                    // 0x03D8 (size: 0x1)
    class ABP_SplineRail_C* RedCat_Plateforme1_rail;                                  // 0x03E0 (size: 0x8)
    class ABP_SplineRail_C* RedCat_Plateforme2_rail;                                  // 0x03E8 (size: 0x8)
    class AActor* RedCat_LookAt1;                                                     // 0x03F0 (size: 0x8)
    class AActor* RedCat_LookAt2;                                                     // 0x03F8 (size: 0x8)
    class AActor* RedCat_LookAt3;                                                     // 0x0400 (size: 0x8)
    class AActor* PlayerCat_PlateformeTarget_POS;                                     // 0x0408 (size: 0x8)
    class AActor* PlayerCat_LastPlateformeJump_POS;                                   // 0x0410 (size: 0x8)
    class AActor* PlayerCat_LastPlateformeTarget_POS;                                 // 0x0418 (size: 0x8)
    class AActor* PlayerCat_JumpOnRoof_2;                                             // 0x0420 (size: 0x8)
    FRuntimeFloatCurve Curve;                                                         // 0x0428 (size: 0x88)

    void Complete_6246EF4646E19036986D72BA20C650E1();
    void Tick_6246EF4646E19036986D72BA20C650E1(float Ratio);
    void Complete_6246EF4646E19036986D72BA1B613520();
    void Tick_6246EF4646E19036986D72BA1B613520(float Ratio);
    void OnStartSequence();
    void LogicTrigger();
    void OnFinishedCineGrotte();
    void BndEvt__Seq_FirstCine_m_saveComponent_K2Node_ComponentBoundEvent_1_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void ExecuteUbergraph_Seq_FirstCine(int32 EntryPoint);
}; // Size: 0x4B0

#endif
