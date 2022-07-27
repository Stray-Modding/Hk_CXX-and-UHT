#ifndef UE4SS_SDK_Seq_SlumsFinalSequence_HPP
#define UE4SS_SDK_Seq_SlumsFinalSequence_HPP

class ASeq_SlumsFinalSequence_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* chief;                                                         // 0x0270 (size: 0x8)
    class AActor* CatElevatorPos;                                                     // 0x0278 (size: 0x8)
    class AActor* JuniorElevatorPos;                                                  // 0x0280 (size: 0x8)
    class AActor* SeniorElevatorPos;                                                  // 0x0288 (size: 0x8)
    class AActor* ChiefElevatorPos;                                                   // 0x0290 (size: 0x8)
    class AActor* MomoElevatorPos;                                                    // 0x0298 (size: 0x8)
    bool Start;                                                                       // 0x02A0 (size: 0x1)
    class ABP_Layer_C* LayerSlums;                                                    // 0x02A8 (size: 0x8)
    class ABP_Layer_C* LayerCineBar;                                                  // 0x02B0 (size: 0x8)
    class ATriggerZone_C* TriggerZoneChief;                                           // 0x02B8 (size: 0x8)
    class ADial_Guardian_Final_C* DialChief;                                          // 0x02C0 (size: 0x8)
    bool SewersAreOpen;                                                               // 0x02C8 (size: 0x1)
    bool SaveLoaded;                                                                  // 0x02C9 (size: 0x1)
    class ALevelSequenceActor* SequenceReturnDeadEnd;                                 // 0x02D0 (size: 0x8)
    class ACameraActor* cam_GuardianPetsCat;                                          // 0x02D8 (size: 0x8)
    class ASeq_Slum_Meet_Guardian_C* seq slum meet guardian;                          // 0x02E0 (size: 0x8)
    class ABP_Droid_C* Junior;                                                        // 0x02E8 (size: 0x8)
    class ADial_Gathering_Seamus_C* Dial_Gathering_Junior;                            // 0x02F0 (size: 0x8)
    class ABP_Droid_C* Senior;                                                        // 0x02F8 (size: 0x8)
    class ADial_Gathering_Doc_C* Dial_Gathering_Senior;                               // 0x0300 (size: 0x8)
    class ABP_Droid_C* NPC01_Rosey;                                                   // 0x0308 (size: 0x8)
    class ADial_PNJ_Lost_C* Dial_Gathering_NPC01;                                     // 0x0310 (size: 0x8)
    class ABP_Droid_C* NPC02_Billy;                                                   // 0x0318 (size: 0x8)
    class ADial_Bar_PNJ01_C* Dial_Gathering_NPC02;                                    // 0x0320 (size: 0x8)
    class ABP_Droid_C* NPC03_Teddy;                                                   // 0x0328 (size: 0x8)
    class ADial_Bar_PNJ04_C* Dial_Gathering_NPC03;                                    // 0x0330 (size: 0x8)
    class AActor* NPC1_ElevatorPose;                                                  // 0x0338 (size: 0x8)
    class AActor* NPC2_ElevatorPose;                                                  // 0x0340 (size: 0x8)
    class AActor* NPC3_ElevatorPose;                                                  // 0x0348 (size: 0x8)
    bool FeteAuVillage;                                                               // 0x0350 (size: 0x1)
    class ALevelScript_SlumsPart2_Global_C* LevelScriptSlumsPart2;                    // 0x0358 (size: 0x8)
    class ABP_Droid_C* NPCPresDuFeu1;                                                 // 0x0360 (size: 0x8)
    class ABP_Droid_C* NPCPresDuFeu2;                                                 // 0x0368 (size: 0x8)
    class ADial_B12_AfterFinalScene_C* DialB12;                                       // 0x0370 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0378 (size: 0x8)
    class AActor* Tracker;                                                            // 0x0380 (size: 0x8)
    class ABP_Layer_C* layer_barcine;                                                 // 0x0388 (size: 0x8)
    class ABP_SplineRail_C* RailTabouretBar;                                          // 0x0390 (size: 0x8)

    void LogicTrigger();
    void ElevatorSetUp();
    void OnStartSequence();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Set up la fete au village();
    void ExecuteUbergraph_Seq_SlumsFinalSequence(int32 EntryPoint);
}; // Size: 0x398

#endif
