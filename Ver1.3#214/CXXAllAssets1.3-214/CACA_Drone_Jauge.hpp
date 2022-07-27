#ifndef UE4SS_SDK_CACA_Drone_Jauge_HPP
#define UE4SS_SDK_CACA_Drone_Jauge_HPP

class UCACA_Drone_Jauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UProgressBar* SpotLightProgressBar;                                         // 0x0268 (size: 0x8)
    float sinus;                                                                      // 0x0270 (size: 0x4)

    FLinearColor Get_SpotLightProgressBar_FillColorAndOpacity_0();
    void SetIEMProgressBar(float Percent, bool Show/Hide);
    void ExecuteUbergraph_CACA_Drone_Jauge(int32 EntryPoint);
}; // Size: 0x274

#endif
