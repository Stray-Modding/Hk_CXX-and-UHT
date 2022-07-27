#ifndef UE4SS_SDK_Seq_DeadDroid_HPP
#define UE4SS_SDK_Seq_DeadDroid_HPP

class ASeq_DeadDroid_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* PushVIBE;                                                  // 0x0270 (size: 0x8)
    class UCOMP_CatMoveToAnim_C* COMP_CatMoveToAnim;                                  // 0x0278 (size: 0x8)
    class USceneComponent* CatPos;                                                    // 0x0280 (size: 0x8)
    class UArrowComponent* CatArrow;                                                  // 0x0288 (size: 0x8)
    class ABP_Droid_C* DedDroid;                                                      // 0x0290 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* CameraModifier;                        // 0x0298 (size: 0x8)
    class ATriggerZone_PlayCatCustomAnimation_C* TriggerZone_PlayCatCustomAnimation;  // 0x02A0 (size: 0x8)
    bool Pushed;                                                                      // 0x02A8 (size: 0x1)
    float Z;                                                                          // 0x02AC (size: 0x4)
    bool UpdateSpeed;                                                                 // 0x02B0 (size: 0x1)
    class ASEQ_TriggerCameraSpline_C* TriggerCameraSnap;                              // 0x02B8 (size: 0x8)
    bool SnapCameraActivate;                                                          // 0x02C0 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x02C8 (size: 0x8)
    bool canceled;                                                                    // 0x02D0 (size: 0x1)
    float Dot;                                                                        // 0x02D4 (size: 0x4)
    class AActor* CancelZone;                                                         // 0x02D8 (size: 0x8)

    void LogicTrigger();
    void BndEvt__Seq_DeadDroid_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__Seq_DeadDroid_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_0_AnimationStarted__DelegateSignature();
    void ReceiveTick(float DeltaSeconds);
    void ChooseCatButtonLocation();
    void UpdateCatSpeed();
    void CancelSequence();
    void BndEvt__Seq_DeadDroid_COMP_CatMoveToAnim_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__Seq_DeadDroid_cancelZone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_Seq_DeadDroid(int32 EntryPoint);
}; // Size: 0x2E0

#endif
