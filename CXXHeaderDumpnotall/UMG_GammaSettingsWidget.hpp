#ifndef UE4SS_SDK_UMG_GammaSettingsWidget_HPP
#define UE4SS_SDK_UMG_GammaSettingsWidget_HPP

class UUMG_GammaSettingsWidget_C : public UGammaSettingsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HBoxProgressBar;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UMG_GammaSettingsWidget(int32 EntryPoint);
};

#endif
