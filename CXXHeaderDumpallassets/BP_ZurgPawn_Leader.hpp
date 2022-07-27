#ifndef UE4SS_SDK_BP_ZurgPawn_Leader_HPP
#define UE4SS_SDK_BP_ZurgPawn_Leader_HPP

class ABP_ZurgPawn_Leader_C : public AZurgPawnLeader
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UCOMP_CameraTarget_C* COMP_CameraTarget;                                    // 0x0488 (size: 0x8)
    class UTextRenderComponent* ZurgLeaderText;                                       // 0x0490 (size: 0x8)
    class UBillboardComponent* DaLeaderBillboard;                                     // 0x0498 (size: 0x8)
    class ABP_ZurgZone_C* ZurgZone;                                                   // 0x04A0 (size: 0x8)
    TMap<class ABP_ZurgPawnSlave_C*, class ABP_Zurg_Interest_Zone_C*> ZurgSlaveInterested; // 0x04A8 (size: 0x50)
    class UObject* LastHearedGameplayNoise;                                           // 0x04F8 (size: 0x8)
    class AActor* LastProximitySensedActor;                                           // 0x0500 (size: 0x8)
    class ABP_ZurgPawnSlave_C* LastProximitySensedZurgDetector;                       // 0x0508 (size: 0x8)
    bool bEnableCameraTarget;                                                         // 0x0510 (size: 0x1)
    float SpawningDurationInSecond;                                                   // 0x0514 (size: 0x4)
    bool bWaitForSpawn;                                                               // 0x0518 (size: 0x1)
    bool bAlreadySpawned;                                                             // 0x0519 (size: 0x1)
    class AActor* LockedOnThisTarget;                                                 // 0x0520 (size: 0x8)
    FTransform InitialTransform;                                                      // 0x0530 (size: 0x30)
    class AActor* LastHearedGameplayNoiseEmitter;                                     // 0x0560 (size: 0x8)
    bool IgnoreAllZurgsSound;                                                         // 0x0568 (size: 0x1)
    bool IgnoreSelfSound;                                                             // 0x0569 (size: 0x1)
    int32 SlaveUnderLightCount;                                                       // 0x056C (size: 0x4)
    TArray<class UAntiZurgSpotlightComponent*> CurrentEnlightingSpotlight;            // 0x0570 (size: 0x10)
    float DelayBeforeSpawnWithLogicTrigger;                                           // 0x0580 (size: 0x4)
    class USceneComponent* LockedOnThisTargetComponent;                               // 0x0588 (size: 0x8)
    FVector LastHearedLocation;                                                       // 0x0590 (size: 0xC)

    FVector GetObserverLocation();
    void SetKamakizePercent(int32 Percentage);
    void SpawnSlavesAtLocation(int32 Slaves count, float Spawn Radius, FVector Spawn Location, TArray<class AZurgPawnSlave*>& SpawnedZurgs);
    void SetZurgZone(class ABP_ZurgZone_C* New Zurg Zone);
    void PropagateStateFromZurg(class AZurgPawnSlave* Zurg, EZurgState New State);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnDisplayDebug(class UCanvas* _canvas);
    void OnHearedNoise(class UNoisableComponent* _noiseComponent, FVector _location, class AActor* _emitter);
    void State_Sleeping_Enter();
    void OnSwarmDetectProximity(class ABP_ZurgPawnSlave_C* Zurg Sensor, class AActor* Detected Actor);
    void OnInterestPointSlaveEnter(class ABP_ZurgPawnSlave_C* Zurg Slave, const class ABP_Zurg_Interest_Zone_C*& Interest Zone);
    void OnInterestPointSlaveExit(const class ABP_ZurgPawnSlave_C*& Zurg Slave);
    void State_Alerted_Exit();
    void TickDisplayDebug();
    void OnSwarmSeeSomething(class AZurgPawnSlave* _zurgDetector, class AActor* _actor);
    void OnSwarmStopSeeSomething(class AActor* _actor);
    void State_Sleeping_Exit();
    void Spawn(int32 SpawnCount);
    void OnSlaveAnormalyExitSleeping(class ABP_ZurgPawnSlave_C* BP Zurg Pawn);
    void SetLockOnTarget(class AActor* Actor To Lock);
    void State_LockedOnTarget_Enter();
    void State_LockedOnTarget_Exit();
    void State_Chasing_Enter();
    void DetachSlaves();
    void BlueprintOnStreamIn();
    void OnSlaveEnterLight(class UAntiZurgSpotlightComponent* _light, class AZurgPawnSlave* _zurgPawn);
    void OnSlaveExitLight(class UAntiZurgSpotlightComponent* _light, class AZurgPawnSlave* _zurgPawn);
    void State_Routine_Enter();
    void State_Routine_Tick(float _dt);
    void State_Routine_Exit();
    void StartEscaping(class AActor* EscapingActor, float Distance);
    void StopEscaping();
    void State_Idle_Enter();
    void State_Idle_Exit();
    void State_LockedOnTarget_Tick(float _dt);
    void Activated_Enter();
    void State_Idle_Tick(float _dt);
    void Deactivated_Enter();
    void LogicTrigger();
    void SetLockOnTargetComponent(class USceneComponent* Component);
    void ExecuteUbergraph_BP_ZurgPawn_Leader(int32 EntryPoint);
}; // Size: 0x59C

#endif
