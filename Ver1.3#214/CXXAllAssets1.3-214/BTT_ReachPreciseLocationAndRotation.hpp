#ifndef UE4SS_SDK_BTT_ReachPreciseLocationAndRotation_HPP
#define UE4SS_SDK_BTT_ReachPreciseLocationAndRotation_HPP

class UBTT_ReachPreciseLocationAndRotation_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector MoveToPreciseRotationKeySelector;                          // 0x00C8 (size: 0x28)
    FBlackboardKeySelector MoveToPreciseLocationKeySelector;                          // 0x00F0 (size: 0x28)
    class ABP_Droid_C* BP_Droid;                                                      // 0x0118 (size: 0x8)
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;                       // 0x0120 (size: 0x8)

    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ReachPreciseLocationAndRotation(int32 EntryPoint);
}; // Size: 0x128

#endif
