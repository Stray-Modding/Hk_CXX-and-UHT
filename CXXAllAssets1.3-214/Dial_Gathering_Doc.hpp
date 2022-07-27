#ifndef UE4SS_SDK_Dial_Gathering_Doc_HPP
#define UE4SS_SDK_Dial_Gathering_Doc_HPP

class ADial_Gathering_Doc_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Talked Once;                                                                 // 0x0340 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Gathering_Doc(int32 EntryPoint);
}; // Size: 0x341

#endif
