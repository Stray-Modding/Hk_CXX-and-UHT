#ifndef UE4SS_SDK_Dial_DocEndOfDeadEnd_HPP
#define UE4SS_SDK_Dial_DocEndOfDeadEnd_HPP

class ADial_DocEndOfDeadEnd_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    class ASEQ_SaveDocFinal_C* seq save doc final;                                    // 0x0340 (size: 0x8)
    bool Talked;                                                                      // 0x0348 (size: 0x1)
    class ABP_Droid_C* Doc;                                                           // 0x0350 (size: 0x8)

    void LogicTrigger();
    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_DocEndOfDeadEnd(int32 EntryPoint);
}; // Size: 0x358

#endif
