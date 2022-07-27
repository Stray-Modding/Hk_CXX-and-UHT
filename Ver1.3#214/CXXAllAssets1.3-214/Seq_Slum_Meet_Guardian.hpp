#ifndef UE4SS_SDK_Seq_Slum_Meet_Guardian_HPP
#define UE4SS_SDK_Seq_Slum_Meet_Guardian_HPP

class ASeq_Slum_Meet_Guardian_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Droid_Guardian;                                                // 0x0270 (size: 0x8)
    class AActor* Guardian_Lookat_Target;                                             // 0x0278 (size: 0x8)
    class ASeq_Slum_intro_Alarm_C* SeqSlumsIntroAlarm;                                // 0x0280 (size: 0x8)
    class ABP_Layer_C* Layer Droid;                                                   // 0x0288 (size: 0x8)
    class ASEQ_RunInjuredToBar_Afraid_C* SEQ_RunInjuredToBar_Afraid;                  // 0x0290 (size: 0x8)
    class ASEQ_StandCloseWindow_Afraid_C* SEQ_StandCloseWindow_Afraid;                // 0x0298 (size: 0x8)
    class ABP_Droid_C* RunToEscapeDroid01;                                            // 0x02A0 (size: 0x8)
    class ABP_Droid_C* RunToEscapeDroid02;                                            // 0x02A8 (size: 0x8)
    class ABP_Droid_C* RunToEscapeDroid03;                                            // 0x02B0 (size: 0x8)
    class ASkeletalMeshActor* RunToEscapeTrashContainer;                              // 0x02B8 (size: 0x8)
    class ASkeletalMeshActor* GuardianIronShutter;                                    // 0x02C0 (size: 0x8)
    float NewVar_0;                                                                   // 0x02C8 (size: 0x4)
    class ASEQ_IntroCloseIronShutter_C* SeqIntroIronShutter;                          // 0x02D0 (size: 0x8)
    class ADial_Guardian_C* dial guardian;                                            // 0x02D8 (size: 0x8)
    class ASEQ_StandCloseDoor_Afraid_C* SeqStandClosedDoorAfraid;                     // 0x02E0 (size: 0x8)
    class ASEQ_StairsUp_Afraid_C* SeqStairsupAfraid;                                  // 0x02E8 (size: 0x8)
    class ASEQ_IntroBroomDroid_C* SeqIntroBroomDroid;                                 // 0x02F0 (size: 0x8)
    bool SeqPlayed;                                                                   // 0x02F8 (size: 0x1)
    class AActor* Pos_Cat_TopOfTheStairs;                                             // 0x0300 (size: 0x8)
    class AActor* Pos_Cat_CloseToStairs;                                              // 0x0308 (size: 0x8)
    class AActor* FirstTranslatable;                                                  // 0x0310 (size: 0x8)
    class ALevelSequenceActor* MeetGuardian_Sequence;                                 // 0x0318 (size: 0x8)
    class ACameraActor* Cam_CloseShotCat;                                             // 0x0320 (size: 0x8)
    class ACameraActor* Cam_Outro;                                                    // 0x0328 (size: 0x8)
    class AActor* TrackerInSeamusHand;                                                // 0x0330 (size: 0x8)
    class USceneComponent* Target Component;                                          // 0x0338 (size: 0x8)
    TArray<class ABP_StartDial_MoveBAck_C*> CatBlocker;                               // 0x0340 (size: 0x10)
    class ASeq_BucketThrower_C* Seq_BucketThrower;                                    // 0x0350 (size: 0x8)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void OpenSlums();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_Slum_Meet_Guardian(int32 EntryPoint);
}; // Size: 0x358

#endif
