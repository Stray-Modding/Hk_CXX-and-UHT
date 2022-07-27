#ifndef UE4SS_SDK_BP_CatFollow_HPP
#define UE4SS_SDK_BP_CatFollow_HPP

class ABP_CatFollow_C : public ABP_DummyCatPawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x54A8 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x54B0 (size: 0x8)
    class UChildActorComponent* LookAtInterestPoint;                                  // 0x54B8 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x54C0 (size: 0x8)
    class ABP_CatFollow_C* cat;                                                       // 0x54C8 (size: 0x8)
    bool Activate;                                                                    // 0x54D0 (size: 0x1)
    float RadiusApproach;                                                             // 0x54D4 (size: 0x4)
    float RadiusApproachHysteresis;                                                   // 0x54D8 (size: 0x4)
    float RadiusRun;                                                                  // 0x54DC (size: 0x4)
    float DistanceToTarget;                                                           // 0x54E0 (size: 0x4)
    FVector TargetPosition;                                                           // 0x54E4 (size: 0xC)
    class AActor* Target;                                                             // 0x54F0 (size: 0x8)
    bool Idle;                                                                        // 0x54F8 (size: 0x1)
    float SpeedRatio;                                                                 // 0x54FC (size: 0x4)
    bool Debug;                                                                       // 0x5500 (size: 0x1)
    TArray<class ABP_CatSequenceBase_C*> CatSequence;                                 // 0x5508 (size: 0x10)
    class ABP_CatSequenceBase_C* CatSequenceCurrent;                                  // 0x5518 (size: 0x8)
    class AActor* SplinePath;                                                         // 0x5520 (size: 0x8)
    class USplineComponent* SplinePathComp;                                           // 0x5528 (size: 0x8)
    FVector TargetPositionOnSpline;                                                   // 0x5530 (size: 0xC)
    FVector CatPositionOnSpline;                                                      // 0x553C (size: 0xC)
    FVector CatPositionToReachOnSpline;                                               // 0x5548 (size: 0xC)
    FVector ForwardDirectionOnSpline;                                                 // 0x5554 (size: 0xC)
    FVector SideDirectionOnSpline;                                                    // 0x5560 (size: 0xC)
    float LengthMin;                                                                  // 0x556C (size: 0x4)
    float LengthMax;                                                                  // 0x5570 (size: 0x4)
    float LengthTarget;                                                               // 0x5574 (size: 0x4)
    float LengthCurrent;                                                              // 0x5578 (size: 0x4)
    float Width;                                                                      // 0x557C (size: 0x4)
    float WidthTarget;                                                                // 0x5580 (size: 0x4)
    float WidthCurrent;                                                               // 0x5584 (size: 0x4)
    float TargetDistanceOnSpline;                                                     // 0x5588 (size: 0x4)
    float CatDistanceOnSpline;                                                        // 0x558C (size: 0x4)
    TArray<class ABP_CatFollowModifier_C*> ParamModifierZone;                         // 0x5590 (size: 0x10)
    TArray<FCatFollowParams> SplineParams;                                            // 0x55A0 (size: 0x10)
    FVector TargetGizmoLocation;                                                      // 0x55B0 (size: 0xC)
    FCatFollowParams CatSplineparams;                                                 // 0x55BC (size: 0x1C)
    FVector CatGizmoLocation;                                                         // 0x55D8 (size: 0xC)
    FVector NavTargetPosition;                                                        // 0x55E4 (size: 0xC)
    FVector CatPosition;                                                              // 0x55F0 (size: 0xC)
    float TargetGizmoDistanceOnSpline;                                                // 0x55FC (size: 0x4)
    TEnumAsByte<Cat_FurColor> Fur Color;                                              // 0x5600 (size: 0x1)
    FName LookAt ID;                                                                  // 0x5604 (size: 0x8)
    class AActor* CurrentLookAtTarget;                                                // 0x5610 (size: 0x8)
    FCatFollowLookAt LookAt_Struct;                                                   // 0x5618 (size: 0x20)
    float LookAt_Timer;                                                               // 0x5638 (size: 0x4)
    bool LookAtActive;                                                                // 0x563C (size: 0x1)
    float LookAt_ChangeTargetTimer;                                                   // 0x5640 (size: 0x4)
    int32 LookAt_TargetIndex;                                                         // 0x5644 (size: 0x4)
    int32 LookAt_TargetIndexMax;                                                      // 0x5648 (size: 0x4)
    float LookAtTarget_Timer;                                                         // 0x564C (size: 0x4)
    TArray<class AActor*> LookAtTarget_List;                                          // 0x5650 (size: 0x10)
    FVector NavLastPoint;                                                             // 0x5660 (size: 0xC)
    float TimeToComeAfterCatPlayerCalling;                                            // 0x566C (size: 0x4)
    bool BringCloserToTarget;                                                         // 0x5670 (size: 0x1)
    float NewTargetGizmoDistanceOnSpline;                                             // 0x5674 (size: 0x4)
    float SpeedObstacleFactorCurrent;                                                 // 0x5678 (size: 0x4)
    float SpeedObstacleFactorTarget;                                                  // 0x567C (size: 0x4)
    float SpeedRatioTarget;                                                           // 0x5680 (size: 0x4)
    float CallingFactor;                                                              // 0x5684 (size: 0x4)
    float BringCloserAngle;                                                           // 0x5688 (size: 0x4)
    FVector BringCloserToTarget_Direction;                                            // 0x568C (size: 0xC)
    float BringCloserDistance;                                                        // 0x5698 (size: 0x4)
    bool UpdateLookAtWhenDeactivate;                                                  // 0x569C (size: 0x1)
    bool IsBlocked;                                                                   // 0x569D (size: 0x1)
    float TimeBlock;                                                                  // 0x56A0 (size: 0x4)
    bool UnlockObstacle;                                                              // 0x56A4 (size: 0x1)
    bool IsBlockByPlayer;                                                             // 0x56A5 (size: 0x1)
    class ABP_CatPawn_C* Cat_Player;                                                  // 0x56A8 (size: 0x8)
    bool PushSpeed;                                                                   // 0x56B0 (size: 0x1)
    float meowFrequencyWhenBlocked;                                                   // 0x56B4 (size: 0x4)
    float DistanceToPlayerOnSpline;                                                   // 0x56B8 (size: 0x4)
    TArray<class ACatPawn*> BlockCat;                                                 // 0x56C0 (size: 0x10)
    bool isAvailableForSequence;                                                      // 0x56D0 (size: 0x1)
    float NearestCatDistance;                                                         // 0x56D4 (size: 0x4)
    bool CanForceJump;                                                                // 0x56D8 (size: 0x1)
    float ForceJumpRadius;                                                            // 0x56DC (size: 0x4)
    bool usedBySpeedAdaptator;                                                        // 0x56E0 (size: 0x1)
    class AActor* Pathfinding Context;                                                // 0x56E8 (size: 0x8)
    bool useNavmesh;                                                                  // 0x56F0 (size: 0x1)
    bool canBeCalledByPlayer;                                                         // 0x56F1 (size: 0x1)
    FVector Target LocationTemp;                                                      // 0x56F4 (size: 0xC)

    void CheckCollisionWithCats(bool& bLocked, float& SpeedFactor, bool& instantaneous blocked, bool& BlockedByPlayer);
    void GetSpeedInRange(float Value, float& SpeedRange);
    float GetSpeedRatio();
    void GetSpeedAdapterLocation(const FVector& WorldLocation, FVector SpeedDir, FVector& Near, FVector& Far);
    void SetSplinePath(class AActor* SplinePath);
    void Update_LookAt();
    void ClampTarget();
    void Get Spline Params at Time(float TimeOnSpline, FCatFollowParams& Param);
    void SetPosTarget(class AActor* TargetActor);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void PathOnSpline();
    void SpeedObstacleRatio();
    void SHOW DEBUG();
    void UpdateParams();
    void BringCloseToTarget();
    void Cat MiaouCall();
    void UpdateMovableZone();
    void Autonomous Move();
    void Update CatSpeed();
    void Update Position To Follow(const FVector& _targetLocation);
    void Update Cat Sequence();
    void InitSplineToFollow();
    void ChangeSplineToFollow(class AActor* SplinePath);
    void ExecuteUbergraph_BP_CatFollow(int32 EntryPoint);
}; // Size: 0x5700

#endif
