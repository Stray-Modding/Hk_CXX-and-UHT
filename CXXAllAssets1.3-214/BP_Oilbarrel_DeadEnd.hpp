#ifndef UE4SS_SDK_BP_Oilbarrel_DeadEnd_HPP
#define UE4SS_SDK_BP_Oilbarrel_DeadEnd_HPP

class ABP_Oilbarrel_DeadEnd_C : public ABP_Oilbarrel_02_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0248 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0250 (size: 0x8)
    bool HitByTrolley;                                                                // 0x0258 (size: 0x1)

    void BndEvt__BP_Oilbarrel_DeadEnd_COMP_PhysicsAudioComponent_K2Node_ComponentBoundEvent_0_ImpactDelegate__DelegateSignature(class UPhysicsEventsComponent* _physicsEventsComponent, FVector _location, float _amplitude, TEnumAsByte<EPhysicalSurface> _surfaceType);
    void BndEvt__BP_Oilbarrel_DeadEnd_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Oilbarrel_DeadEnd_Box_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Oilbarrel_DeadEnd(int32 EntryPoint);
}; // Size: 0x259

#endif
