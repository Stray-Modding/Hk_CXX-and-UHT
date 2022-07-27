#ifndef UE4SS_SDK_BTT_Sentinel_SetTazerMode_HPP
#define UE4SS_SDK_BTT_Sentinel_SetTazerMode_HPP

class UBTT_Sentinel_SetTazerMode_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    ESentinelTazerMode NewTazerMode;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Sentinel_SetTazerMode(int32 EntryPoint);
};

#endif
