#ifndef UE4SS_SDK_BTT_Droid_StopMovement_HPP
#define UE4SS_SDK_BTT_Droid_StopMovement_HPP

class UBTT_Droid_StopMovement_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float MaximumTaskDuration;
    FBlackboardKeySelector CurrentMovementStateKeySelector;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Droid_StopMovement(int32 EntryPoint);
};

#endif
