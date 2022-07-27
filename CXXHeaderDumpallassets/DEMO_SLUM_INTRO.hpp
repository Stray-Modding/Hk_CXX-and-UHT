#ifndef UE4SS_SDK_DEMO_SLUM_INTRO_HPP
#define UE4SS_SDK_DEMO_SLUM_INTRO_HPP

class UDEMO_SLUM_INTRO_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Animation;                                                // 0x0268 (size: 0x8)
    class UImage* Background;                                                         // 0x0270 (size: 0x8)
    class UImage* STRAY_DEMO;                                                         // 0x0278 (size: 0x8)
    class UImage* Subtitle;                                                           // 0x0280 (size: 0x8)
    class UImage* Title;                                                              // 0x0288 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_DEMO_SLUM_INTRO(int32 EntryPoint);
}; // Size: 0x290

#endif
