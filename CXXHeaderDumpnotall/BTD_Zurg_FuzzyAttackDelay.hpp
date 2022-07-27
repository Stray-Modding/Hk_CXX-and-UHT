#ifndef UE4SS_SDK_BTD_Zurg_FuzzyAttackDelay_HPP
#define UE4SS_SDK_BTD_Zurg_FuzzyAttackDelay_HPP

class UBTD_Zurg_FuzzyAttackDelay_C : public UBTD_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FFuzzyBool FuzzyDelay;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_Zurg_FuzzyAttackDelay(int32 EntryPoint);
};

#endif
