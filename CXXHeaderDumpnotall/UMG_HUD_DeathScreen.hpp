#ifndef UE4SS_SDK_UMG_HUD_DeathScreen_HPP
#define UE4SS_SDK_UMG_HUD_DeathScreen_HPP

class UUMG_HUD_DeathScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;
    class URichTextBlock* RichTextBlock_272;
    class UTextBlock* TitleBig;
    float Current Opacity;
    int32 Death Delay Seconds;

    void On Death Event(int32 Delay);
    void Display SubText();
    void OnRevive Event();
    void OnInitialized();
    void ExecuteUbergraph_UMG_HUD_DeathScreen(int32 EntryPoint);
};

#endif
