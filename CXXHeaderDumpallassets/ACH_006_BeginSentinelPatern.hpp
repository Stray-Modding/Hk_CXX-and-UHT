#ifndef UE4SS_SDK_ACH_006_BeginSentinelPatern_HPP
#define UE4SS_SDK_ACH_006_BeginSentinelPatern_HPP

class AACH_006_BeginSentinelPatern_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UBoxComponent* TriggerBeginAchievement;                                     // 0x0278 (size: 0x8)
    class UActorIdComponent* ActorId;                                                 // 0x0280 (size: 0x8)
    bool Midtown Progress Seq;                                                        // 0x0288 (size: 0x1)

    void Detected(class ACatPawn* CatPawn, class ABP_SentinelAI_C* BP Sentinel);
    void BeginAchievement();
    void EndAchievement();
    void RefreshSentinels();
    void OnStartFromCheckpoint();
    void BndEvt__ACH_006_BeginSentinelPatern_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_ACH_006_BeginSentinelPatern(int32 EntryPoint);
}; // Size: 0x289

#endif
