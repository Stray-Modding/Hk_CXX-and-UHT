#ifndef UE4SS_SDK_BP_ZurgLeader_AIController_HPP
#define UE4SS_SDK_BP_ZurgLeader_AIController_HPP

class ABP_ZurgLeader_AIController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;                                      // 0x0338 (size: 0x8)
    FName Blackboard_CurrentState_KeyName;                                            // 0x0340 (size: 0x8)
    FName Blackboard_MoveToLocation_KeyName;                                          // 0x0348 (size: 0x8)

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
}; // Size: 0x350

#endif
