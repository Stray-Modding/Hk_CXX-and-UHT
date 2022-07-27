#ifndef UE4SS_SDK_BP_CommitLoadZoneVolume_HPP
#define UE4SS_SDK_BP_CommitLoadZoneVolume_HPP

class ABP_CommitLoadZoneVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool HideVolumeAtRuntime;                                                         // 0x0240 (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CommitLoadZoneVolume(int32 EntryPoint);
}; // Size: 0x241

#endif
