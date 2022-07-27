#ifndef UE4SS_SDK_BP_ZurgPawn_Leader_HPP
#define UE4SS_SDK_BP_ZurgPawn_Leader_HPP

class ABP_ZurgPawn_Leader_C : public AZurgPawnLeader
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCOMP_CameraTarget_C* COMP_CameraTarget;
    class UTextRenderComponent* ZurgLeaderText;
    class UBillboardComponent* DaLeaderBillboard;
    class ABP_ZurgZone_C* ZurgZone;
    TMap<class ABP_ZurgPawnSlave_C*, class ABP_Zurg_Interest_Zone_C*> ZurgSlaveInterested;
    class UObject* LastHearedGameplayNoise;
    class AActor* LastProximitySensedActor;
    class ABP_ZurgPawnSlave_C* LastProximitySensedZurgDetector;
    bool bEnableCameraTarget;
    float SpawningDurationInSecond;
    bool bWaitForSpawn;
    bool bAlreadySpawned;
    class AActor* LockedOnThisTarget;
    FTransform InitialTransform;
    class AActor* LastHearedGameplayNoiseEmitter;
    bool IgnoreAllZurgsSound;
    bool IgnoreSelfSound;
    int32 SlaveUnderLightCount;
    TArray<class UAntiZurgSpotlightComponent*> CurrentEnlightingSpotlight;
    float DelayBeforeSpawnWithLogicTrigger;
    class USceneComponent* LockedOnThisTargetComponent;
    FVector LastHearedLocation;

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
};

#endif
