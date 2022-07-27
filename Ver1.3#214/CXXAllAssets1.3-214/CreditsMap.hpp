#ifndef UE4SS_SDK_CreditsMap_HPP
#define UE4SS_SDK_CreditsMap_HPP

class ACreditsMap_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UUMG_Credits_Base_C* CreditsWidget;                                         // 0x0238 (size: 0x8)
    bool CanSkip;                                                                     // 0x0240 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA01DF89A6();
    void Tick_6246EF4646E19036986D72BA01DF89A6(float Ratio);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_MenuSkipKey_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void OnCreditsEnded();
    void BackToMenu();
    void ExecuteUbergraph_CreditsMap(int32 EntryPoint);
}; // Size: 0x241

#endif
