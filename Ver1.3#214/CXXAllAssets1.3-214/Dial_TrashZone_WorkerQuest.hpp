#ifndef UE4SS_SDK_Dial_TrashZone_WorkerQuest_HPP
#define UE4SS_SDK_Dial_TrashZone_WorkerQuest_HPP

class ADial_TrashZone_WorkerQuest_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0340 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class ALOOT_factory_lostkeys_C* Loot_Keys;                                        // 0x0350 (size: 0x8)
    bool FirstTimeTalked;                                                             // 0x0358 (size: 0x1)
    bool QuestDone;                                                                   // 0x0359 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void BndEvt__Dial_TrashZone_WorkerQuest_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Dial_TrashZone_WorkerQuest(int32 EntryPoint);
}; // Size: 0x35A

#endif
