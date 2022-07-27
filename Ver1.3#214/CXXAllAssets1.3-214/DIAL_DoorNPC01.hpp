#ifndef UE4SS_SDK_DIAL_DoorNPC01_HPP
#define UE4SS_SDK_DIAL_DoorNPC01_HPP

class ADIAL_DoorNPC01_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Pos_Second_Character;                                               // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_DoorNPC01(int32 EntryPoint);
}; // Size: 0x348

#endif
