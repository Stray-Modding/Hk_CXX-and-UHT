#ifndef UE4SS_SDK_Dial_BarMan_HPP
#define UE4SS_SDK_Dial_BarMan_HPP

class ADial_BarMan_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool CineDialog;                                                                  // 0x0340 (size: 0x1)
    bool CineDone;                                                                    // 0x0341 (size: 0x1)
    class ALevelSequenceActor* Bar_Sequence;                                          // 0x0348 (size: 0x8)
    FDialogLineSynchronized Line Advanced Synchronized;                               // 0x0350 (size: 0x28)
    class ABP_Droid_C* Momo;                                                          // 0x0378 (size: 0x8)
    class AActor* DronePosBarman;                                                     // 0x0380 (size: 0x8)
    class ABP_Droid_C* Barman;                                                        // 0x0388 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_BarMan(int32 EntryPoint);
}; // Size: 0x390

#endif
