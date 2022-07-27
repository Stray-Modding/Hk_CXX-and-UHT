#ifndef UE4SS_SDK_BTT_Sentinel_SetTazerMode_HPP
#define UE4SS_SDK_BTT_Sentinel_SetTazerMode_HPP

class UBTT_Sentinel_SetTazerMode_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    ESentinelTazerMode NewTazerMode;                                                  // 0x00B0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Sentinel_SetTazerMode(int32 EntryPoint);
}; // Size: 0xB1

#endif
