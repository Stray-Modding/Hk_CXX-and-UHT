#ifndef UE4SS_SDK_UMG_HUD_DeathScreen_HPP
#define UE4SS_SDK_UMG_HUD_DeathScreen_HPP

class UUMG_HUD_DeathScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0268 (size: 0x8)
    class URichTextBlock* RichTextBlock_272;                                          // 0x0270 (size: 0x8)
    class UTextBlock* TitleBig;                                                       // 0x0278 (size: 0x8)
    float Current Opacity;                                                            // 0x0280 (size: 0x4)
    int32 Death Delay Seconds;                                                        // 0x0284 (size: 0x4)

    void On Death Event(int32 Delay);
    void Display SubText();
    void OnRevive Event();
    void OnInitialized();
    void ExecuteUbergraph_UMG_HUD_DeathScreen(int32 EntryPoint);
}; // Size: 0x288

#endif
