#ifndef UE4SS_SDK_BP_VentiloBlokable_HPP
#define UE4SS_SDK_BP_VentiloBlokable_HPP

class ABP_VentiloBlokable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Blockable_Fan_NoFrame;                                // 0x0230 (size: 0x8)
    class UBoxComponent* ActivationZone;                                              // 0x0238 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0240 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0248 (size: 0x8)
    class USceneComponent* FXSpawn;                                                   // 0x0250 (size: 0x8)
    class UBoxComponent* Detector;                                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Pales_Stop;                                           // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Pales_Movement;                                       // 0x0268 (size: 0x8)
    class UStaticMeshComponent* VentiloBlokable_socle;                                // 0x0270 (size: 0x8)
    class UBoxComponent* Blocker;                                                     // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Fake_Bucket;                                          // 0x0280 (size: 0x8)
    class USceneComponent* PalesBlocked;                                              // 0x0288 (size: 0x8)
    class USceneComponent* PalesTurn;                                                 // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    bool Running;                                                                     // 0x02A0 (size: 0x1)
    FName sfx playable to stop;                                                       // 0x02A4 (size: 0x8)
    class AActor* bucket;                                                             // 0x02B0 (size: 0x8)
    FTransform transform init;                                                        // 0x02C0 (size: 0x30)
    FTransform transform end;                                                         // 0x02F0 (size: 0x30)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0320 (size: 0x10)
    bool is blocked;                                                                  // 0x0330 (size: 0x1)
    UClass* BucketClass;                                                              // 0x0338 (size: 0x8)

    void Complete_6246EF4646E19036986D72BAE9598755();
    void Tick_6246EF4646E19036986D72BAE9598755(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__CACA_VentiloBlokable_Save_K2Node_ComponentBoundEvent_0_SaveLoadDelegate__DelegateSignature(class USaveComponent* _saveComponent);
    void BndEvt__BP_VentiloBlokable_ActivationZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_VentiloBlokable_ActivationZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_VentiloBlokable(int32 EntryPoint);
}; // Size: 0x340

#endif
