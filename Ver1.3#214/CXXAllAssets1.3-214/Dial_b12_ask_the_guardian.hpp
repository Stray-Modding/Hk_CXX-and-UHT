#ifndef UE4SS_SDK_Dial_b12_ask_the_guardian_HPP
#define UE4SS_SDK_Dial_b12_ask_the_guardian_HPP

class ADial_b12_ask_the_guardian_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Guardian;                                                      // 0x0340 (size: 0x8)
    class ADial_Guardian_C* DialGuardian;                                             // 0x0348 (size: 0x8)
    bool SecondDialBlocker;                                                           // 0x0350 (size: 0x1)
    bool StartTranslatingDial;                                                        // 0x0351 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_b12_ask_the_guardian(int32 EntryPoint);
}; // Size: 0x352

#endif
