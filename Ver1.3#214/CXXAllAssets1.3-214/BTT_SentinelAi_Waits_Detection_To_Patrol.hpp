#ifndef UE4SS_SDK_BTT_SentinelAi_Waits_Detection_To_Patrol_HPP
#define UE4SS_SDK_BTT_SentinelAi_Waits_Detection_To_Patrol_HPP

class UBTT_SentinelAi_Waits_Detection_To_Patrol_C : public UBTT_SentinelAi_Waits_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_SentinelAi_Waits_Detection_To_Patrol(int32 EntryPoint);
}; // Size: 0xC8

#endif
