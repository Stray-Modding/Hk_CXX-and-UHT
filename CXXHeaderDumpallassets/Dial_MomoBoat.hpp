#ifndef UE4SS_SDK_Dial_MomoBoat_HPP
#define UE4SS_SDK_Dial_MomoBoat_HPP

class ADial_MomoBoat_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool ReachedFirstDoor;                                                            // 0x0340 (size: 0x1)
    bool AfterFirstDoor;                                                              // 0x0341 (size: 0x1)
    class ABP_Droid_C* Droid;                                                         // 0x0348 (size: 0x8)
    class AActor* lookat;                                                             // 0x0350 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0358 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void LogicTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dial_MomoBoat(int32 EntryPoint);
}; // Size: 0x359

#endif
