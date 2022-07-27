#ifndef UE4SS_SDK_BTS_Sentinel_Hearing_HPP
#define UE4SS_SDK_BTS_Sentinel_Hearing_HPP

class UBTS_Sentinel_Hearing_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_SentinelAI_C* BP_SentinelPawn;
    class ABP_Sentinel_AiController_C* BP_SentinelAiController;
    FBlackboardKeySelector HasDetectedSoundKeySelector;
    FBlackboardKeySelector LastSoundDetectedLocationKeySelector;

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTS_Sentinel_Hearing(int32 EntryPoint);
};

#endif
