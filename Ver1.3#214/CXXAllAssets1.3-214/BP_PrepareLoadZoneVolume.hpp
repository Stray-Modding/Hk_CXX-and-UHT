#ifndef UE4SS_SDK_BP_PrepareLoadZoneVolume_HPP
#define UE4SS_SDK_BP_PrepareLoadZoneVolume_HPP

class ABP_PrepareLoadZoneVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TSoftObjectPtr<UWorld> zone;                                                      // 0x0240 (size: 0x28)
    TArray<TSoftObjectPtr<UWorld>> PreloadedLevels;                                   // 0x0268 (size: 0x10)
    TEnumAsByte<EZoneLoadingType> Loading Type;                                       // 0x0278 (size: 0x1)
    bool HideVolumeAtRuntime;                                                         // 0x0279 (size: 0x1)
    FName Transition Group;                                                           // 0x027C (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_PrepareLoadZoneVolume(int32 EntryPoint);
}; // Size: 0x284

#endif
