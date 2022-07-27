#ifndef UE4SS_SDK_BTS_Sentinel_Vision_HPP
#define UE4SS_SDK_BTS_Sentinel_Vision_HPP

class UBTS_Sentinel_Vision_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    class ABP_SentinelAI_C* BP_Sentinel;                                              // 0x00A0 (size: 0x8)
    class ABP_Sentinel_AiController_C* BP_Sentinel_AiController;                      // 0x00A8 (size: 0x8)
    TArray<class AActor*> ActorInVisionRange;                                         // 0x00B0 (size: 0x10)
    FBlackboardKeySelector TargetActorKeySelector;                                    // 0x00C0 (size: 0x28)
    FBlackboardKeySelector TargetIsCurrentlyVisibleKeySelector;                       // 0x00E8 (size: 0x28)
    FBlackboardKeySelector LastTargetLocationKeySelector;                             // 0x0110 (size: 0x28)
    FBlackboardKeySelector LastTargetVelocityKeySelector;                             // 0x0138 (size: 0x28)
    FBlackboardKeySelector CurrentStateKeySelector;                                   // 0x0160 (size: 0x28)
    class AActor* TempTargetActor;                                                    // 0x0188 (size: 0x8)
    FBlackboardKeySelector WasChasingKeySelector;                                     // 0x0190 (size: 0x28)
    FTimerHandle LostVisionTimerHandle;                                               // 0x01B8 (size: 0x8)
    FBlackboardKeySelector LastVisibleTargetLocation;                                 // 0x01C0 (size: 0x28)

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void Timer_SetTargetNull_Event();
    void OnLostVisionTimerEvent();
    void ExecuteUbergraph_BTS_Sentinel_Vision(int32 EntryPoint);
}; // Size: 0x1E8

#endif
