#ifndef UE4SS_SDK_Seq_JumpOnSleepingDroid_HPP
#define UE4SS_SDK_Seq_JumpOnSleepingDroid_HPP

class ASeq_JumpOnSleepingDroid_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0270 (size: 0x8)
    class ABP_CowBoy_Hat_C* Hat;                                                      // 0x0278 (size: 0x8)
    class ABP_SplineRail_C* Rail_To_Jump;                                             // 0x0280 (size: 0x8)
    class ABP_CatButton_SleepSpot_WithCamera_C* SleepSpot;                            // 0x0288 (size: 0x8)
    class ABP_SimpleLooperHolder_C* Snore_Looper;                                     // 0x0290 (size: 0x8)
    bool LoveCat;                                                                     // 0x0298 (size: 0x1)
    bool isDroidSleeping;                                                             // 0x0299 (size: 0x1)
    class ATriggerZone_C* Trigger_Zone_Cat;                                           // 0x02A0 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAA97FD973();
    void Tick_6246EF4646E19036986D72BAA97FD973(float Ratio);
    void Complete_6246EF4646E19036986D72BA67557D93();
    void Tick_6246EF4646E19036986D72BA67557D93(float Ratio);
    void OnStartSequence();
    void Cancel surprise();
    void DroidGoBackToSleep();
    void RebindStart();
    void ReceiveTick(float DeltaSeconds);
    void Lower Hat();
    void OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnComponentEndOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Seq_JumpOnSleepingDroid(int32 EntryPoint);
}; // Size: 0x2A8

#endif
