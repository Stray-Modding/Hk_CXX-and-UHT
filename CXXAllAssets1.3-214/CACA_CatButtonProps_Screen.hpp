#ifndef UE4SS_SDK_CACA_CatButtonProps_Screen_HPP
#define UE4SS_SDK_CACA_CatButtonProps_Screen_HPP

class ACACA_CatButtonProps_Screen_C : public ABP_props_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    int32 ScreenNb;                                                                   // 0x0278 (size: 0x4)
    class ABP_sfx_Play_Loop_Sequence_C* computerWorkSound;                            // 0x0280 (size: 0x8)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CACA_CatButtonProps_Screen(int32 EntryPoint);
}; // Size: 0x288

#endif
