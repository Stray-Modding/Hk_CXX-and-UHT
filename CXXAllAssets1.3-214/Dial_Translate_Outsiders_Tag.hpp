#ifndef UE4SS_SDK_Dial_Translate_Outsiders_Tag_HPP
#define UE4SS_SDK_Dial_Translate_Outsiders_Tag_HPP

class ADial_Translate_Outsiders_Tag_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Translate_Outsiders_Tag(int32 EntryPoint);
}; // Size: 0x340

#endif
