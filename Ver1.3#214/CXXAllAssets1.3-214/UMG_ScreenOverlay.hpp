#ifndef UE4SS_SDK_UMG_ScreenOverlay_HPP
#define UE4SS_SDK_UMG_ScreenOverlay_HPP

class UUMG_ScreenOverlay_C : public UUserWidget
{
    class UImage* Overlay;                                                            // 0x0260 (size: 0x8)
    FRuntimeFloatCurve AlphaCorrectionCurve;                                          // 0x0268 (size: 0x88)
    FLinearColor UncorrectedColor;                                                    // 0x02F0 (size: 0x10)

    void GetColor(FLinearColor& Color);
    void SetColor(FLinearColor Color);
}; // Size: 0x300

#endif
