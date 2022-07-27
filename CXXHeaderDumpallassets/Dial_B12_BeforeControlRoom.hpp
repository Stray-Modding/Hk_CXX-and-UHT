#ifndef UE4SS_SDK_Dial_B12_BeforeControlRoom_HPP
#define UE4SS_SDK_Dial_B12_BeforeControlRoom_HPP

class ADial_B12_BeforeControlRoom_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool DialEnded;                                                                   // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12_BeforeControlRoom(int32 EntryPoint);
}; // Size: 0x341

#endif
