#ifndef UE4SS_SDK_SEQ_MomoMainDoor_HPP
#define UE4SS_SDK_SEQ_MomoMainDoor_HPP

class ASEQ_MomoMainDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* Door_Loop_VIBE;                                            // 0x0270 (size: 0x8)
    class UAudioComponent* Door_03_VIBE;                                              // 0x0278 (size: 0x8)
    class UAudioComponent* Door_02_VIBE;                                              // 0x0280 (size: 0x8)
    class UAudioComponent* Door_01_VIBE;                                              // 0x0288 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x0290 (size: 0x8)
    class AActor* SwitchPos;                                                          // 0x0298 (size: 0x8)
    class AActor* MainDoor;                                                           // 0x02A0 (size: 0x8)
    class ADial_MomoDoor_C* DialMomoDoor;                                             // 0x02A8 (size: 0x8)
    class AActor* ChainPos;                                                           // 0x02B0 (size: 0x8)
    class AActor* Chain1;                                                             // 0x02B8 (size: 0x8)
    class AActor* Chain2;                                                             // 0x02C0 (size: 0x8)
    class AActor* SparkLocation;                                                      // 0x02C8 (size: 0x8)
    class AActor* SmokeLocation;                                                      // 0x02D0 (size: 0x8)
    class AActor* SmokeLocation2;                                                     // 0x02D8 (size: 0x8)
    class ATriggerZone_C* BarrelTriggerZone;                                          // 0x02E0 (size: 0x8)
    bool HasBeenTriggeredOnce;                                                        // 0x02E8 (size: 0x1)
    class ASkeletalMeshActor* Stick;                                                  // 0x02F0 (size: 0x8)
    bool HasBeenTriggeredTwice;                                                       // 0x02F8 (size: 0x1)
    class ALevelSequenceActor* Sequence_OpenEcluse;                                   // 0x0300 (size: 0x8)
    class ACameraActor* CamOutro_OpenEcluse;                                          // 0x0308 (size: 0x8)
    class AActor* EndCine_PosCat;                                                     // 0x0310 (size: 0x8)
    class AActor* Bark;                                                               // 0x0318 (size: 0x8)
    TArray<FDialogLineSynchronizedActor> Synchronized Actors;                         // 0x0320 (size: 0x10)
    TArray<class UAnimSequence*> [ 0] Actor Animations;                               // 0x0330 (size: 0x10)
    FDialogLineSynchronizedActor [ 1];                                                // 0x0340 (size: 0x18)
    bool MomoIsReadyToMove;                                                           // 0x0358 (size: 0x1)
    bool DoorIsOpen;                                                                  // 0x0359 (size: 0x1)
    class AActor* DoorCollision;                                                      // 0x0360 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x0368 (size: 0x8)
    float VibrationLevel;                                                             // 0x0370 (size: 0x4)
    float VibrationLevel_PS4;                                                         // 0x0374 (size: 0x4)
    class UAnimSequence* [ 1]_0;                                                      // 0x0378 (size: 0x8)
    class UCurveFloat* vibrationCurve;                                                // 0x0380 (size: 0x8)
    float Timer;                                                                      // 0x0388 (size: 0x4)

    void Complete_6246EF4646E19036986D72BA43F16B62();
    void Tick_6246EF4646E19036986D72BA43F16B62(float Ratio);
    void LogicTrigger();
    void Move Momo To Chain();
    void BndEvt__SEQ_MomoMainDoor_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void UpdatePs4Vibration();
    void StopPS4Vibration();
    void ExecuteUbergraph_SEQ_MomoMainDoor(int32 EntryPoint);
}; // Size: 0x38C

#endif
