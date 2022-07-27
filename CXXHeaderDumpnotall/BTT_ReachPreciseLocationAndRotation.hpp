#ifndef UE4SS_SDK_BTT_ReachPreciseLocationAndRotation_HPP
#define UE4SS_SDK_BTT_ReachPreciseLocationAndRotation_HPP

class UBTT_ReachPreciseLocationAndRotation_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector MoveToPreciseRotationKeySelector;
    FBlackboardKeySelector MoveToPreciseLocationKeySelector;
    class ABP_Droid_C* BP_Droid;
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;

    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ReachPreciseLocationAndRotation(int32 EntryPoint);
};

#endif
