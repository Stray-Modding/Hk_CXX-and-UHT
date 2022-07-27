#ifndef UE4SS_SDK_BP_Doc_Souvenir_HPP
#define UE4SS_SDK_BP_Doc_Souvenir_HPP

class ABP_Doc_Souvenir_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* cadre02;                                              // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0248 (size: 0x8)
    class UCOMP_CatButtonGeneric_C* COMP_CatButtonGeneric;                            // 0x0250 (size: 0x8)
    class AActor* SequenceToTrigger;                                                  // 0x0258 (size: 0x8)
    bool Broken;                                                                      // 0x0260 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void BndEvt__COMP_CatButtonGeneric_K2Node_ComponentBoundEvent_1_CatInteractionDispatched__DelegateSignature();
    void ReceiveBeginPlay();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Doc_Souvenir(int32 EntryPoint);
}; // Size: 0x261

#endif
