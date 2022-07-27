#ifndef UE4SS_SDK_DIAL_NPC_Arrested_HPP
#define UE4SS_SDK_DIAL_NPC_Arrested_HPP

class ADIAL_NPC_Arrested_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_NPC_Arrested(int32 EntryPoint);
}; // Size: 0x340

#endif
