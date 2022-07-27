#ifndef UE4SS_SDK_BP_WaterVolume_HPP
#define UE4SS_SDK_BP_WaterVolume_HPP

class ABP_WaterVolume_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x248

#endif
