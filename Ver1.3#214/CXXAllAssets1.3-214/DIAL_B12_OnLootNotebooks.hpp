#ifndef UE4SS_SDK_DIAL_B12_OnLootNotebooks_HPP
#define UE4SS_SDK_DIAL_B12_OnLootNotebooks_HPP

class ADIAL_B12_OnLootNotebooks_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UActorIdComponent* ActorId;                                                 // 0x0340 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0348 (size: 0x8)
    class ADial_Momo_C* Dia_Momo;                                                     // 0x0350 (size: 0x8)
    class ABP_Dialog_Zone_C* DialZoneB12;                                             // 0x0358 (size: 0x8)
    bool ClueViewDone;                                                                // 0x0360 (size: 0x1)
    TEnumAsByte<E_WhichNotebookLooted> WhichNotebookHasBeenLooted;                    // 0x0361 (size: 0x1)
    class ALOOT_Notebook_Clem_C* Loot_Clem;                                           // 0x0368 (size: 0x8)
    class ALOOT_Notebook_Gerard_C* Loot_Gerard;                                       // 0x0370 (size: 0x8)
    class ALOOT_Notebook_Doc_C* Loot_Doc;                                             // 0x0378 (size: 0x8)
    bool MomoNotebookRead;                                                            // 0x0380 (size: 0x1)
    class ACameraActor* FlatCamera;                                                   // 0x0388 (size: 0x8)
    class AActor* DroneSafePosInLibrary;                                              // 0x0390 (size: 0x8)

    void OnDialogBegan();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnLooted_N_Clem();
    void OnLooted_N_Gerard();
    void OnLooted_N_Doc();
    void OnGiveMomoNotebook_Event_0();
    void ExecuteUbergraph_DIAL_B12_OnLootNotebooks(int32 EntryPoint);
}; // Size: 0x398

#endif
