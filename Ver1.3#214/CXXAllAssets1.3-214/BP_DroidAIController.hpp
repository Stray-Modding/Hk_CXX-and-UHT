#ifndef UE4SS_SDK_BP_DroidAIController_HPP
#define UE4SS_SDK_BP_DroidAIController_HPP

class ABP_DroidAIController_C : public ADetourCrowdAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0338 (size: 0x8)
    FName BlackboardKey_MoveToActor_TargetActor;                                      // 0x0340 (size: 0x8)
    FName BlackboardKey_MoveToActor_PreciseDestination;                               // 0x0348 (size: 0x8)
    FName BackboardKey_CurrentAction;                                                 // 0x0350 (size: 0x8)
    FName BlackboardKey_TakeActor_TargetActor;                                        // 0x0358 (size: 0x8)
    FName BlackboardKey_DropActorAtActor_DestinationActor;                            // 0x0360 (size: 0x8)
    FName BlackboardKey_PlayAnimation_Animation;                                      // 0x0368 (size: 0x8)
    FName BlackboardKey_PlayAnimation_Duration;                                       // 0x0370 (size: 0x8)
    FName BlackboardKey_PlayAnimation_IsSynchronized;                                 // 0x0378 (size: 0x8)
    FName BlackboardKey_PlayAnimation_Synchronized;                                   // 0x0380 (size: 0x8)
    FName BlackboardKey_PlayAnimation_IsLooping;                                      // 0x0388 (size: 0x8)
    FName BlackboardKey_RotateToPreciseRotation;                                      // 0x0390 (size: 0x8)
    FName BlackboardKey_MoveToPreciseLocation;                                        // 0x0398 (size: 0x8)
    FName BlackboardKey_UseActor_TargetActor;                                         // 0x03A0 (size: 0x8)
    FName BlackboardKey_PlayPosition;                                                 // 0x03A8 (size: 0x8)
    FName BlackboardKey_IsCancellingCurrentAction;                                    // 0x03B0 (size: 0x8)
    int32 CurrentActionID;                                                            // 0x03B8 (size: 0x4)
    TMap<int32, TEnumAsByte<ActionStatusEnum>> PastActionsStatus;                     // 0x03C0 (size: 0x50)
    bool HasAction;                                                                   // 0x0410 (size: 0x1)
    class ABP_Droid_C* Droid;                                                         // 0x0418 (size: 0x8)

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
}; // Size: 0x420

#endif
