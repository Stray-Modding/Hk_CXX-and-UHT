#ifndef UE4SS_SDK_BP_PushableWoodPlank_HPP
#define UE4SS_SDK_BP_PushableWoodPlank_HPP

class ABP_PushableWoodPlank_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class UArrowComponent* PushPosition;                                              // 0x0250 (size: 0x8)
    class USceneComponent* SoundImpact;                                               // 0x0258 (size: 0x8)
    class USceneComponent* Feedback;                                                  // 0x0260 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    float initrot;                                                                    // 0x0278 (size: 0x4)
    float Angle;                                                                      // 0x027C (size: 0x4)
    float DebugRatio;                                                                 // 0x0280 (size: 0x4)
    float Length;                                                                     // 0x0284 (size: 0x4)
    class USplineRailComponent* spline rail;                                          // 0x0288 (size: 0x8)
    float TimeMovement;                                                               // 0x0290 (size: 0x4)
    bool EnableSplineAtStart;                                                         // 0x0294 (size: 0x1)
    class UCurveFloat* Curve Asset;                                                   // 0x0298 (size: 0x8)
    class AActor* CollisionToDeactivate;                                              // 0x02A0 (size: 0x8)
    bool Fall;                                                                        // 0x02A8 (size: 0x1)

    void UserConstructionScript();
    void Complete_578069E64FB8DCA8E1905FB73A51F64A();
    void Tick_578069E64FB8DCA8E1905FB73A51F64A(float Ratio);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void EnableSplineRail(bool _enabled);
    void BndEvt__BP_PushableWoodPlank_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_PushableWoodPlank_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_3_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_PushableWoodPlank_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_PushableWoodPlank(int32 EntryPoint);
}; // Size: 0x2A9

#endif
