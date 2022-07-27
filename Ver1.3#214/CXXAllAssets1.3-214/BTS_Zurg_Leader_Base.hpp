#ifndef UE4SS_SDK_BTS_Zurg_Leader_Base_HPP
#define UE4SS_SDK_BTS_Zurg_Leader_Base_HPP

class UBTS_Zurg_Leader_Base_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgLeaderPawn;                                      // 0x00A0 (size: 0x8)
    class ABP_ZurgLeader_AIController_C* ZurgLeaderAIC;                               // 0x00A8 (size: 0x8)

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_Zurg_Leader_Base(int32 EntryPoint);
}; // Size: 0xB0

#endif
