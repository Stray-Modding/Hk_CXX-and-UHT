#ifndef UE4SS_SDK_BP_DroidAIController_HPP
#define UE4SS_SDK_BP_DroidAIController_HPP

class ABP_DroidAIController_C : public ADetourCrowdAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    FName BlackboardKey_MoveToActor_TargetActor;
    FName BlackboardKey_MoveToActor_PreciseDestination;
    FName BackboardKey_CurrentAction;
    FName BlackboardKey_TakeActor_TargetActor;
    FName BlackboardKey_DropActorAtActor_DestinationActor;
    FName BlackboardKey_PlayAnimation_Animation;
    FName BlackboardKey_PlayAnimation_Duration;
    FName BlackboardKey_PlayAnimation_IsSynchronized;
    FName BlackboardKey_PlayAnimation_Synchronized;
    FName BlackboardKey_PlayAnimation_IsLooping;
    FName BlackboardKey_RotateToPreciseRotation;
    FName BlackboardKey_MoveToPreciseLocation;
    FName BlackboardKey_UseActor_TargetActor;
    FName BlackboardKey_PlayPosition;
    FName BlackboardKey_IsCancellingCurrentAction;
    int32 CurrentActionID;
    TMap<int32, TEnumAsByte<ActionStatusEnum>> PastActionsStatus;
    bool HasAction;
    class ABP_Droid_C* Droid;

    void CancelCurrentActionIfEqualTo(TEnumAsByte<DroidActionsEnum> Action, bool& Success);
    void FailCurrentActionIfEqualTo(TEnumAsByte<DroidActionsEnum> Enum, bool& Success);
    void CancelCurrentAction();
    void MoveDroidTo(FVector _destination, float _stopDistance, bool _preciseMoveTo, bool& Success);
    void AddUseActorAction(class AActor* TargetActor, int32& ActionID);
    void AddDropActorAtActorAction(class AActor* DestinationActor, int32& ActionID);
    void AddTakeActorAction(class AActor* TargetActor, int32& ActionID);
    void AddPlayAnimationAction(class UAnimSequence* Animation, float Duration, float Play Position, bool IsLooping, int32& ActionID);
    void Add Play Animation Syncronized Action(TArray<class UAnimSequence*>& Droid Animation, TArray<FDialogLineSynchronizedActor>& Actors Animation, bool IsLooping, bool KeepLastAnimationAsIdle, int32& ActionID);
    void AddMoveToLocationAndRotationAction(FVector Location, FRotator Rotation, int32& ActionID);
    void AddMoveToLocationAction(FVector Location, int32& ActionID);
    void AddMoveToCustomSplineAction(class USplineComponent* Spline Component, bool ReachPreciseDestination, int32& ActionID);
    void FailCurrentAction();
    void SucceedCurrentAction();
    void GetActionStatus(int32 ActionID, TEnumAsByte<ActionStatusEnum>& ActionStatus);
    void AddMoveToActorAction(class AActor* TargetActor, bool ReachPreciseDestination, int32& ActionID);
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveBeginPlay();
    void OnActivationChangeEvent(bool activated);
    void ReceiveUnPossess(class APawn* UnpossessedPawn);
    void ExecuteUbergraph_BP_DroidAIController(int32 EntryPoint);
};

#endif
