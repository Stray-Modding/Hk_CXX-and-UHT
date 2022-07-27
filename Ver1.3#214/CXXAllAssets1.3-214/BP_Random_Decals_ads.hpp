#ifndef UE4SS_SDK_BP_Random_Decals_ads_HPP
#define UE4SS_SDK_BP_Random_Decals_ads_HPP

class ABP_Random_Decals_ads_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FRandomStream RandomStream;                                                       // 0x0240 (size: 0x8)
    bool Seed;                                                                        // 0x0248 (size: 0x1)
    class UMaterialInstance* Decal Material;                                          // 0x0250 (size: 0x8)
    float Rotation Min pitch;                                                         // 0x0258 (size: 0x4)
    float Rotation Max pitch;                                                         // 0x025C (size: 0x4)
    float Size Min;                                                                   // 0x0260 (size: 0x4)
    float Size Max;                                                                   // 0x0264 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x268

#endif
