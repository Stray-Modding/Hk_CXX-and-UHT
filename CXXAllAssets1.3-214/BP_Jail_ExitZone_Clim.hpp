#ifndef UE4SS_SDK_BP_Jail_ExitZone_Clim_HPP
#define UE4SS_SDK_BP_Jail_ExitZone_Clim_HPP

class ABP_Jail_ExitZone_Clim_C : public AActor
{
    class UStaticMeshComponent* Clim_11_Fan2;                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Clim_11_Fan1;                                         // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Clim_11_Fan;                                          // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Clims_vent01;                                         // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    bool Jumpable;                                                                    // 0x0268 (size: 0x1)
    bool Spikes;                                                                      // 0x0269 (size: 0x1)
    bool Red;                                                                         // 0x026A (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x26B

#endif
