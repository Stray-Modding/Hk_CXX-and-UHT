#ifndef UE4SS_SDK_DIAL_Club_Ending_HPP
#define UE4SS_SDK_DIAL_Club_Ending_HPP

class ADIAL_Club_Ending_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool Ended;                                                                       // 0x0340 (size: 0x1)
    class ABP_Droid_C* blaser;                                                        // 0x0348 (size: 0x8)
    class ABP_Droid_C* Clem;                                                          // 0x0350 (size: 0x8)
    class AActor* DronePos1;                                                          // 0x0358 (size: 0x8)
    class AActor* DronePos2;                                                          // 0x0360 (size: 0x8)
    bool Dial1Done;                                                                   // 0x0368 (size: 0x1)
    bool Dial2Done;                                                                   // 0x0369 (size: 0x1)
    class ALevelSequenceActor* ClemArrest_Seq;                                        // 0x0370 (size: 0x8)

    void OnDialogBegan();
    void ExecuteUbergraph_DIAL_Club_Ending(int32 EntryPoint);
}; // Size: 0x378

#endif
