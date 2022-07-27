#ifndef UE4SS_SDK_Dial_B12Mem_MAIN5_HPP
#define UE4SS_SDK_Dial_B12Mem_MAIN5_HPP

class ADial_B12Mem_MAIN5_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* DronePos;                                                           // 0x0340 (size: 0x8)
    class AActor* LookAtDoor;                                                         // 0x0348 (size: 0x8)
    class AActor* LookAway;                                                           // 0x0350 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline1;                              // 0x0358 (size: 0x8)
    class AActor* CatPos;                                                             // 0x0360 (size: 0x8)
    class AActor* cat_TP_Pos;                                                         // 0x0368 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline2;                              // 0x0370 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline3;                              // 0x0378 (size: 0x8)
    class ACameraActor* Camera_Static1;                                               // 0x0380 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA663FF403();
    void Tick_6246EF4646E19036986D72BA663FF403(float Ratio);
    void Complete_6246EF4646E19036986D72BA46D42500();
    void Tick_6246EF4646E19036986D72BA46D42500(float Ratio);
    void Complete_6246EF4646E19036986D72BA96116063();
    void Tick_6246EF4646E19036986D72BA96116063(float Ratio);
    void OnDialogBegan();
    void OnRequestDialog();
    void Dialog End();
    void ExecuteUbergraph_Dial_B12Mem_MAIN5(int32 EntryPoint);
}; // Size: 0x388

#endif
