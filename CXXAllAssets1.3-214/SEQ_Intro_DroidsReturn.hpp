#ifndef UE4SS_SDK_SEQ_Intro_DroidsReturn_HPP
#define UE4SS_SDK_SEQ_Intro_DroidsReturn_HPP

class ASEQ_Intro_DroidsReturn_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Droid_Guardian;                                                // 0x0270 (size: 0x8)
    class ASkeletalMeshActor* Iron_Shutter;                                           // 0x0278 (size: 0x8)
    class ASkeletalMeshActor* Bar_Door;                                               // 0x0280 (size: 0x8)
    class AActor* Pos_Guardian_Elevator;                                              // 0x0288 (size: 0x8)
    FTransform PosGuardien_Transform;                                                 // 0x0290 (size: 0x30)
    class ADial_b12_ask_the_guardian_C* Dial Ask Guardian;                            // 0x02C0 (size: 0x8)
    class ASeq_Slum_Meet_Guardian_C* seq slum meet guardian;                          // 0x02C8 (size: 0x8)
    class AActor* EndCineCatPos;                                                      // 0x02D0 (size: 0x8)
    class AActor* EndCineGuardianPos;                                                 // 0x02D8 (size: 0x8)
    class ACameraActor* Cam_OutroGuardian;                                            // 0x02E0 (size: 0x8)
    class ASeq_Cycle_Base_C* Seq_WalkCycle_1;                                         // 0x02E8 (size: 0x8)
    class ALevelSequenceActor* DroidsReturn_Seq;                                      // 0x02F0 (size: 0x8)
    class ALevelSequenceActor* OutroGuardian_Seq;                                     // 0x02F8 (size: 0x8)
    class ACameraActor* Cam_Outro_DroidsReturn;                                       // 0x0300 (size: 0x8)
    class AActor* CamOrientEndCine_DroidsReturn;                                      // 0x0308 (size: 0x8)
    class ASeq_BucketThrower_C* Seq_BucketThrower;                                    // 0x0310 (size: 0x8)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_Intro_DroidsReturn(int32 EntryPoint);
}; // Size: 0x318

#endif
