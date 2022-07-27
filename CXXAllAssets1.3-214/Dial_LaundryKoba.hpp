#ifndef UE4SS_SDK_Dial_LaundryKoba_HPP
#define UE4SS_SDK_Dial_LaundryKoba_HPP

class ADial_LaundryKoba_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASeq_BucketThrower_C* Sequ_thrower;                                         // 0x0340 (size: 0x8)
    class UAnimSequence* Anim_Vener;                                                  // 0x0348 (size: 0x8)
    class UAnimSequence* Anim_sponge;                                                 // 0x0350 (size: 0x8)
    class ABP_Droid_C* Koba;                                                          // 0x0358 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_LaundryKoba(int32 EntryPoint);
}; // Size: 0x360

#endif
