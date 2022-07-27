#ifndef UE4SS_SDK_BTD_Zurg_FuzzyAttackDelay_HPP
#define UE4SS_SDK_BTD_Zurg_FuzzyAttackDelay_HPP

class UBTD_Zurg_FuzzyAttackDelay_C : public UBTD_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FFuzzyBool FuzzyDelay;                                                            // 0x00C0 (size: 0xC)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_Zurg_FuzzyAttackDelay(int32 EntryPoint);
}; // Size: 0xCC

#endif
