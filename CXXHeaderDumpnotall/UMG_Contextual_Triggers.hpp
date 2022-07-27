#ifndef UE4SS_SDK_UMG_Contextual_Triggers_HPP
#define UE4SS_SDK_UMG_Contextual_Triggers_HPP

class UUMG_Contextual_Triggers_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RightIn;
    class UWidgetAnimation* LeftIn;
    class UCanvasPanel* CanvasPanel_0;
    class UUMG_BindingIcon_C* LeftTrigger;
    class UUMG_BindingIcon_C* RightTrigger;
    bool IsLeftVisible;
    bool IsRightVisible;
    bool NewVar_0;

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
};

#endif
