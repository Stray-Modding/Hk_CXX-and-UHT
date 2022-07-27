#ifndef UE4SS_SDK_DIAL_B12_Clues_Clem_Flat_Board_HPP
#define UE4SS_SDK_DIAL_B12_Clues_Clem_Flat_Board_HPP

class ADIAL_B12_Clues_Clem_Flat_Board_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ASeq_Clem_Flat_State_After_Trash_C* Seq_AfterTrash;                         // 0x0348 (size: 0x8)
    class AActor* Talkable actor;                                                     // 0x0350 (size: 0x8)
    class AActor* Fake Loot;                                                          // 0x0358 (size: 0x8)
    class ADIAL_B12_Clues_Clem_Flat_1_C* Clue_1;                                      // 0x0360 (size: 0x8)
    class ADIAL_B12_Clues_Clem_Flat_2_C* Clue_2;                                      // 0x0368 (size: 0x8)
    class ADIAL_B12_Clues_Clem_Flat_3_C* Clue_3;                                      // 0x0370 (size: 0x8)
    class ADIAL_B12_Clues_Clem_Flat_4_C* Clue_4;                                      // 0x0378 (size: 0x8)
    class AActor* Cat_Point_Dial;                                                     // 0x0380 (size: 0x8)
    class AActor* B12_Point_Hmm1;                                                     // 0x0388 (size: 0x8)
    class AActor* B12_Point_Hmm2;                                                     // 0x0390 (size: 0x8)
    class AActor* B12_Point_LookCat;                                                  // 0x0398 (size: 0x8)
    class AActor* B12_Point_Clue;                                                     // 0x03A0 (size: 0x8)
    class ABP_SplineRail_C* Rail_Entrance;                                            // 0x03A8 (size: 0x8)
    class ABP_Dialog_Zone_C* DialZone_Entrance;                                       // 0x03B0 (size: 0x8)
    bool AfterAllClues;                                                               // 0x03B8 (size: 0x1)

    void OnDialogBegan();
    void BndEvt__DIAL_B12_Clues_Clem_Flat_Board_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_DIAL_B12_Clues_Clem_Flat_Board(int32 EntryPoint);
}; // Size: 0x3B9

#endif
