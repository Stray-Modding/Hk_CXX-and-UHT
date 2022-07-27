#ifndef UE4SS_SDK_Dial_RobotInFrontOfLaundry_HPP
#define UE4SS_SDK_Dial_RobotInFrontOfLaundry_HPP

class ADial_RobotInFrontOfLaundry_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0340 (size: 0x8)
    class ASeq_BucketThrower_C* Sequ_thrower;                                         // 0x0348 (size: 0x8)
    class AActor* Look up;                                                            // 0x0350 (size: 0x8)
    class AActor* Look Koba;                                                          // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_RobotInFrontOfLaundry(int32 EntryPoint);
}; // Size: 0x360

#endif
