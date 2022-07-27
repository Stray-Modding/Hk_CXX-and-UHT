#ifndef UE4SS_SDK_BTS_Sentinel_Hearing_HPP
#define UE4SS_SDK_BTS_Sentinel_Hearing_HPP

class UBTS_Sentinel_Hearing_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    class ABP_SentinelAI_C* BP_SentinelPawn;                                          // 0x00A0 (size: 0x8)
    class ABP_Sentinel_AiController_C* BP_SentinelAiController;                       // 0x00A8 (size: 0x8)
    FBlackboardKeySelector HasDetectedSoundKeySelector;                               // 0x00B0 (size: 0x28)
    FBlackboardKeySelector LastSoundDetectedLocationKeySelector;                      // 0x00D8 (size: 0x28)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTS_Sentinel_Hearing(int32 EntryPoint);
}; // Size: 0x100

#endif
