#ifndef UE4SS_SDK_BP_Key_CellNoPhys_HPP
#define UE4SS_SDK_BP_Key_CellNoPhys_HPP

class ABP_Key_CellNoPhys_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* GrabVibration;                                             // 0x0230 (size: 0x8)
    class UAudioComponent* vibration;                                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Key1;                                                 // 0x0240 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0248 (size: 0x8)
    class USpringFloat_C* RotX;                                                       // 0x0250 (size: 0x8)
    class USpringFloat_C* RotY;                                                       // 0x0258 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Ring;                                                 // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Key;                                                  // 0x0270 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0278 (size: 0x8)
    class UCOMP_Grabbable_C* COMP_Grabbable;                                          // 0x0280 (size: 0x8)
    bool IsGrabbed;                                                                   // 0x0288 (size: 0x1)
    bool NeedToUpdate;                                                                // 0x0289 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0290 (size: 0x8)
    float Delta Seconds;                                                              // 0x0298 (size: 0x4)
    FVector SnapObjLocation;                                                          // 0x029C (size: 0xC)
    FVector Velocity;                                                                 // 0x02A8 (size: 0xC)

    void NeedToUpdateKey();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_0_OnGrabbed__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void BndEvt__COMP_Grabbable_K2Node_ComponentBoundEvent_1_OnDropped__DelegateSignature(class UCOMP_Grabbable_C* Grabbable);
    void Deactivate();
    void BndEvt__BP_Key_Cell_Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Reset Key();
    void ExecuteUbergraph_BP_Key_CellNoPhys(int32 EntryPoint);
}; // Size: 0x2B4

#endif
