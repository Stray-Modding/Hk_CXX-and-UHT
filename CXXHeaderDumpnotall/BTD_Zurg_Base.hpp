#ifndef UE4SS_SDK_BTD_Zurg_Base_HPP
#define UE4SS_SDK_BTD_Zurg_Base_HPP

class UBTD_Zurg_Base_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_ZurgLeader_AIController_C* ZurgLeaderAIC;
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_Zurg_Base(int32 EntryPoint);
};

#endif
