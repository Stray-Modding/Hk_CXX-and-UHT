#ifndef UE4SS_SDK_Dial_Clementine_JailExit_HPP
#define UE4SS_SDK_Dial_Clementine_JailExit_HPP

class ADial_Clementine_JailExit_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ABP_SwitchWithJump_C* Trigger;                                              // 0x0340 (size: 0x8)
    TEnumAsByte<Enum_Dial_JailExit> DialState;                                        // 0x0348 (size: 0x1)
    class AActor* TriggerExitDoor;                                                    // 0x0350 (size: 0x8)
    bool Dial_ExitDoorIsFinished;                                                     // 0x0358 (size: 0x1)
    bool Dial_GoInsideTruckIsFinished;                                                // 0x0359 (size: 0x1)
    class AActor* DroneTarget;                                                        // 0x0360 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Clementine_JailExit(int32 EntryPoint);
}; // Size: 0x368

#endif
