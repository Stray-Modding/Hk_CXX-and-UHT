#ifndef UE4SS_SDK_Dial_Antvillage_Welcomer_HPP
#define UE4SS_SDK_Dial_Antvillage_Welcomer_HPP

class ADial_Antvillage_Welcomer_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_Droid_C* Droid_Welcome;                                                 // 0x0340 (size: 0x8)
    class AActor* PositionDrone;                                                      // 0x0348 (size: 0x8)
    class AActor* gerardLookAt;                                                       // 0x0350 (size: 0x8)
    bool TalkedOnce;                                                                  // 0x0358 (size: 0x1)
    bool IsOnSide;                                                                    // 0x0359 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void LogicTrigger();
    void ExecuteUbergraph_Dial_Antvillage_Welcomer(int32 EntryPoint);
}; // Size: 0x35A

#endif
