#ifndef UE4SS_SDK_BP_Clim09_HPP
#define UE4SS_SDK_BP_Clim09_HPP

class ABP_Clim09_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Clim_FlyingStrips;                                    // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* SpikesMesh;                                           // 0x0248 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* MetalPlug_MetalPlug00;                                // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Clim09;                                               // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    bool Jumpable;                                                                    // 0x0270 (size: 0x1)
    bool Spikes;                                                                      // 0x0271 (size: 0x1)
    bool Red;                                                                         // 0x0272 (size: 0x1)

    void UserConstructionScript();
    void LogicTrigger();
    void ExecuteUbergraph_BP_Clim09(int32 EntryPoint);
}; // Size: 0x273

#endif
