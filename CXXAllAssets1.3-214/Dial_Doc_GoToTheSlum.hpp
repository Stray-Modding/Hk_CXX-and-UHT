#ifndef UE4SS_SDK_Dial_Doc_GoToTheSlum_HPP
#define UE4SS_SDK_Dial_Doc_GoToTheSlum_HPP

class ADial_Doc_GoToTheSlum_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    TEnumAsByte<DialDocGoToTheSlums_State> DialState;                                 // 0x0340 (size: 0x1)
    class ASEQ_GoToTheSlumWithTorchlight_C* SEQ_GoToTheSlum;                          // 0x0348 (size: 0x8)
    bool Dial_KillZurgsIsFinished;                                                    // 0x0350 (size: 0x1)
    bool Dial_CongratulationIsFinished;                                               // 0x0351 (size: 0x1)
    bool Dial_CantOpenFenceIsFinished;                                                // 0x0352 (size: 0x1)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Doc_GoToTheSlum(int32 EntryPoint);
}; // Size: 0x353

#endif
