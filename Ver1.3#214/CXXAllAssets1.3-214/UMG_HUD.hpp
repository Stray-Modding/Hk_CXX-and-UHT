#ifndef UE4SS_SDK_UMG_HUD_HPP
#define UE4SS_SDK_UMG_HUD_HPP

class UUMG_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* A_FadeIn;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* Y_FadeIn;                                                 // 0x0270 (size: 0x8)
    class UWidgetAnimation* X_FadeIn;                                                 // 0x0278 (size: 0x8)
    class UCanvasPanel* FullScreenVideoPanel;                                         // 0x0280 (size: 0x8)
    class UHorizontalBox* InputDisplayWrapper2;                                       // 0x0288 (size: 0x8)
    bool IsDialogStarted;                                                             // 0x0290 (size: 0x1)
    bool IsXVisible;                                                                  // 0x0291 (size: 0x1)
    bool IsYVisible;                                                                  // 0x0292 (size: 0x1)
    bool IsAVisible;                                                                  // 0x0293 (size: 0x1)
    class ABP_HKHUD_C* HUD;                                                           // 0x0298 (size: 0x8)
    TArray<class UUMG_HUD_ActionDisplay_C*> ActionDisplays;                           // 0x02A0 (size: 0x10)

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
}; // Size: 0x2B0

#endif
