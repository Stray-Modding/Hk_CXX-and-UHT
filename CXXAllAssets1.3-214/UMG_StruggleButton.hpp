#ifndef UE4SS_SDK_UMG_StruggleButton_HPP
#define UE4SS_SDK_UMG_StruggleButton_HPP

class UUMG_StruggleButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* StruggleBlink;                                            // 0x0268 (size: 0x8)
    class UUMG_BindingIcon_C* UMG_BindingIcon;                                        // 0x0270 (size: 0x8)

    ESlateVisibility GetWidgetVisibility();
    void Construct();
    void ExecuteUbergraph_UMG_StruggleButton(int32 EntryPoint);
}; // Size: 0x278

#endif
