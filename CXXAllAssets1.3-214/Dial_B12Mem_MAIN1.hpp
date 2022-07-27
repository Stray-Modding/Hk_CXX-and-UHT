#ifndef UE4SS_SDK_Dial_B12Mem_MAIN1_HPP
#define UE4SS_SDK_Dial_B12Mem_MAIN1_HPP

class ADial_B12Mem_MAIN1_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Lootable_PostCard_C* PostCard;                                          // 0x0340 (size: 0x8)
    class AActor* DronePosPostcard;                                                   // 0x0348 (size: 0x8)
    class ACameraActor* Camera_Static1;                                               // 0x0350 (size: 0x8)
    class AActor* DronePosInit;                                                       // 0x0358 (size: 0x8)
    class AActor* CatPos;                                                             // 0x0360 (size: 0x8)
    class ACameraActor* Camera_Static2;                                               // 0x0368 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* Camera_Spline1;                              // 0x0370 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAB283F861();
    void Tick_6246EF4646E19036986D72BAB283F861(float Ratio);
    void OnDialogBegan();
    void OnRequestDialog();
    void Dialog End();
    void ExecuteUbergraph_Dial_B12Mem_MAIN1(int32 EntryPoint);
}; // Size: 0x378

#endif
