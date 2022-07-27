#ifndef UE4SS_SDK_BTT_SentinelAI_SetState_HPP
#define UE4SS_SDK_BTT_SentinelAI_SetState_HPP

class UBTT_SentinelAI_SetState_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TEnumAsByte<ENUM_SentinelAI_State> TargetState;                                   // 0x00B0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAI_SetState(int32 EntryPoint);
}; // Size: 0xB1

#endif
