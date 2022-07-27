#ifndef UE4SS_SDK_UMG_Titles_HPP
#define UE4SS_SDK_UMG_Titles_HPP

class UUMG_Titles_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0268 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UTextBlock* Subtitle;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* TitleBig;                                                       // 0x0288 (size: 0x8)
    class UTextBlock* TitleSmall;                                                     // 0x0290 (size: 0x8)
    class UTexture2D* Image;                                                          // 0x0298 (size: 0x8)

    void Set Opacity(float Opacity);
    void Set TextBig(FText TextBig);
    void Set TextSmall(FText TextBig);
    void Set Subtitle(FText TextBig);
    void ExecuteUbergraph_UMG_Titles(int32 EntryPoint);
}; // Size: 0x2A0

#endif
