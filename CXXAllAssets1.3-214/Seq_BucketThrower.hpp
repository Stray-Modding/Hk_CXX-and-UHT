#ifndef UE4SS_SDK_Seq_BucketThrower_HPP
#define UE4SS_SDK_Seq_BucketThrower_HPP

class ASeq_BucketThrower_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Koba;                                                          // 0x0270 (size: 0x8)
    class ABP_Droid_C* Droid_Thrower;                                                 // 0x0278 (size: 0x8)
    class ABP_Droid_C* Droid_Receiver;                                                // 0x0280 (size: 0x8)
    class ABP_Droid_C* Droid_inFrontOfLaundry;                                        // 0x0288 (size: 0x8)
    class ASkeletalMeshActor* ThrowedBucket;                                          // 0x0290 (size: 0x8)
    class ASkeletalMeshActor* Broom;                                                  // 0x0298 (size: 0x8)
    class UAnimSequence* A_Thrower_Embarassed_Loop;                                   // 0x02A0 (size: 0x8)
    class UAnimSequence* A_Thrower_Throw_Loop;                                        // 0x02A8 (size: 0x8)
    class UAnimSequence* A_Thrower_Drop;                                              // 0x02B0 (size: 0x8)
    class UAnimSequence* A_Broom_Loop;                                                // 0x02B8 (size: 0x8)
    class UAnimSequence* A_Broom_Drop;                                                // 0x02C0 (size: 0x8)
    TEnumAsByte<E_DroidThrowerState> BucketThrower_State;                             // 0x02C8 (size: 0x1)
    class ALevelSequenceActor* DroidsDropPaintBucketSeq;                              // 0x02D0 (size: 0x8)
    class UAnimSequence* A_Koba_Broom_Loop;                                           // 0x02D8 (size: 0x8)
    class UAnimSequence* A_Koba_Sponge_Loop;                                          // 0x02E0 (size: 0x8)
    class UAnimSequence* A_Receiver_Receive_Loop;                                     // 0x02E8 (size: 0x8)
    class UAnimSequence* A_Receiver_Drop;                                             // 0x02F0 (size: 0x8)
    class UAnimSequence* A_Receiver_Embarassed_Loop;                                  // 0x02F8 (size: 0x8)
    class UAnimSequence* A_Bucket_Throwed;                                            // 0x0300 (size: 0x8)
    class UAnimSequence* A_Bucket_Drop;                                               // 0x0308 (size: 0x8)
    class ASkeletalMeshActor* sponge;                                                 // 0x0310 (size: 0x8)
    class UAnimSequence* A_Sponge_Drop;                                               // 0x0318 (size: 0x8)
    class UAnimSequence* A_Sponge_Loop;                                               // 0x0320 (size: 0x8)
    class ASkeletalMeshActor* Door;                                                   // 0x0328 (size: 0x8)
    class UAnimSequence* A_Door_Drop;                                                 // 0x0330 (size: 0x8)
    class AActor* Thrower_Idle_Pos;                                                   // 0x0338 (size: 0x8)
    class AActor* BoxVolumeAroundKoba;                                                // 0x0340 (size: 0x8)
    class ABP_CatButton_ScratchableWallSpot_To_Dial_C* Scratchable;                   // 0x0348 (size: 0x8)
    class AActor* Puddle;                                                             // 0x0350 (size: 0x8)
    FSeq_BucketThrower_CStart_Timing_Meow Start_Timing_Meow;                          // 0x0358 (size: 0x10)
    void Start_Timing_Meow();
    FSeq_BucketThrower_CEnd_Timing_Meow End_Timing_Meow;                              // 0x0368 (size: 0x10)
    void End_Timing_Meow();

    void LogicTrigger();
    void OnStartSequence();
    void Koba Broom Loop();
    void Koba Sponge Loop();
    void DroidThrowingLoop();
    void EmbarassedLoop();
    void Drop();
    void HideDroid_ForIntro();
    void DroisThrowing_Idle();
    void CatNearKoba(class AActor* OverlappedActor, class AActor* OtherActor);
    void CatAwayFromKoba(class AActor* OverlappedActor, class AActor* OtherActor);
    void Assign Koba React events();
    void ShowDroid_AfterIntro();
    void ExecuteUbergraph_Seq_BucketThrower(int32 EntryPoint);
    void End_Timing_Meow__DelegateSignature();
    void Start_Timing_Meow__DelegateSignature();
}; // Size: 0x378

#endif
