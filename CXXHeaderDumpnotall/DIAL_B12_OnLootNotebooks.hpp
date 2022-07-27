#ifndef UE4SS_SDK_DIAL_B12_OnLootNotebooks_HPP
#define UE4SS_SDK_DIAL_B12_OnLootNotebooks_HPP

class ADIAL_B12_OnLootNotebooks_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UActorIdComponent* ActorId;
    class UStreamingComponent* Streaming;
    class ADial_Momo_C* Dia_Momo;
    class ABP_Dialog_Zone_C* DialZoneB12;
    bool ClueViewDone;
    TEnumAsByte<E_WhichNotebookLooted> WhichNotebookHasBeenLooted;
    class ALOOT_Notebook_Clem_C* Loot_Clem;
    class ALOOT_Notebook_Gerard_C* Loot_Gerard;
    class ALOOT_Notebook_Doc_C* Loot_Doc;
    bool MomoNotebookRead;
    class ACameraActor* FlatCamera;
    class AActor* DroneSafePosInLibrary;

    void OnDialogBegan();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void OnLooted_N_Clem();
    void OnLooted_N_Gerard();
    void OnLooted_N_Doc();
    void OnGiveMomoNotebook_Event_0();
    void ExecuteUbergraph_DIAL_B12_OnLootNotebooks(int32 EntryPoint);
};

#endif
