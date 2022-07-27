#ifndef UE4SS_SDK_UMG_HUD_ActionDisplay_HPP
#define UE4SS_SDK_UMG_HUD_ActionDisplay_HPP

class UUMG_HUD_ActionDisplay_C : public UUserWidget
{
    class UCanvasPanel* CanvasPanel_0;
    class UHorizontalBox* IconsContainer;
    class UTextBlock* Text;
    class UUMG_KeyIcon_C* UMG_KeyIcon;
    class UUMG_KeyIcon_C* UMG_KeyIcon_117;

    ESlateVisibility GetWidgetVisibility();
    void SetImageTexture(class UImage* Image Widget, class UTexture* Texture);
    void SetData(FActionDisplay ActionDisplay);
};

#endif
