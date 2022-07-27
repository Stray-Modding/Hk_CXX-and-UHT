#ifndef UE4SS_SDK_BTT_SentinelAi_VisionTrackActor_HPP
#define UE4SS_SDK_BTT_SentinelAi_VisionTrackActor_HPP

class UBTT_SentinelAi_VisionTrackActor_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector ActorToTrackKeySelector;
    class ABP_SentinelAI_C* BP_Sentinel;
    float BodyRotateSpeed;
    bool OverrideVisionRotationSpeed;
    float VisionRotationSpeed;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_SentinelAi_VisionTrackActor(int32 EntryPoint);
};

#endif
