#ifndef UE4SS_SDK_BP_CatButton_PushableBase_HPP
#define UE4SS_SDK_BP_CatButton_PushableBase_HPP

class ABP_CatButton_PushableBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* GUIPos;                                                    // 0x0230 (size: 0x8)
    class UArrowComponent* PushDirection;                                             // 0x0238 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0240 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0248 (size: 0x8)
    class USceneComponent* CatPos;                                                    // 0x0250 (size: 0x8)
    class UArrowComponent* CatArrow;                                                  // 0x0258 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0260 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0268 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0270 (size: 0x8)
    class UBoxComponent* FallDetection;                                               // 0x0278 (size: 0x8)
    class USceneComponent* PawImpulsePoint;                                           // 0x0280 (size: 0x8)
    class UBoxComponent* BoxCollider;                                                 // 0x0288 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    bool IsFalling;                                                                   // 0x0298 (size: 0x1)
    bool PushForwardCat;                                                              // 0x0299 (size: 0x1)
    bool CanApplyImpulse;                                                             // 0x029A (size: 0x1)
    float Impulse3Strength;                                                           // 0x029C (size: 0x4)
    class USoundBase* PushableSound;                                                  // 0x02A0 (size: 0x8)
    class UAnimSequence* RightPawAnim;                                                // 0x02A8 (size: 0x8)
    class UAnimSequence* LeftPawAnim;                                                 // 0x02B0 (size: 0x8)
    FVector ColliderInitPos;                                                          // 0x02B8 (size: 0xC)
    FBP_CatButton_PushableBase_CAfterPush AfterPush;                                  // 0x02C8 (size: 0x10)
    void AfterPush();
    class USoundBase* FirstImpactSound;                                               // 0x02D8 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAF96D7394();
    void Tick_6246EF4646E19036986D72BAF96D7394(float Ratio);
    void Complete_6246EF4646E19036986D72BA14726C05();
    void Tick_6246EF4646E19036986D72BA14726C05(float Ratio);
    void BndEvt__BP_CatButton_PushableBase_FallDetection_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void On Falling();
    void BndEvt__BP_CatButton_PushableBase_BoxCollider_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void On Impact(FHitResult Hit);
    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_PushableBase_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_2_AnimationStarted__DelegateSignature();
    void BndEvt__BP_CatButton_PushableBase_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_6_BeforeOnUseStarted__DelegateSignature();
    void BndEvt__BP_CatButton_PushableBase_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_8_BeforeAfterMoveUseStarted__DelegateSignature();
    void BndEvt__BP_CatButton_PushableBase_BoxCollider_K2Node_ComponentBoundEvent_10_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, FName BoneName);
    void BndEvt__BP_CatButton_PushableBase_BoxCollider_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void ExecuteUbergraph_BP_CatButton_PushableBase(int32 EntryPoint);
    void AfterPush__DelegateSignature();
}; // Size: 0x2E0

#endif
