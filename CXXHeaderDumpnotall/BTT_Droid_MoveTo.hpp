#ifndef UE4SS_SDK_BTT_Droid_MoveTo_HPP
#define UE4SS_SDK_BTT_Droid_MoveTo_HPP

class UBTT_Droid_MoveTo_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBlackboardKeySelector MoveToLocationKeySelector;
    FVector MoveToLocation;
    float StopDistance;
    class ABP_DroidAIController_C* DroidAIC;
    class ABP_Droid_C* DroidBP;
    float AcceptanceRadius;
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;
    bool MoveToPreciseLocation;
    FRotator MoveToRotation;
    class ARecastNavMesh* SelectedNavMesh;
    bool DrawDebug;
    FBlackboardKeySelector MoveToRotationKeySelector;
    FName Blackboard_MoveToActor;
    FTransform LastMoveToTransform;

    void GetReachableLocation(const FVector& Origin, FVector& NavmeshLocation1, bool& Success);
    void GetMoveToTargetTransform(FTransform& TargetTransform1);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void TickDrawDebug();
    void UpdateMoveToLocation();
    void OnDroidMovementStateChanged_Event_0(EDroidMovementState newMovementState);
    void WaitStopping();
    void ExecuteUbergraph_BTT_Droid_MoveTo(int32 EntryPoint);
};

#endif
