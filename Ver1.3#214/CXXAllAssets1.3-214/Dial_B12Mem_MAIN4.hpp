#ifndef UE4SS_SDK_Dial_B12Mem_MAIN4_HPP
#define UE4SS_SDK_Dial_B12Mem_MAIN4_HPP

class ADial_B12Mem_MAIN4_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class AActor* Cat_Point_Walk0;                                                    // 0x0340 (size: 0x8)
    class AActor* Cat_Point_Walk1;                                                    // 0x0348 (size: 0x8)
    class AActor* Drone_Point_TP1;                                                    // 0x0350 (size: 0x8)
    class AActor* Drone_Point1;                                                       // 0x0358 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline1;                              // 0x0360 (size: 0x8)
    class AActor* Drone_Point_TP2;                                                    // 0x0368 (size: 0x8)
    class AActor* Drone_Point2;                                                       // 0x0370 (size: 0x8)
    class AActor* Cat_Point_TP2;                                                      // 0x0378 (size: 0x8)
    class AActor* Cat_Point_Walk2;                                                    // 0x0380 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline2;                              // 0x0388 (size: 0x8)
    float BlendTime_cam2;                                                             // 0x0390 (size: 0x4)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline3;                              // 0x0398 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x03A0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA7910E127();
    void Tick_6246EF4646E19036986D72BA7910E127(float Ratio);
    void Complete_6246EF4646E19036986D72BAE8EC987D();
    void Tick_6246EF4646E19036986D72BAE8EC987D(float Ratio);
    void Complete_6246EF4646E19036986D72BAF0F18560();
    void Tick_6246EF4646E19036986D72BAF0F18560(float Ratio);
    void OnDialogBegan();
    void Dialog End();
    void OnRequestDialog();
    void Break previous Cat move();
    void ExecuteUbergraph_Dial_B12Mem_MAIN4(int32 EntryPoint);
}; // Size: 0x3A8

#endif
