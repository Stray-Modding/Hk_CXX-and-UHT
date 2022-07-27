#ifndef UE4SS_SDK_Seq_DeadEndDoor_HPP
#define UE4SS_SDK_Seq_DeadEndDoor_HPP

class ASeq_DeadEndDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* RodrigoJr;                                                     // 0x0270 (size: 0x8)
    class ADial_RobertoJR_NearDeadEnd_C* Dial_Rodrigo;                                // 0x0278 (size: 0x8)
    class ASeq_Roberto_Tracking_C* Seq_Roberto_Tracking;                              // 0x0280 (size: 0x8)
    class AActor* AnimatedDoor;                                                       // 0x0288 (size: 0x8)
    class AActor* CatDest;                                                            // 0x0290 (size: 0x8)
    class ABP_SplineCameraCine_Simple_C* SplineCam;                                   // 0x0298 (size: 0x8)
    class ABP_Droid_C* droiddevantlacambatard;                                        // 0x02A0 (size: 0x8)
    class AActor* CatPos_0;                                                           // 0x02A8 (size: 0x8)
    class AActor* CatPos_1;                                                           // 0x02B0 (size: 0x8)
    class ATargetPoint* cat_lookat_target1;                                           // 0x02B8 (size: 0x8)
    class ATargetPoint* cat_lookat_target2;                                           // 0x02C0 (size: 0x8)
    class ASeq_Roberto_Tracking_C* SeqRobertoTracking;                                // 0x02C8 (size: 0x8)
    class AActor* FakeTracker;                                                        // 0x02D0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BA181AE1CE();
    void Tick_6246EF4646E19036986D72BA181AE1CE(float Ratio);
    void LogicTrigger();
    void ExecuteUbergraph_Seq_DeadEndDoor(int32 EntryPoint);
}; // Size: 0x2D8

#endif
