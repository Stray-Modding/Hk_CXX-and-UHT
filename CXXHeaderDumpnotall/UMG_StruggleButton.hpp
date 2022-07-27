#ifndef UE4SS_SDK_UMG_StruggleButton_HPP
#define UE4SS_SDK_UMG_StruggleButton_HPP

class UUMG_StruggleButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* StruggleBlink;
    class UUMG_BindingIcon_C* UMG_BindingIcon;

    ESlateVisibility GetWidgetVisibility();
    void Construct();
    void ExecuteUbergraph_UMG_StruggleButton(int32 EntryPoint);
};

#endif
