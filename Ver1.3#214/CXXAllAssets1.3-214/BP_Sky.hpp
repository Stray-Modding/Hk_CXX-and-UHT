#ifndef UE4SS_SDK_BP_Sky_HPP
#define UE4SS_SDK_BP_Sky_HPP

class ABP_Sky_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* MiniSkyDome;                                          // 0x0230 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* SM_SkyDome;                                           // 0x0240 (size: 0x8)
    class USkyLightComponent* SkyLight1;                                              // 0x0248 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0250 (size: 0x8)
    float GlobalBrightness;                                                           // 0x0258 (size: 0x4)
    class UDirectionalLightComponent* SunDirectionalLight;                            // 0x0260 (size: 0x8)
    bool UseFog;                                                                      // 0x0268 (size: 0x1)
    float FogBrightness;                                                              // 0x026C (size: 0x4)
    FLinearColor FogTint;                                                             // 0x0270 (size: 0x10)
    float FogAltitude;                                                                // 0x0280 (size: 0x4)
    float FogMaxOpacity;                                                              // 0x0284 (size: 0x4)
    float FogHeightFalloff;                                                           // 0x0288 (size: 0x4)
    float FogDensity;                                                                 // 0x028C (size: 0x4)
    float FogStartDistance;                                                           // 0x0290 (size: 0x4)
    float SkyBrightness;                                                              // 0x0294 (size: 0x4)
    float SkyContrast;                                                                // 0x0298 (size: 0x4)
    FLinearColor SkyTint;                                                             // 0x029C (size: 0x10)
    class UTexture* SkyTexture;                                                       // 0x02B0 (size: 0x8)
    float HDRI_RotationSpeed;                                                         // 0x02B8 (size: 0x4)
    float HDRI_Rotation;                                                              // 0x02BC (size: 0x4)
    class UAtmosphericFogComponent* AtmosphericFog;                                   // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* HDRI_MInst;                                       // 0x02C8 (size: 0x8)
    bool Rotate?;                                                                     // 0x02D0 (size: 0x1)
    bool UseSkylight?;                                                                // 0x02D1 (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Sky(int32 EntryPoint);
}; // Size: 0x2D2

#endif
