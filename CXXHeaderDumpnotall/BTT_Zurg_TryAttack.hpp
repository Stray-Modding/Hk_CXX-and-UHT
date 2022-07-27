#ifndef UE4SS_SDK_BTT_Zurg_TryAttack_HPP
#define UE4SS_SDK_BTT_Zurg_TryAttack_HPP

class UBTT_Zurg_TryAttack_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector SeenActorKeySelector;
    TArray<class AZurgPawnSlave*> ZurgClosestToLocation;
    class ACatPawn* BPCatPawn;

    void GetZurgAbleToAttack(class AZurgPawnSlave*& ZurgPawn);
    bool ActorIsReachable(class AActor* Actor);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Zurg_TryAttack(int32 EntryPoint);
};

#endif
