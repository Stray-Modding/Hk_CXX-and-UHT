#ifndef UE4SS_SDK_BTT_SentinelAI_SetState_HPP
#define UE4SS_SDK_BTT_SentinelAI_SetState_HPP

class UBTT_SentinelAI_SetState_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    TEnumAsByte<ENUM_SentinelAI_State> TargetState;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAI_SetState(int32 EntryPoint);
};

#endif
