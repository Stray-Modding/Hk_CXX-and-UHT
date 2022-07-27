#ifndef UE4SS_SDK_Dial_B12Mem_MAIN3_HPP
#define UE4SS_SDK_Dial_B12Mem_MAIN3_HPP

class ADial_B12Mem_MAIN3_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ACameraActor* Camera_Static1;                                               // 0x0340 (size: 0x8)
    class ACameraActor* Camera_Static2;                                               // 0x0348 (size: 0x8)
    class AActor* DronePos;                                                           // 0x0350 (size: 0x8)
    class AActor* CatPosInitTP;                                                       // 0x0358 (size: 0x8)
    class AActor* CatPos1;                                                            // 0x0360 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline1;                              // 0x0368 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline2;                              // 0x0370 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline3;                              // 0x0378 (size: 0x8)
    class AActor* CatPos2;                                                            // 0x0380 (size: 0x8)
    class ASeq_Antvillage_B12Breakdown_C* Seq B12 Breakdown;                          // 0x0388 (size: 0x8)
    class AActor* DronePos2;                                                          // 0x0390 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline4;                              // 0x0398 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA45765ADE();
    void Tick_6246EF4646E19036986D72BA45765ADE(float Ratio);
    void Complete_6246EF4646E19036986D72BA8A1CCE77();
    void Tick_6246EF4646E19036986D72BA8A1CCE77(float Ratio);
    void Complete_6246EF4646E19036986D72BA25543F25();
    void Tick_6246EF4646E19036986D72BA25543F25(float Ratio);
    void Complete_6246EF4646E19036986D72BAA0492BC9();
    void Tick_6246EF4646E19036986D72BAA0492BC9(float Ratio);
    void OnDialogBegan();
    void OnRequestDialog();
    void Dialog End();
    void ExecuteUbergraph_Dial_B12Mem_MAIN3(int32 EntryPoint);
}; // Size: 0x3A0

#endif
