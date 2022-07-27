#ifndef UE4SS_SDK_BP_CatButton_ScratchablePlank2_HPP
#define UE4SS_SDK_BP_CatButton_ScratchablePlank2_HPP

class ABP_CatButton_ScratchablePlank2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UArrowComponent* ScratchSpot;                                               // 0x0240 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CatButton_ScratchablePlank2(int32 EntryPoint);
}; // Size: 0x258

#endif
