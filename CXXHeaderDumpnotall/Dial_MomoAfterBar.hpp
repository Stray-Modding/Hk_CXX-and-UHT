#ifndef UE4SS_SDK_Dial_MomoAfterBar_HPP
#define UE4SS_SDK_Dial_MomoAfterBar_HPP

class ADial_MomoAfterBar_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool CineBarDone;
    bool MoveToDone;
    bool MomoKnockAtDoorDone;
    bool MomoExplainDone;
    class ABP_Droid_C* Momo;
    bool MomoNoteBookGiven;
    bool MomoBackToBar;

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_MomoAfterBar(int32 EntryPoint);
};

#endif
