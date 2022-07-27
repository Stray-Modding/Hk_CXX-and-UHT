#ifndef UE4SS_SDK_BTD_Zurg_Base_HPP
#define UE4SS_SDK_BTD_Zurg_Base_HPP

class UBTD_Zurg_Base_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class ABP_ZurgLeader_AIController_C* ZurgLeaderAIC;                               // 0x00A8 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;                                      // 0x00B0 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_Zurg_Base(int32 EntryPoint);
}; // Size: 0xB8

#endif
