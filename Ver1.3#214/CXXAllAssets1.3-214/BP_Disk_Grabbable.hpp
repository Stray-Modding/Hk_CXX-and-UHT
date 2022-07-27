#ifndef UE4SS_SDK_BP_Disk_Grabbable_HPP
#define UE4SS_SDK_BP_Disk_Grabbable_HPP

class ABP_Disk_Grabbable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* GrabVibration;                                             // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Vinyl_Club;                                           // 0x0248 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_Disk_Grabbable_COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__BP_Disk_Grabbable_COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void ExecuteUbergraph_BP_Disk_Grabbable(int32 EntryPoint);
}; // Size: 0x258

#endif
