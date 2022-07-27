#ifndef UE4SS_SDK_SubtitlesCine_HPP
#define UE4SS_SDK_SubtitlesCine_HPP

class USubtitlesCine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_70;                                                   // 0x0268 (size: 0x8)

    void SetText(FText TextToChange);
    void ExecuteUbergraph_SubtitlesCine(int32 EntryPoint);
}; // Size: 0x270

#endif
