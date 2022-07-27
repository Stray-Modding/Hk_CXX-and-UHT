#ifndef UE4SS_SDK_BTT_ZurgSetInitialState_HPP
#define UE4SS_SDK_BTT_ZurgSetInitialState_HPP

class UBTT_ZurgSetInitialState_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector SeenSensedActorKeySelector;                                // 0x00C8 (size: 0x28)
    FBlackboardKeySelector ProximitySensedActorKeySelector;                           // 0x00F0 (size: 0x28)
    FBlackboardKeySelector HeardSensedActorKeySelector;                               // 0x0118 (size: 0x28)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ZurgSetInitialState(int32 EntryPoint);
}; // Size: 0x140

#endif
