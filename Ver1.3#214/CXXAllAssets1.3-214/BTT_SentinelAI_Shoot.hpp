#ifndef UE4SS_SDK_BTT_SentinelAI_Shoot_HPP
#define UE4SS_SDK_BTT_SentinelAI_Shoot_HPP

class UBTT_SentinelAI_Shoot_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector ActorToShootKeySelector;                                   // 0x00B0 (size: 0x28)
    class ABP_SentinelAI_C* SentinelPawn;                                             // 0x00D8 (size: 0x8)
    class ABP_Sentinel_AiController_C* SentinelAIC;                                   // 0x00E0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_SentinelAI_Shoot(int32 EntryPoint);
}; // Size: 0xE8

#endif
