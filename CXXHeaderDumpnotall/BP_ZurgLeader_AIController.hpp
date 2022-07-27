#ifndef UE4SS_SDK_BP_ZurgLeader_AIController_HPP
#define UE4SS_SDK_BP_ZurgLeader_AIController_HPP

class ABP_ZurgLeader_AIController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;
    FName Blackboard_CurrentState_KeyName;
    FName Blackboard_MoveToLocation_KeyName;

    void SetSwarmState(class AZurgPawnSlave* Zurg Triggerer, EZurgState New State);
    void GetCurrentState(EZurgState& Current State);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceivePossess(class APawn* PossessedPawn);
    void StreamedOut_Event_0(class UStreamingComponent* _component);
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void OnZurgLeaderDeactivated_Event(class AZurgPawnLeader* _zurgLeader);
    void OnZurgLeaderActivated_Event(class AZurgPawnLeader* _zurgLeader);
    void OnZurgSlaveSpawned_Event_0(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    void OnZurgSlaveDestroyed_Event_0(class AZurgPawnLeader* _zurgLeader, class AZurgPawnSlave* _slave);
    void StartLogic();
    void StopLogic();
    void ExecuteUbergraph_BP_ZurgLeader_AIController(int32 EntryPoint);
};

#endif
