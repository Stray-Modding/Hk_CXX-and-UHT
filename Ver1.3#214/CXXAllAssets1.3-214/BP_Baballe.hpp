#ifndef UE4SS_SDK_BP_Baballe_HPP
#define UE4SS_SDK_BP_Baballe_HPP

class ABP_Baballe_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UAudioComponent* PushVIBE;                                                  // 0x0238 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0240 (size: 0x8)
    class USceneComponent* Feedback;                                                  // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    class UCOMP_CatPawPushable_C* COMP_CatPawPushable;                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0260 (size: 0x8)
    float PushStrength;                                                               // 0x0268 (size: 0x4)
    float RandomPushStrengthDeviation;                                                // 0x026C (size: 0x4)
    float RandomHorizontalRange;                                                      // 0x0270 (size: 0x4)
    float RandomVerticalRange;                                                        // 0x0274 (size: 0x4)

    void BndEvt__COMP_CatPawPushable_K2Node_ComponentBoundEvent_0_OnPawPushed__DelegateSignature(class UCOMP_CatPawPushable_C* PawPushableComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Baballe(int32 EntryPoint);
}; // Size: 0x278

#endif
