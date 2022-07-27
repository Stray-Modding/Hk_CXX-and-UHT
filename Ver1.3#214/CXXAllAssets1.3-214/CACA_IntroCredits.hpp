#ifndef UE4SS_SDK_CACA_IntroCredits_HPP
#define UE4SS_SDK_CACA_IntroCredits_HPP

class UCACA_IntroCredits_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* 01_anm;                                                   // 0x0268 (size: 0x8)
    class UImage* Black_Background;                                                   // 0x0270 (size: 0x8)

    void Construct();
    void SetText(FText TextToChange);
    void ExecuteUbergraph_CACA_IntroCredits(int32 EntryPoint);
}; // Size: 0x278

#endif
