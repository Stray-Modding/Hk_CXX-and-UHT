#ifndef UE4SS_SDK_UMG_ButtonFeedback_HPP
#define UE4SS_SDK_UMG_ButtonFeedback_HPP

class UUMG_ButtonFeedback_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* On;                                                       // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0270 (size: 0x8)
    class UUMG_BindingIcon_C* UMG_BindingIcon;                                        // 0x0278 (size: 0x8)

    void SetInputBinding(FName BindingName);
    void SetDisplayedText(FText DisplayedText);
    void Construct();
    void ExecuteUbergraph_UMG_ButtonFeedback(int32 EntryPoint);
}; // Size: 0x280

#endif
