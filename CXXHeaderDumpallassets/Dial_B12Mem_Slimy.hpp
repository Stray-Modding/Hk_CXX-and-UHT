#ifndef UE4SS_SDK_Dial_B12Mem_Slimy_HPP
#define UE4SS_SDK_Dial_B12Mem_Slimy_HPP

class ADial_B12Mem_Slimy_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_Slime;                                                      // 0x0340 (size: 0x8)

    void OnDialogBegan();
    void OnRequestDialog();
    void ExecuteUbergraph_Dial_B12Mem_Slimy(int32 EntryPoint);
}; // Size: 0x348

#endif
