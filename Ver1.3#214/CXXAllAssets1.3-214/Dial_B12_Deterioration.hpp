#ifndef UE4SS_SDK_Dial_B12_Deterioration_HPP
#define UE4SS_SDK_Dial_B12_Deterioration_HPP

class ADial_B12_Deterioration_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    TEnumAsByte<E_B12_DeteriorationDialState> Dial_DeteriorationState;                // 0x0340 (size: 0x1)
    bool afterDialog;                                                                 // 0x0341 (size: 0x1)
    class AActor* Drone_Grabbable;                                                    // 0x0348 (size: 0x8)
    bool ShouldReturnToCat;                                                           // 0x0350 (size: 0x1)

    void OnDialogBegan();
    void ExecuteUbergraph_Dial_B12_Deterioration(int32 EntryPoint);
}; // Size: 0x351

#endif
