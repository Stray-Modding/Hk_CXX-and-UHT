#ifndef UE4SS_SDK_UMG_Cinemascope_HPP
#define UE4SS_SDK_UMG_Cinemascope_HPP

class UUMG_Cinemascope_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* GoIn_widescreen;
    class UWidgetAnimation* GoIn;
    bool Cinemascope On;

    void FadeIn(float Time);
    void FadeOut(float Time);
    void ExecuteUbergraph_UMG_Cinemascope(int32 EntryPoint);
};

#endif
