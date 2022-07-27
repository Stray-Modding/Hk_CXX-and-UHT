#ifndef UE4SS_SDK_BP_Clim03_HPP
#define UE4SS_SDK_BP_Clim03_HPP

class ABP_Clim03_C : public AActor
{
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Clim_FlyingStrips;                                    // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Clims_vent03;                                         // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    bool Jumpable;                                                                    // 0x0268 (size: 0x1)
    bool Spikes;                                                                      // 0x0269 (size: 0x1)
    bool Red;                                                                         // 0x026A (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x26B

#endif
