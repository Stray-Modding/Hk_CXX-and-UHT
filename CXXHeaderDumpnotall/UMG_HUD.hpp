#ifndef UE4SS_SDK_UMG_HUD_HPP
#define UE4SS_SDK_UMG_HUD_HPP

class UUMG_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* A_FadeIn;
    class UWidgetAnimation* Y_FadeIn;
    class UWidgetAnimation* X_FadeIn;
    class UCanvasPanel* FullScreenVideoPanel;
    class UHorizontalBox* InputDisplayWrapper2;
    bool IsDialogStarted;
    bool IsXVisible;
    bool IsYVisible;
    bool IsAVisible;
    class ABP_HKHUD_C* HUD;
    TArray<class UUMG_HUD_ActionDisplay_C*> ActionDisplays;

    void UpdateActionDisplay();
    void Complete_6246EF4646E19036986D72BAC7260F9E();
    void Tick_6246EF4646E19036986D72BAC7260F9E(float Ratio);
    void Complete_6246EF4646E19036986D72BABD433E95();
    void Tick_6246EF4646E19036986D72BABD433E95(float Ratio);
    void Construct();
    void OnActionDisplayChanged(class AHKHUD* _hud);
    void OnControllerTypeChanged();
    void OnActionDisplayHidden();
    void OnActionDisplayShown();
    void FlushActionDisplayAnimations();
    void ExecuteUbergraph_UMG_HUD(int32 EntryPoint);
};

#endif
