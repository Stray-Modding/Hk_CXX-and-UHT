#ifndef UE4SS_SDK_COMP_InteractStartB12Dial_HPP
#define UE4SS_SDK_COMP_InteractStartB12Dial_HPP

class UCOMP_InteractStartB12Dial_C : public UBackpackUsableComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    class ADialog* m_dialog;                                                          // 0x0558 (size: 0x8)

    void _OnUseStarted(class ACatPawn* _cat);
    void _OnAfterUseDone(class ACatPawn* _cat);
    void SetDial(class ADialog* m_dialog);
    void ExecuteUbergraph_COMP_InteractStartB12Dial(int32 EntryPoint);
}; // Size: 0x560

#endif
