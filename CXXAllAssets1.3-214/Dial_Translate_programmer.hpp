#ifndef UE4SS_SDK_Dial_Translate_programmer_HPP
#define UE4SS_SDK_Dial_Translate_programmer_HPP

class ADial_Translate_programmer_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool isElliotOpen;                                                                // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Translate_programmer(int32 EntryPoint);
}; // Size: 0x341

#endif
