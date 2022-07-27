#ifndef UE4SS_SDK_BTT_ZurgSetInitialState_HPP
#define UE4SS_SDK_BTT_ZurgSetInitialState_HPP

class UBTT_ZurgSetInitialState_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector SeenSensedActorKeySelector;
    FBlackboardKeySelector ProximitySensedActorKeySelector;
    FBlackboardKeySelector HeardSensedActorKeySelector;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ZurgSetInitialState(int32 EntryPoint);
};

#endif
