#ifndef UE4SS_SDK_Dial_Translate_Vent_Warning_HPP
#define UE4SS_SDK_Dial_Translate_Vent_Warning_HPP

class ADial_Translate_Vent_Warning_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ADial_Elliot_C* Elliot_dial;                                                // 0x0340 (size: 0x8)
    bool Dial_Once;                                                                   // 0x0348 (size: 0x1)
    class AActor* Target_Elliot;                                                      // 0x0350 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_Translate_Vent_Warning(int32 EntryPoint);
}; // Size: 0x358

#endif
