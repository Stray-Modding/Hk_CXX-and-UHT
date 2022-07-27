#ifndef UE4SS_SDK_BP_PushableWoodPlank_Break_HPP
#define UE4SS_SDK_BP_PushableWoodPlank_Break_HPP

class ABP_PushableWoodPlank_Break_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UArrowComponent* PushPosition;                                              // 0x0240 (size: 0x8)
    class USceneComponent* SoundImpact;                                               // 0x0248 (size: 0x8)
    class USceneComponent* Feedback;                                                  // 0x0250 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    float initrot;                                                                    // 0x0268 (size: 0x4)
    float Angle;                                                                      // 0x026C (size: 0x4)
    float DebugRatio;                                                                 // 0x0270 (size: 0x4)
    float Length;                                                                     // 0x0274 (size: 0x4)
    class USplineRailComponent* spline rail;                                          // 0x0278 (size: 0x8)
    float TimeMovement;                                                               // 0x0280 (size: 0x4)
    bool EnableSplineAtStart;                                                         // 0x0284 (size: 0x1)
    class UCurveFloat* Curve Asset;                                                   // 0x0288 (size: 0x8)
    class AActor* CollisionToDeactivate;                                              // 0x0290 (size: 0x8)

    void UserConstructionScript();
    void Complete_578069E64FB8DCA8E1905FB7CF71D788();
    void Tick_578069E64FB8DCA8E1905FB7CF71D788(float Ratio);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void EnableSplineRail(bool _enabled);
    void BndEvt__BP_PushableWoodPlank_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_PushableWoodPlank_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_PushableWoodPlank_Break(int32 EntryPoint);
}; // Size: 0x298

#endif
