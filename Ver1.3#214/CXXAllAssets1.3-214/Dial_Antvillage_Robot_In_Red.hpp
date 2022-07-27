#ifndef UE4SS_SDK_Dial_Antvillage_Robot_In_Red_HPP
#define UE4SS_SDK_Dial_Antvillage_Robot_In_Red_HPP

class ADial_Antvillage_Robot_In_Red_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool IsTVworking;                                                                 // 0x0340 (size: 0x1)
    bool TalkedOnce;                                                                  // 0x0341 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Antvillage_Robot_In_Red(int32 EntryPoint);
}; // Size: 0x342

#endif
