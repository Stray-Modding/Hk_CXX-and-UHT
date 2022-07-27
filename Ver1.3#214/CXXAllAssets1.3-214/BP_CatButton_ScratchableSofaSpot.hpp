#ifndef UE4SS_SDK_BP_CatButton_ScratchableSofaSpot_HPP
#define UE4SS_SDK_BP_CatButton_ScratchableSofaSpot_HPP

class ABP_CatButton_ScratchableSofaSpot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UArrowComponent* DroneSpot;                                                 // 0x0238 (size: 0x8)
    class UArrowComponent* ScratchSpot;                                               // 0x0240 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    bool DoOnce;                                                                      // 0x0258 (size: 0x1)
    bool TriggerOnNbScratch;                                                          // 0x0259 (size: 0x1)
    int32 Max_Scratch;                                                                // 0x025C (size: 0x4)
    int32 ScratchCount;                                                               // 0x0260 (size: 0x4)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0268 (size: 0x10)
    bool MoveDrone;                                                                   // 0x0278 (size: 0x1)
    class AActor* CustomCamera;                                                       // 0x0280 (size: 0x8)
    float CustomCam_Blend;                                                            // 0x0288 (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__BP_CatButton_ScratchableWallSpot_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void BndEvt__BP_CatButton_ScratchableWallSpot_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_1_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void BndEvt__BP_CatButton_ScratchableWallSpot_COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_2_CatUsableDelegate__DelegateSignature(class UCatUsableComponentBase* Component, class ACatPawn* cat);
    void ExecuteUbergraph_BP_CatButton_ScratchableSofaSpot(int32 EntryPoint);
}; // Size: 0x28C

#endif
