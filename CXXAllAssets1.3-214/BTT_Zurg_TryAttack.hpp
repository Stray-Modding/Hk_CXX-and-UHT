#ifndef UE4SS_SDK_BTT_Zurg_TryAttack_HPP
#define UE4SS_SDK_BTT_Zurg_TryAttack_HPP

class UBTT_Zurg_TryAttack_C : public UBTT_Zurg_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector SeenActorKeySelector;                                      // 0x00C8 (size: 0x28)
    TArray<class AZurgPawnSlave*> ZurgClosestToLocation;                              // 0x00F0 (size: 0x10)
    class ACatPawn* BPCatPawn;                                                        // 0x0100 (size: 0x8)

    void GetZurgAbleToAttack(class AZurgPawnSlave*& ZurgPawn);
    bool ActorIsReachable(class AActor* Actor);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Zurg_TryAttack(int32 EntryPoint);
}; // Size: 0x108

#endif
