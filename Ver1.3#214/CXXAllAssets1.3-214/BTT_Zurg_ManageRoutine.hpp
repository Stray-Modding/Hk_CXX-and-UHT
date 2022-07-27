#ifndef UE4SS_SDK_BTT_Zurg_ManageRoutine_HPP
#define UE4SS_SDK_BTT_Zurg_ManageRoutine_HPP

class UBTT_Zurg_ManageRoutine_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    float Move Inside Zone Interval;                                                  // 0x00C8 (size: 0x4)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Zurg_ManageRoutine(int32 EntryPoint);
}; // Size: 0xCC

#endif
