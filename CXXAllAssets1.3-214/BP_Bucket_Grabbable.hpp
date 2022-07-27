#ifndef UE4SS_SDK_BP_Bucket_Grabbable_HPP
#define UE4SS_SDK_BP_Bucket_Grabbable_HPP

class ABP_Bucket_Grabbable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Anse;                                                 // 0x0248 (size: 0x8)
    class UStaticMeshComponent* bucket;                                               // 0x0250 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0258 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0260 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_2_OnInterpolationStarted__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_3_OnInterpolationStopped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__BP_Bucket_Grabbable_Streaming_K2Node_ComponentBoundEvent_4_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_Bucket_Grabbable_Streaming_K2Node_ComponentBoundEvent_5_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Bucket_Grabbable(int32 EntryPoint);
}; // Size: 0x268

#endif
