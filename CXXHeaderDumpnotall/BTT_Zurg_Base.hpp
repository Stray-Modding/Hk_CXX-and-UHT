#ifndef UE4SS_SDK_BTT_Zurg_Base_HPP
#define UE4SS_SDK_BTT_Zurg_Base_HPP

class UBTT_Zurg_Base_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;
    class ABP_ZurgLeader_AIController_C* ZurgLeaderAIC;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Zurg_Base(int32 EntryPoint);
};

#endif
