#ifndef UE4SS_SDK_BTT_Zurg_Base_HPP
#define UE4SS_SDK_BTT_Zurg_Base_HPP

class UBTT_Zurg_Base_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;                                      // 0x00B0 (size: 0x8)
    class ABP_ZurgLeader_AIController_C* ZurgLeaderAIC;                               // 0x00B8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Zurg_Base(int32 EntryPoint);
}; // Size: 0xC0

#endif
