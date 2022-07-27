#ifndef UE4SS_SDK_Dial_NPCBelt04_HPP
#define UE4SS_SDK_Dial_NPCBelt04_HPP

class ADial_NPCBelt04_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look at downstair;                                                  // 0x0340 (size: 0x8)
    class AActor* Look_TrashZone;                                                     // 0x0348 (size: 0x8)
    class ABP_Droid_C* Droid_Belt_Elevator;                                           // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_NPCBelt04(int32 EntryPoint);
}; // Size: 0x358

#endif
