#ifndef UE4SS_SDK_BP_Clim07_HPP
#define UE4SS_SDK_BP_Clim07_HPP

class ABP_Clim07_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Clim_FlyingStrips;                                    // 0x0240 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Clim_07_pale;                                         // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Clims_vent07;                                         // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    float Random Pale Speed;                                                          // 0x0280 (size: 0x4)
    bool Jumpable;                                                                    // 0x0284 (size: 0x1)
    bool Spikes;                                                                      // 0x0285 (size: 0x1)
    bool Red;                                                                         // 0x0286 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Clim07(int32 EntryPoint);
}; // Size: 0x287

#endif
