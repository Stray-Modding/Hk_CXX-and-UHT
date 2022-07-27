#ifndef UE4SS_SDK_BP_PosterTorn_Random_HPP
#define UE4SS_SDK_BP_PosterTorn_Random_HPP

class ABP_PosterTorn_Random_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0230 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0238 (size: 0x8)
    bool Seed;                                                                        // 0x0240 (size: 0x1)
    FRandomStream RandomStream;                                                       // 0x0244 (size: 0x8)
    float Rotation Min;                                                               // 0x024C (size: 0x4)
    float Rotation Max;                                                               // 0x0250 (size: 0x4)
    float Size Min;                                                                   // 0x0254 (size: 0x4)
    float Size Max;                                                                   // 0x0258 (size: 0x4)
    class UMaterialInstance* Base Material;                                           // 0x0260 (size: 0x8)
    class UMaterialInstanceDynamic* Dynamic_Mat;                                      // 0x0268 (size: 0x8)
    int32 Nmb_Vertical;                                                               // 0x0270 (size: 0x4)
    int32 Nmb_Horizontal;                                                             // 0x0274 (size: 0x4)
    int32 Nmb_Vertical Co;                                                            // 0x0278 (size: 0x4)
    int32 Nmb_Horizontal Co;                                                          // 0x027C (size: 0x4)
    class UTexture* Color Texture;                                                    // 0x0280 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x288

#endif
