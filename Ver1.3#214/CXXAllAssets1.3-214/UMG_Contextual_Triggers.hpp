#ifndef UE4SS_SDK_UMG_Contextual_Triggers_HPP
#define UE4SS_SDK_UMG_Contextual_Triggers_HPP

class UUMG_Contextual_Triggers_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* RightIn;                                                  // 0x0268 (size: 0x8)
    class UWidgetAnimation* LeftIn;                                                   // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UUMG_BindingIcon_C* LeftTrigger;                                            // 0x0280 (size: 0x8)
    class UUMG_BindingIcon_C* RightTrigger;                                           // 0x0288 (size: 0x8)
    bool IsLeftVisible;                                                               // 0x0290 (size: 0x1)
    bool IsRightVisible;                                                              // 0x0291 (size: 0x1)
    bool NewVar_0;                                                                    // 0x0292 (size: 0x1)

    ESlateVisibility GetWidgetVisibility();
    void Complete_6246EF4646E19036986D72BAEDD2645E();
    void Tick_6246EF4646E19036986D72BAEDD2645E(float Ratio);
    void SetLeftVisible(bool Visible);
    void SetRightVisible(bool Visible);
    void Reset();
    void SetLeftOpacity(float Float);
    void SetRightOpacity(float Float);
    void FadeOut(float Time);
    void ResetFadeOut();
    void ExecuteUbergraph_UMG_Contextual_Triggers(int32 EntryPoint);
}; // Size: 0x293

#endif
