#ifndef UE4SS_SDK_Dial_B12_AfterFinalScene_HPP
#define UE4SS_SDK_Dial_B12_AfterFinalScene_HPP

class ADial_B12_AfterFinalScene_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Dial Ended;                                                                  // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12_AfterFinalScene(int32 EntryPoint);
}; // Size: 0x341

#endif
