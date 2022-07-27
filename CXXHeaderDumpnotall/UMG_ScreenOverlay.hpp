#ifndef UE4SS_SDK_UMG_ScreenOverlay_HPP
#define UE4SS_SDK_UMG_ScreenOverlay_HPP

class UUMG_ScreenOverlay_C : public UUserWidget
{
    class UImage* Overlay;
    FRuntimeFloatCurve AlphaCorrectionCurve;
    FLinearColor UncorrectedColor;

    void GetColor(FLinearColor& Color);
    void SetColor(FLinearColor Color);
};

#endif
