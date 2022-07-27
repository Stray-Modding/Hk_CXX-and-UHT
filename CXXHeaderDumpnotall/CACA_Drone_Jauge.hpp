#ifndef UE4SS_SDK_CACA_Drone_Jauge_HPP
#define UE4SS_SDK_CACA_Drone_Jauge_HPP

class UCACA_Drone_Jauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* SpotLightProgressBar;
    float sinus;

    FLinearColor Get_SpotLightProgressBar_FillColorAndOpacity_0();
    void SetIEMProgressBar(float Percent, bool Show/Hide);
    void ExecuteUbergraph_CACA_Drone_Jauge(int32 EntryPoint);
};

#endif
