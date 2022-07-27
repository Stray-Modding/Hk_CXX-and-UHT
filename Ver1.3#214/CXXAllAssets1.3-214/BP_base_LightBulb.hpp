#ifndef UE4SS_SDK_BP_base_LightBulb_HPP
#define UE4SS_SDK_BP_base_LightBulb_HPP

class ABP_base_LightBulb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Sphere_inv_nm;                                        // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* LightMesh;                                            // 0x0258 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0260 (size: 0x8)
    int32 SI_mat_index;                                                               // 0x0268 (size: 0x4)
    bool Override_color;                                                              // 0x026C (size: 0x1)
    FLinearColor Color;                                                               // 0x0270 (size: 0x10)
    int32 Glass_mat_index;                                                            // 0x0280 (size: 0x4)
    TEnumAsByte<ENUM_LightsIntensity> Intensity;                                      // 0x0284 (size: 0x1)
    TEnumAsByte<ENUM_LightsColors> Color Preset;                                      // 0x0285 (size: 0x1)
    bool Bloom_?;                                                                     // 0x0286 (size: 0x1)
    float Bloom_Alpha;                                                                // 0x0288 (size: 0x4)
    float Bloom_Scale;                                                                // 0x028C (size: 0x4)
    bool Flick_?;                                                                     // 0x0290 (size: 0x1)
    float Flick_Speed;                                                                // 0x0294 (size: 0x4)
    float Flick_mul_min;                                                              // 0x0298 (size: 0x4)
    float Flick_mul_max;                                                              // 0x029C (size: 0x4)
    bool Light on/off;                                                                // 0x02A0 (size: 0x1)
    bool Cable ?;                                                                     // 0x02A1 (size: 0x1)
    bool Omni_ON_?;                                                                   // 0x02A2 (size: 0x1)
    float Omni_Intensity_mul;                                                         // 0x02A4 (size: 0x4)
    float Flick_Invert;                                                               // 0x02A8 (size: 0x4)
    bool Override_Intensity;                                                          // 0x02AC (size: 0x1)
    float Intensity (lm);                                                             // 0x02B0 (size: 0x4)
    float CablesScale;                                                                // 0x02B4 (size: 0x4)
    TArray<class UStaticMesh*> CablesMeshes;                                          // 0x02B8 (size: 0x10)

    void UserConstructionScript();
    void Turn Light On();
    void Turn Light Off();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_base_LightBulb(int32 EntryPoint);
}; // Size: 0x2C8

#endif
