#ifndef UE4SS_SDK_BTT_SentinelAi_VisionTrackActor_HPP
#define UE4SS_SDK_BTT_SentinelAi_VisionTrackActor_HPP

class UBTT_SentinelAi_VisionTrackActor_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector ActorToTrackKeySelector;                                   // 0x00B0 (size: 0x28)
    class ABP_SentinelAI_C* BP_Sentinel;                                              // 0x00D8 (size: 0x8)
    float BodyRotateSpeed;                                                            // 0x00E0 (size: 0x4)
    bool OverrideVisionRotationSpeed;                                                 // 0x00E4 (size: 0x1)
    float VisionRotationSpeed;                                                        // 0x00E8 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_SentinelAi_VisionTrackActor(int32 EntryPoint);
}; // Size: 0xEC

#endif
