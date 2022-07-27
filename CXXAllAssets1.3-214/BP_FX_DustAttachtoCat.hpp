#ifndef UE4SS_SDK_BP_FX_DustAttachtoCat_HPP
#define UE4SS_SDK_BP_FX_DustAttachtoCat_HPP

class ABP_FX_DustAttachtoCat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float Spawn Rate;                                                                 // 0x0248 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA4E977F83();
    void Tick_6246EF4646E19036986D72BA4E977F83(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_FX_DustAttachtoCat(int32 EntryPoint);
}; // Size: 0x24C

#endif
