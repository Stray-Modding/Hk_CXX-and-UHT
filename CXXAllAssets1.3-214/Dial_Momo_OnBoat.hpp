#ifndef UE4SS_SDK_Dial_Momo_OnBoat_HPP
#define UE4SS_SDK_Dial_Momo_OnBoat_HPP

class ADial_Momo_OnBoat_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool CatOnBoat;                                                                   // 0x0340 (size: 0x1)
    class ASeq_SlumsToSewers_C* seq slum to sewers;                                   // 0x0348 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Momo_OnBoat(int32 EntryPoint);
}; // Size: 0x350

#endif
