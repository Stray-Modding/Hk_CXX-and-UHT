#ifndef UE4SS_SDK_BP_Drone_Grab_Jail_HPP
#define UE4SS_SDK_BP_Drone_Grab_Jail_HPP

class ABP_Drone_Grab_Jail_C : public ABP_props_specific_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* GrabVibration;                                             // 0x0270 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0278 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0280 (size: 0x8)
    class USpringFloat_C* SpringRotY;                                                 // 0x0288 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0298 (size: 0x8)
    class USpringFloat_C* SpringRotX;                                                 // 0x02A0 (size: 0x8)
    bool IsGrabbed;                                                                   // 0x02A8 (size: 0x1)
    FVector Velocity;                                                                 // 0x02AC (size: 0xC)
    class ABP_CatPawn_C* cat;                                                         // 0x02B8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Drone_Grab_Jail_COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__BP_Drone_Grab_Jail_COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__BP_Drone_Grab_Jail_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Drone_Grab_Jail(int32 EntryPoint);
}; // Size: 0x2C0

#endif
