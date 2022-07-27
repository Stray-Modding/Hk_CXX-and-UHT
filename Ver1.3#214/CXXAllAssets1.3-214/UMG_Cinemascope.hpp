#ifndef UE4SS_SDK_UMG_Cinemascope_HPP
#define UE4SS_SDK_UMG_Cinemascope_HPP

class UUMG_Cinemascope_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* GoIn_widescreen;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* GoIn;                                                     // 0x0270 (size: 0x8)
    bool Cinemascope On;                                                              // 0x0278 (size: 0x1)

    void FadeIn(float Time);
    void FadeOut(float Time);
    void ExecuteUbergraph_UMG_Cinemascope(int32 EntryPoint);
}; // Size: 0x279

#endif
