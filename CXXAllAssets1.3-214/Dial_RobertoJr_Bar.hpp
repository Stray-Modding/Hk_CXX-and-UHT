#ifndef UE4SS_SDK_Dial_RobertoJr_Bar_HPP
#define UE4SS_SDK_Dial_RobertoJr_Bar_HPP

class ADial_RobertoJR_Bar_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool FollowRoberto;                                                               // 0x0340 (size: 0x1)
    class ABP_Droid_C* Roberto;                                                       // 0x0348 (size: 0x8)
    class AActor* Mug;                                                                // 0x0350 (size: 0x8)
    class ABP_Droid_C* Barman;                                                        // 0x0358 (size: 0x8)
    class AActor* BarExitPos;                                                         // 0x0360 (size: 0x8)
    class ADial_BarMan_C* barmanDialog;                                               // 0x0368 (size: 0x8)
    class AActor* FlatPos;                                                            // 0x0370 (size: 0x8)
    class ADial_RobertoJr_Flat_C* dialRobertoJrFlat;                                  // 0x0378 (size: 0x8)
    class ALevelSequenceActor* Bar_Sequence;                                          // 0x0380 (size: 0x8)
    TArray<FDialogLineSynchronizedActor> Synchronized Actors;                         // 0x0388 (size: 0x10)
    class ABP_Droid_C* Momo;                                                          // 0x0398 (size: 0x8)
    class AActor* Momo_Tabouret;                                                      // 0x03A0 (size: 0x8)
    class AActor* Drone_Pos_Cam_04;                                                   // 0x03A8 (size: 0x8)
    FName LookAtId;                                                                   // 0x03B0 (size: 0x8)
    class AActor* Drone_Pos_Seamus;                                                   // 0x03B8 (size: 0x8)
    class AActor* Drone_last dial;                                                    // 0x03C0 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_RobertoJR_Bar(int32 EntryPoint);
}; // Size: 0x3C8

#endif
