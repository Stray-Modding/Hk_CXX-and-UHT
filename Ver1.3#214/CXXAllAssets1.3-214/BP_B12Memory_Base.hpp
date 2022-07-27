#ifndef UE4SS_SDK_BP_B12Memory_Base_HPP
#define UE4SS_SDK_BP_B12Memory_Base_HPP

class ABP_B12Memory_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UCOMP_UsableDroneMemory_C* COMP_UsableDroneMemory;                          // 0x0238 (size: 0x8)
    class UArrowComponent* DronePos;                                                  // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    class UMaterialInterface* NonShinyMat;                                            // 0x0258 (size: 0x8)
    class UMaterialInterface* ShinyMat;                                               // 0x0260 (size: 0x8)
    bool ShinyOn;                                                                     // 0x0268 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void UpdateMaterial();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_B12Memory_Base(int32 EntryPoint);
}; // Size: 0x269

#endif
