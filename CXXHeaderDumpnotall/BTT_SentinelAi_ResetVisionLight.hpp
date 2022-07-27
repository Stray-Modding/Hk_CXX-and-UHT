#ifndef UE4SS_SDK_BTT_SentinelAi_ResetVisionLight_HPP
#define UE4SS_SDK_BTT_SentinelAi_ResetVisionLight_HPP

class UBTT_SentinelAi_ResetVisionLight_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Time;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_ResetVisionLight(int32 EntryPoint);
};

#endif
