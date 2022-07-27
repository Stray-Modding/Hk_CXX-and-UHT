#ifndef UE4SS_SDK_BP_CatButton_Scratchable_OpenableDrawer_HPP
#define UE4SS_SDK_BP_CatButton_Scratchable_OpenableDrawer_HPP

class ABP_CatButton_Scratchable_OpenableDrawer_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Clothset01_06;                                        // 0x0388 (size: 0x8)
    class USceneComponent* StretchPivot;                                              // 0x0390 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0398 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* Cardboard_2;                                          // 0x03A8 (size: 0x8)
    bool IsScratching;                                                                // 0x03B0 (size: 0x1)

    void Complete_578069E64FB8DCA8E1905FB72404F29E();
    void Tick_578069E64FB8DCA8E1905FB72404F29E(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void Cancel Scratch();
    void BndEvt__BP_CatButton_Scratchable_OpenableDrawer_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_CatButton_Scratchable_OpenableDrawer(int32 EntryPoint);
}; // Size: 0x3B1

#endif
