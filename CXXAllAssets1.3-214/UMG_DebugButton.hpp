#ifndef UE4SS_SDK_UMG_DebugButton_HPP
#define UE4SS_SDK_UMG_DebugButton_HPP

class UUMG_DebugButton_C : public UUserWidget
{
    class UButton* Button_84;                                                         // 0x0260 (size: 0x8)
    class UImage* Image_53;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_130;                                                  // 0x0270 (size: 0x8)
    class UDebugMenuEntry* Entry;                                                     // 0x0278 (size: 0x8)

    void SetFocused(bool Focused);
    void SetEntry(class UDebugMenuEntry* Entry);
}; // Size: 0x280

#endif
