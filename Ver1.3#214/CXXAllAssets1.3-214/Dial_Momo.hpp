#ifndef UE4SS_SDK_Dial_Momo_HPP
#define UE4SS_SDK_Dial_Momo_HPP

class ADial_Momo_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0348 (size: 0x8)
    class ASkeletalMeshActor* Transceiver;                                            // 0x0350 (size: 0x8)
    class AActor* Tabouret;                                                           // 0x0358 (size: 0x8)
    class AActor* TV;                                                                 // 0x0360 (size: 0x8)
    class AActor* fake notebook;                                                      // 0x0368 (size: 0x8)
    class ADIAL_B12_OnLootNotebooks_C* Dia_B12_Notebooks;                             // 0x0370 (size: 0x8)
    class ABP_Curtain_C* Curtain;                                                     // 0x0378 (size: 0x8)
    class ABP_VerticalWindow_C* WindowToRooftop;                                      // 0x0380 (size: 0x8)
    class ABP_SplineRail_C* WindowToRooftop_Rail;                                     // 0x0388 (size: 0x8)
    class ABP_Droid_C* MomoCine;                                                      // 0x0390 (size: 0x8)
    class ASkeletalMeshActor* TransceiverCine;                                        // 0x0398 (size: 0x8)
    class ALevelSequenceActor* CineMomo;                                              // 0x03A0 (size: 0x8)
    class ABP_MomoWindowToSlums_C* MomoWindowToSlums;                                 // 0x03A8 (size: 0x8)
    class ABP_SplineRail_C* RailOnWindowToSlums;                                      // 0x03B0 (size: 0x8)
    class AActor* DroidPosAfterCine;                                                  // 0x03B8 (size: 0x8)
    class AActor* CatPosAfterCine;                                                    // 0x03C0 (size: 0x8)
    TEnumAsByte<E_Momo_Dialog_State> MomoDialState;                                   // 0x03C8 (size: 0x1)
    TArray<FName> Transition Groups;                                                  // 0x03D0 (size: 0x10)
    class UAnimSequence* Anim_Momo_Repair;                                            // 0x03E0 (size: 0x8)
    class UAnimSequence* Anim_Transceiver_Repair;                                     // 0x03E8 (size: 0x8)
    class UAnimSequence* Anim_Momo_DoneRepair;                                        // 0x03F0 (size: 0x8)
    FDial_Momo_COnGiveMomoNotebook OnGiveMomoNotebook;                                // 0x03F8 (size: 0x10)
    void OnGiveMomoNotebook();
    class AActor* DroneTargetIntro;                                                   // 0x0408 (size: 0x8)
    class AActor* Cadre;                                                              // 0x0410 (size: 0x8)
    class UAnimSequence* Line Advanced Animation;                                     // 0x0418 (size: 0x8)
    class ALevelSequenceActor* MeetMomo_Sequence;                                     // 0x0420 (size: 0x8)
    class ACameraActor* Cam_OutroMeetMomo;                                            // 0x0428 (size: 0x8)
    class AActor* TP_CatFenetre;                                                      // 0x0430 (size: 0x8)
    class AActor* MoveToCat_DevantMomo;                                               // 0x0438 (size: 0x8)
    int32 Notebook_Given;                                                             // 0x0440 (size: 0x4)
    class AActor* CamPos_AfterCinerepair;                                             // 0x0448 (size: 0x8)
    class AActor* PosDrone_AfterCineRepair;                                           // 0x0450 (size: 0x8)
    class AActor* CheckpointPosition;                                                 // 0x0458 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void SetMomoTweak_Loop();
    void PlaceElementsAtRightAnimPos();
    void LogicTrigger();
    void ExecuteUbergraph_Dial_Momo(int32 EntryPoint);
    void OnGiveMomoNotebook__DelegateSignature();
}; // Size: 0x460

#endif
