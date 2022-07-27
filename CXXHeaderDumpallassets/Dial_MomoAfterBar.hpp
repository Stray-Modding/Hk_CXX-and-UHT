#ifndef UE4SS_SDK_Dial_MomoAfterBar_HPP
#define UE4SS_SDK_Dial_MomoAfterBar_HPP

class ADial_MomoAfterBar_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool CineBarDone;                                                                 // 0x0340 (size: 0x1)
    bool MoveToDone;                                                                  // 0x0341 (size: 0x1)
    bool MomoKnockAtDoorDone;                                                         // 0x0342 (size: 0x1)
    bool MomoExplainDone;                                                             // 0x0343 (size: 0x1)
    class ABP_Droid_C* Momo;                                                          // 0x0348 (size: 0x8)
    bool MomoNoteBookGiven;                                                           // 0x0350 (size: 0x1)
    bool MomoBackToBar;                                                               // 0x0351 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_MomoAfterBar(int32 EntryPoint);
}; // Size: 0x352

#endif
