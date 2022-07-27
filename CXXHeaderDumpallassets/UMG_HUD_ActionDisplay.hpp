#ifndef UE4SS_SDK_UMG_HUD_ActionDisplay_HPP
#define UE4SS_SDK_UMG_HUD_ActionDisplay_HPP

class UUMG_HUD_ActionDisplay_C : public UUserWidget
{
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0260 (size: 0x8)
    class UHorizontalBox* IconsContainer;                                             // 0x0268 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0270 (size: 0x8)
    class UUMG_KeyIcon_C* UMG_KeyIcon;                                                // 0x0278 (size: 0x8)
    class UUMG_KeyIcon_C* UMG_KeyIcon_117;                                            // 0x0280 (size: 0x8)

    ESlateVisibility GetWidgetVisibility();
    void SetImageTexture(class UImage* Image Widget, class UTexture* Texture);
    void SetData(FActionDisplay ActionDisplay);
}; // Size: 0x288

#endif
