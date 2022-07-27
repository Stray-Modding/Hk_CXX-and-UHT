#ifndef UE4SS_SDK_UMG_BackpackScreen_Idle_HPP
#define UE4SS_SDK_UMG_BackpackScreen_Idle_HPP

class UUMG_BackpackScreen_Idle_C : public UBackpackScreenUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UCanvasPanel* IdleCanvas;                                                   // 0x0270 (size: 0x8)

    void OnBackpackSet();
    void ExecuteUbergraph_UMG_BackpackScreen_Idle(int32 EntryPoint);
}; // Size: 0x278

#endif
