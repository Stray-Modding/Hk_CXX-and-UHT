#ifndef UE4SS_SDK_UMG_BackpackScreen_Idle_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Idle_HPP

class UUMG_BackpackScreen_Idle_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* IdleCanvas;

    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Idle(int32 EntryPoint);
};

#endif
