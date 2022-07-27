#ifndef UE4SS_SDK_UMG_GammaSettingsWidget_HPP
#define UE4SS_SDK_UMG_GammaSettingsWidget_HPP

class UUMG_GammaSettingsWidget_C : public UGammaSettingsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UHorizontalBox* HBoxProgressBar;                                            // 0x0418 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_GammaSettingsWidget(int32 EntryPoint);
}; // Size: 0x420

#endif
