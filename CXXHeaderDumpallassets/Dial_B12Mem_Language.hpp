#ifndef UE4SS_SDK_Dial_B12Mem_Language_HPP
#define UE4SS_SDK_Dial_B12Mem_Language_HPP

class ADial_B12Mem_Language_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_Writings;                                                   // 0x0340 (size: 0x8)
    class AActor* Look_up;                                                            // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnRequestDialog();
    void ExecuteUbergraph_Dial_B12Mem_Language(int32 EntryPoint);
}; // Size: 0x350

#endif
