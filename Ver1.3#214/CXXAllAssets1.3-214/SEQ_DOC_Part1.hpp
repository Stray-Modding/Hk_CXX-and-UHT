#ifndef UE4SS_SDK_SEQ_DOC_Part1_HPP
#define UE4SS_SDK_SEQ_DOC_Part1_HPP

class ASEQ_DOC_Part1_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Doc;                                                           // 0x0270 (size: 0x8)
    class AActor* Chair;                                                              // 0x0278 (size: 0x8)
    bool Activate;                                                                    // 0x0280 (size: 0x1)
    class AActor* Cat_Pos0;                                                           // 0x0288 (size: 0x8)
    class AActor* Cat_Pos1;                                                           // 0x0290 (size: 0x8)
    class AActor* Cat_Pos2;                                                           // 0x0298 (size: 0x8)
    class AActor* WakeUpZone;                                                         // 0x02A0 (size: 0x8)
    class AActor* LookAtTarget;                                                       // 0x02A8 (size: 0x8)
    TEnumAsByte<FirstMeetWithDoc_State> Sequence;                                     // 0x02B0 (size: 0x1)
    class AActor* Droid_LookAtTheWindow_POS;                                          // 0x02B8 (size: 0x8)
    class AActor* Droid_ApproachTorchlight_POS;                                       // 0x02C0 (size: 0x8)
    class AActor* TriggerBox_DroidApproachTorchlight;                                 // 0x02C8 (size: 0x8)
    bool Cat Is near the Torchlight;                                                  // 0x02D0 (size: 0x1)
    class AActor* Cat_PushTorchlight_POS;                                             // 0x02D8 (size: 0x8)
    class AActor* Droid_AtTheDoorFrame_POS;                                           // 0x02E0 (size: 0x8)
    class AActor* Droid_CloseToDesk_POS;                                              // 0x02E8 (size: 0x8)
    class ACameraActor* CameraTorchlight_Plan1;                                       // 0x02F0 (size: 0x8)
    class ACameraActor* CameraTorchlight_Plan2;                                       // 0x02F8 (size: 0x8)
    class ACameraActor* CameraTorchlight_Plan3;                                       // 0x0300 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* Camera_Modifier;                       // 0x0308 (size: 0x8)
    class AActor* Droid_InFrontOfWindow_POS;                                          // 0x0310 (size: 0x8)
    class ABP_WindowOneWay_C* Window;                                                 // 0x0318 (size: 0x8)
    bool StartDialogOpenWindow;                                                       // 0x0320 (size: 0x1)
    bool CatPassThe Window;                                                           // 0x0321 (size: 0x1)
    class AActor* DialogTriggerZone;                                                  // 0x0328 (size: 0x8)
    class AActor* CatPassTheWindowZone;                                               // 0x0330 (size: 0x8)
    bool HasLightInHand;                                                              // 0x0338 (size: 0x1)
    class ASEQ_CatTouchTorchLight_C* TorchlighSequence;                               // 0x0340 (size: 0x8)
    class ABP_DocDefluxor_C* TorchlightInHand;                                        // 0x0348 (size: 0x8)
    class ASEQ_DocGoToTheBalcony_C* Seq_Go To The Balcony;                            // 0x0350 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0358 (size: 0x8)
    class AActor* Cat_InFrontOfWindow_POS;                                            // 0x0360 (size: 0x8)
    bool WakeUpDoc;                                                                   // 0x0368 (size: 0x1)
    class ABP_OrientCameraThirdPersonZone_C* CamOrient;                               // 0x0370 (size: 0x8)
    TArray<class AActor*> CollisionTorchlight;                                        // 0x0378 (size: 0x10)
    class ABP_SpeedModifier_Zone_C* SpeedModifier;                                    // 0x0388 (size: 0x8)
    FTransform TorchlightTransform;                                                   // 0x0390 (size: 0x30)
    FTransform TransformInHand;                                                       // 0x03C0 (size: 0x30)
    class ACameraActor* CameraOpenWindow_Plan;                                        // 0x03F0 (size: 0x8)
    class UAudioComponent* DocSnorting;                                               // 0x03F8 (size: 0x8)
    bool Snorting;                                                                    // 0x0400 (size: 0x1)
    bool DocIsNearWindow;                                                             // 0x0401 (size: 0x1)
    TArray<class AActor*> chaircollision;                                             // 0x0408 (size: 0x10)
    class ACameraActor* CameraDial;                                                   // 0x0418 (size: 0x8)
    class ACameraActor* CameraFall;                                                   // 0x0420 (size: 0x8)
    class ADial_Doc_C* As Dial Doc;                                                   // 0x0428 (size: 0x8)
    class ACameraActor* CameraDial_2;                                                 // 0x0430 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA1B504245();
    void Tick_6246EF4646E19036986D72BA1B504245(float Ratio);
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Change Sequence();
    void OnStartSequence();
    void BndEvt__TriggerBox_DroidApproachTorchlight_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__DialogTriggerZone_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__DialogTriggerZone_K2Node_ComponentBoundEvent_2_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__CatPassTheWindowZone_K2Node_ComponentBoundEvent_3_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ShowTorchlightInHand();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_5_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BlendTorchlightInHand();
    void BndEvt__SEQ_DOC_Part1_WakeUpZone_K2Node_ComponentBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SEQ_DOC_Part1(int32 EntryPoint);
}; // Size: 0x438

#endif
