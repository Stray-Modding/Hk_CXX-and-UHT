#ifndef UE4SS_SDK_BP_Bloom_HPP
#define UE4SS_SDK_BP_Bloom_HPP

class ABP_Bloom_C : public AActor
{
    class UStaticMeshComponent* Sphere_inv_nm;                                        // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FLinearColor Color;                                                               // 0x0238 (size: 0x10)
    float Alpha;                                                                      // 0x0248 (size: 0x4)
    bool Flick_?;                                                                     // 0x024C (size: 0x1)
    float Flick_Speed;                                                                // 0x0250 (size: 0x4)
    float Flick_mul_min;                                                              // 0x0254 (size: 0x4)
    float Flick_mul_max;                                                              // 0x0258 (size: 0x4)
    float Flick_Invert;                                                               // 0x025C (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x260

#endif
