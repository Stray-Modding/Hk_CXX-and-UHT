#ifndef UE4SS_SDK_Dial_RobertoInDeadEnd_HPP
#define UE4SS_SDK_Dial_RobertoInDeadEnd_HPP

class ADial_RobertoInDeadEnd_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool DoorOpening;                                                                 // 0x0340 (size: 0x1)
    class ABP_Droid_C* Seamus;                                                        // 0x0348 (size: 0x8)
    class AActor* BadgePos;                                                           // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_RobertoInDeadEnd(int32 EntryPoint);
}; // Size: 0x358

#endif
