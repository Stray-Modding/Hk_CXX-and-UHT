#ifndef UE4SS_SDK_UMG_DebugButton_HPP
#define UE4SS_SDK_UMG_DebugButton_HPP

class UUMG_DebugButton_C : public UUserWidget
{
    class UButton* Button_84;
    class UImage* Image_53;
    class UTextBlock* TextBlock_130;
    class UDebugMenuEntry* Entry;

    void SetFocused(bool Focused);
    void SetEntry(class UDebugMenuEntry* Entry);
};

#endif
