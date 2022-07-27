#ifndef UE4SS_SDK_BTT_SentinelAI_Shoot_HPP
#define UE4SS_SDK_BTT_SentinelAI_Shoot_HPP

class UBTT_SentinelAI_Shoot_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector ActorToShootKeySelector;
    class ABP_SentinelAI_C* SentinelPawn;
    class ABP_Sentinel_AiController_C* SentinelAIC;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_SentinelAI_Shoot(int32 EntryPoint);
};

#endif
