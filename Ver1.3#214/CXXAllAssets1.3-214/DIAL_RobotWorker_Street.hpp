#ifndef UE4SS_SDK_DIAL_RobotWorker_Street_HPP
#define UE4SS_SDK_DIAL_RobotWorker_Street_HPP

class ADIAL_RobotWorker_Street_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_DIAL_RobotWorker_Street(int32 EntryPoint);
}; // Size: 0x348

#endif
