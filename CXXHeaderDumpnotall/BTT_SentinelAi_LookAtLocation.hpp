#ifndef UE4SS_SDK_BTT_SentinelAi_LookAtLocation_HPP
#define UE4SS_SDK_BTT_SentinelAi_LookAtLocation_HPP

class UBTT_SentinelAi_LookAtLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector LookAtLocationKeySelector;
    FBlackboardKeySelector LookAtDirectionKeySelector;
    float DirectionDistance;
    float BodyRotationSpeed;
    class ABP_SentinelAI_C* BP_SentinelPawn;
    FVector ComputedLookAtLocation;
    float VisionRotationSpeed;
    bool OverrideVisionRotationSpeed;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_LookAtLocation(int32 EntryPoint);
};

#endif
