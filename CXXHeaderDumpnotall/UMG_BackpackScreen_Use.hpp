#ifndef UE4SS_SDK_UMG_BackpackScreen_Use_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Use_HPP

class UUMG_BackpackScreen_Use_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Use_Pulse;
    class UCanvasPanel* UseCanvas;
    bool Using;

    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Use(int32 EntryPoint);
};

#endif
