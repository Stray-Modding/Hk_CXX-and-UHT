#ifndef UE4SS_SDK_BP_Bucket_GrabbableNoPhys_HPP
#define UE4SS_SDK_BP_Bucket_GrabbableNoPhys_HPP

class ABP_Bucket_GrabbableNoPhys_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* GrabVibration;                                             // 0x0230 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0238 (size: 0x8)
    class USpringFloat_C* RotY;                                                       // 0x0240 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0248 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0250 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Anse;                                                 // 0x0260 (size: 0x8)
    class UStaticMeshComponent* bucket;                                               // 0x0268 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0270 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0278 (size: 0x8)
    bool IsGrabbed;                                                                   // 0x0280 (size: 0x1)
    FVector relative location;                                                        // 0x0284 (size: 0xC)
    class ABP_CatPawn_C* cat;                                                         // 0x0290 (size: 0x8)
    float Delta Seconds;                                                              // 0x0298 (size: 0x4)
    FVector Velocity;                                                                 // 0x029C (size: 0xC)
    FVector SnapObjLocation;                                                          // 0x02A8 (size: 0xC)
    float VolumeMultiplier;                                                           // 0x02B4 (size: 0x4)
    bool isDropped;                                                                   // 0x02B8 (size: 0x1)
    bool ApplyImpulse;                                                                // 0x02B9 (size: 0x1)
    class AActor* ForceZone;                                                          // 0x02C0 (size: 0x8)

    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_2_OnInterpolationStarted__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_3_OnInterpolationStopped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void ReceiveBeginPlay();
    void BndEvt__BP_Bucket_Grabbable_Streaming_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_Bucket_Grabbable_Streaming_K2Node_ComponentBoundEvent_5_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Bucket_GrabbableNoPhys_ForceZone_K2Node_ComponentBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__BP_Bucket_GrabbableNoPhys_ForceZone_K2Node_ComponentBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_Bucket_GrabbableNoPhys(int32 EntryPoint);
}; // Size: 0x2C8

#endif
