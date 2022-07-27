#ifndef UE4SS_SDK_UMG_ButtonFeedback_HPP
#define UE4SS_SDK_UMG_ButtonFeedback_HPP

class UUMG_ButtonFeedback_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* On;
    class UTextBlock* TextBlock_0;
    class UUMG_BindingIcon_C* UMG_BindingIcon;

    void SetInputBinding(FName BindingName);
    void SetDisplayedText(FText DisplayedText);
    void Construct();
    void ExecuteUbergraph_UMG_ButtonFeedback(int32 EntryPoint);
};

#endif
