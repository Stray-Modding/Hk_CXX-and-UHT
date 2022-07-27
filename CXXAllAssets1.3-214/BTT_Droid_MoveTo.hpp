#ifndef UE4SS_SDK_BTT_Droid_MoveTo_HPP
#define UE4SS_SDK_BTT_Droid_MoveTo_HPP

class UBTT_Droid_MoveTo_C : public UBTT_DroidTask_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C0 (size: 0x8)
    FBlackboardKeySelector MoveToLocationKeySelector;                                 // 0x00C8 (size: 0x28)
    FVector MoveToLocation;                                                           // 0x00F0 (size: 0xC)
    float StopDistance;                                                               // 0x00FC (size: 0x4)
    class ABP_DroidAIController_C* DroidAIC;                                          // 0x0100 (size: 0x8)
    class ABP_Droid_C* DroidBP;                                                       // 0x0108 (size: 0x8)
    float AcceptanceRadius;                                                           // 0x0110 (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;                       // 0x0118 (size: 0x8)
    bool MoveToPreciseLocation;                                                       // 0x0120 (size: 0x1)
    FRotator MoveToRotation;                                                          // 0x0124 (size: 0xC)
    class ARecastNavMesh* SelectedNavMesh;                                            // 0x0130 (size: 0x8)
    bool DrawDebug;                                                                   // 0x0138 (size: 0x1)
    FBlackboardKeySelector MoveToRotationKeySelector;                                 // 0x0140 (size: 0x28)
    FName Blackboard_MoveToActor;                                                     // 0x0168 (size: 0x8)
    FTransform LastMoveToTransform;                                                   // 0x0170 (size: 0x30)

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
}; // Size: 0x1A0

#endif
