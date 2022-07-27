#ifndef UE4SS_SDK_BP_Random_Decals_tags_HPP
#define UE4SS_SDK_BP_Random_Decals_tags_HPP

class ABP_Random_Decals_tags_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FRandomStream RandomStream;                                                       // 0x0240 (size: 0x8)
    bool Seed;                                                                        // 0x0248 (size: 0x1)
    class UMaterialInstance* Decal Material Instance;                                 // 0x0250 (size: 0x8)
    float Rotation Min pitch;                                                         // 0x0258 (size: 0x4)
    float Rotation Max pitch;                                                         // 0x025C (size: 0x4)
    float Size Min;                                                                   // 0x0260 (size: 0x4)
    float Size Max;                                                                   // 0x0264 (size: 0x4)
    int32 Order;                                                                      // 0x0268 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x26C

#endif
