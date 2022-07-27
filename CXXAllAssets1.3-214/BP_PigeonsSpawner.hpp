#ifndef UE4SS_SDK_BP_PigeonsSpawner_HPP
#define UE4SS_SDK_BP_PigeonsSpawner_HPP

class ABP_PigeonsSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 NbOfPigeons;                                                                // 0x0240 (size: 0x4)
    TArray<class AActor*> Pigeons;                                                    // 0x0248 (size: 0x10)
    float RandomStartRadius;                                                          // 0x0258 (size: 0x4)
    float LogicTriggerDelay;                                                          // 0x025C (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LogicTrigger();
    void ExecuteUbergraph_BP_PigeonsSpawner(int32 EntryPoint);
}; // Size: 0x260

#endif
