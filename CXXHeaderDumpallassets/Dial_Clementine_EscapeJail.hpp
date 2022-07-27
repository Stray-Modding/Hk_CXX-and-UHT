#ifndef UE4SS_SDK_Dial_Clementine_EscapeJail_HPP
#define UE4SS_SDK_Dial_Clementine_EscapeJail_HPP

class ADial_Clementine_EscapeJail_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    TEnumAsByte<Enum_Dial_Jail> DialState;                                            // 0x0340 (size: 0x1)
    bool Dial_B12RescueIsFinished;                                                    // 0x0341 (size: 0x1)
    bool Dial_CourtyardBriefIsFinished;                                               // 0x0342 (size: 0x1)
    class AActor* TriggerExitDoor;                                                    // 0x0348 (size: 0x8)
    bool Dial_ExitDoorIsFinished;                                                     // 0x0350 (size: 0x1)
    bool Dial_GoInsideTruckIsFinished;                                                // 0x0351 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Clementine_EscapeJail(int32 EntryPoint);
}; // Size: 0x352

#endif
