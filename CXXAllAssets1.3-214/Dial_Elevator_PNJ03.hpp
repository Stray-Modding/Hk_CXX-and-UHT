#ifndef UE4SS_SDK_Dial_Elevator_PNJ03_HPP
#define UE4SS_SDK_Dial_Elevator_PNJ03_HPP

class ADial_Elevator_PNJ03_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Dial_Once;                                                                   // 0x0340 (size: 0x1)
    class UTalkableComponent* TalkingComponent;                                       // 0x0348 (size: 0x8)
    class ABP_Droid_C* TalkingDroid;                                                  // 0x0350 (size: 0x8)
    class UMaterialInstance* M Base Screen Material;                                  // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Elevator_PNJ03(int32 EntryPoint);
}; // Size: 0x360

#endif
