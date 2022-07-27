#ifndef UE4SS_SDK_BP_Fogplane_HPP
#define UE4SS_SDK_BP_Fogplane_HPP

class ABP_Fogplane_C : public AActor
{
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FLinearColor Color;                                                               // 0x0238 (size: 0x10)
    float Alpha;                                                                      // 0x0248 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x24C

#endif
