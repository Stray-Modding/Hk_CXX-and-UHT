#ifndef UE4SS_SDK_BP_CatButtonPaperBag_HPP
#define UE4SS_SDK_BP_CatButtonPaperBag_HPP

class ABP_CatButtonPaperBag_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UCOMP_CatPaperBag_C* COMP_CatPaperBag;                                      // 0x0240 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0248 (size: 0x8)
    bool BagOnHead;                                                                   // 0x0250 (size: 0x1)
    float DurationOfLol;                                                              // 0x0254 (size: 0x4)

    void BndEvt__BP_CatButtonPaperBag_COMP_CatPaperBag_K2Node_ComponentBoundEvent_0_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_CatButtonPaperBag(int32 EntryPoint);
}; // Size: 0x258

#endif
