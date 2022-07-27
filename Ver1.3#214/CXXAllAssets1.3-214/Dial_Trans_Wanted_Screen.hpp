#ifndef UE4SS_SDK_Dial_Trans_Wanted_Screen_HPP
#define UE4SS_SDK_Dial_Trans_Wanted_Screen_HPP

class ADial_Trans_Wanted_Screen_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Trans_Wanted_Screen(int32 EntryPoint);
}; // Size: 0x340

#endif
