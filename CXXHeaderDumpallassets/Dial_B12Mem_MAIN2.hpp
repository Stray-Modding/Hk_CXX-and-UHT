#ifndef UE4SS_SDK_Dial_B12Mem_MAIN2_HPP
#define UE4SS_SDK_Dial_B12Mem_MAIN2_HPP

class ADial_B12Mem_MAIN2_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ACameraActor* staticCam1;                                                   // 0x0340 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* splineCamera1;                               // 0x0348 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* splineCamera2;                               // 0x0350 (size: 0x8)
    class AActor* CatPos;                                                             // 0x0358 (size: 0x8)
    class AActor* DronePos;                                                           // 0x0360 (size: 0x8)
    class ABP_Zipline_C* Zipline;                                                     // 0x0368 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* splineCamera3;                               // 0x0370 (size: 0x8)
    bool dialMemoriesIsFinished;                                                      // 0x0378 (size: 0x1)

    void Complete_6246EF4646E19036986D72BABA898721();
    void Tick_6246EF4646E19036986D72BABA898721(float Ratio);
    void Complete_6246EF4646E19036986D72BAA1F85047();
    void Tick_6246EF4646E19036986D72BAA1F85047(float Ratio);
    void OnDialogBegan();
    void OnRequestDialog();
    void ExecuteUbergraph_Dial_B12Mem_MAIN2(int32 EntryPoint);
}; // Size: 0x379

#endif
