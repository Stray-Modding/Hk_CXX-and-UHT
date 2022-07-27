#ifndef UE4SS_SDK_Dial_B12Flat_Translate_PostIt_HPP
#define UE4SS_SDK_Dial_B12Flat_Translate_PostIt_HPP

class ADial_B12Flat_Translate_PostIt_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12Flat_Translate_PostIt(int32 EntryPoint);
}; // Size: 0x340

#endif
