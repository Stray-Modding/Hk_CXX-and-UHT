#ifndef UE4SS_SDK_BP_DialogBase_HPP
#define UE4SS_SDK_BP_DialogBase_HPP

class ABP_DialogBase_C : public ADialog
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool Randomize_Dialog_Variation;
    int32 Dialog_Variation;

    void OnItemShown(class ULootableComponent* _lootable);
    void OnDialogBegan();
    void OnMeetupBegan();
    void ReceiveBeginPlay();
    void Tech_Object();
    void Key_Object();
    void ExecuteUbergraph_BP_DialogBase(int32 EntryPoint);
};

#endif
