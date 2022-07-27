#ifndef UE4SS_SDK_BP_Random_Decals_HPP
#define UE4SS_SDK_BP_Random_Decals_HPP

class ABP_Random_Decals_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FRandomStream RandomStream;                                                       // 0x0240 (size: 0x8)
    bool Seed;                                                                        // 0x0248 (size: 0x1)
    class UMaterialInstanceDynamic* Dynamic_Mat;                                      // 0x0250 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0258 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x025C (size: 0x4)
    class UTexture* Texture;                                                          // 0x0260 (size: 0x8)
    TArray<FLinearColor> Color;                                                       // 0x0268 (size: 0x10)
    float Rotation Min pitch;                                                         // 0x0278 (size: 0x4)
    float Rotation Max pitch;                                                         // 0x027C (size: 0x4)
    float Size Min;                                                                   // 0x0280 (size: 0x4)
    float Size Max;                                                                   // 0x0284 (size: 0x4)
    class UMaterial* Base Material;                                                   // 0x0288 (size: 0x8)
    class UMaterialInstance* Base Material Instance (Optional replacement);           // 0x0290 (size: 0x8)
    bool Random RGB;                                                                  // 0x0298 (size: 0x1)
    int32 Order;                                                                      // 0x029C (size: 0x4)
    bool Use MI instead of Mat?;                                                      // 0x02A0 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2A1

#endif
