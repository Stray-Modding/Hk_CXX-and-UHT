#ifndef UE4SS_SDK_BTT_SentinelAi_ResetVisionLight_HPP
#define UE4SS_SDK_BTT_SentinelAi_ResetVisionLight_HPP

class UBTT_SentinelAi_ResetVisionLight_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    float Time;                                                                       // 0x00B0 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_ResetVisionLight(int32 EntryPoint);
}; // Size: 0xB4

#endif
