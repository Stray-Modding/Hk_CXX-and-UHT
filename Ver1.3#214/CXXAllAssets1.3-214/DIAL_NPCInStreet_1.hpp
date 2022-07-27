#ifndef UE4SS_SDK_DIAL_NPCInStreet_1_HPP
#define UE4SS_SDK_DIAL_NPCInStreet_1_HPP

class ADIAL_NPCInStreet_1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_NPCInStreet_1(int32 EntryPoint);
}; // Size: 0x340

#endif
