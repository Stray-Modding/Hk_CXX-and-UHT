#ifndef UE4SS_SDK_BTT_Droid_StopMovement_HPP
#define UE4SS_SDK_BTT_Droid_StopMovement_HPP

class UBTT_Droid_StopMovement_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    float MaximumTaskDuration;                                                        // 0x00C8 (size: 0x4)
    FBlackboardKeySelector CurrentMovementStateKeySelector;                           // 0x00D0 (size: 0x28)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Droid_StopMovement(int32 EntryPoint);
}; // Size: 0xF8

#endif
