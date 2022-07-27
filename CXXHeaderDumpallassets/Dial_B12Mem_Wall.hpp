#ifndef UE4SS_SDK_Dial_B12Mem_Wall_HPP
#define UE4SS_SDK_Dial_B12Mem_Wall_HPP

class ADial_B12Mem_Wall_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Look_At_wall;                                                       // 0x0340 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera;                                      // 0x0348 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA491EE521();
    void Tick_6246EF4646E19036986D72BA491EE521(float Ratio);
    void OnDialogBegan();
    void OnRequestDialog();
    void ExecuteUbergraph_Dial_B12Mem_Wall(int32 EntryPoint);
}; // Size: 0x350

#endif
