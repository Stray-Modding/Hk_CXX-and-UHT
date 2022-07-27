#ifndef UE4SS_SDK_UMG_BackpackScreen_Use_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Use_HPP

class UUMG_BackpackScreen_Use_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Use_Pulse;                                                // 0x0270 (size: 0x8)
    class UCanvasPanel* UseCanvas;                                                    // 0x0278 (size: 0x8)
    bool Using;                                                                       // 0x0280 (size: 0x1)

    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Use(int32 EntryPoint);
}; // Size: 0x281

#endif
