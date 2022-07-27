#ifndef UE4SS_SDK_BTS_Zurg_Leader_Base_HPP
#define UE4SS_SDK_BTS_Zurg_Leader_Base_HPP

class UBTS_Zurg_Leader_Base_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;
    class ABP_ZurgLeader_AIController_C* ZurgLeaderAIC;

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_Zurg_Leader_Base(int32 EntryPoint);
};

#endif
