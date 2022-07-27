#ifndef UE4SS_SDK_BTT_SentinelAi_LookAtLocation_HPP
#define UE4SS_SDK_BTT_SentinelAi_LookAtLocation_HPP

class UBTT_SentinelAi_LookAtLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector LookAtLocationKeySelector;                                 // 0x00B0 (size: 0x28)
    FBlackboardKeySelector LookAtDirectionKeySelector;                                // 0x00D8 (size: 0x28)
    float DirectionDistance;                                                          // 0x0100 (size: 0x4)
    float BodyRotationSpeed;                                                          // 0x0104 (size: 0x4)
    class ABP_SentinelAI_C* BP_SentinelPawn;                                          // 0x0108 (size: 0x8)
    FVector ComputedLookAtLocation;                                                   // 0x0110 (size: 0xC)
    float VisionRotationSpeed;                                                        // 0x011C (size: 0x4)
    bool OverrideVisionRotationSpeed;                                                 // 0x0120 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_LookAtLocation(int32 EntryPoint);
}; // Size: 0x121

#endif
