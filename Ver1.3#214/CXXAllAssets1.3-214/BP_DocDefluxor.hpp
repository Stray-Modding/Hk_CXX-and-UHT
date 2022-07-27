#ifndef UE4SS_SDK_BP_DocDefluxor_HPP
#define UE4SS_SDK_BP_DocDefluxor_HPP

class ABP_DocDefluxor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UAntiZurgSpotlightComponent* AntiZurgSpotlight;                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    class UMaterialInstanceDynamic* Color_Material;                                   // 0x0258 (size: 0x8)
    float Timer;                                                                      // 0x0260 (size: 0x4)
    bool Activate;                                                                    // 0x0264 (size: 0x1)
    float timeToUse;                                                                  // 0x0268 (size: 0x4)
    float timeToRefill;                                                               // 0x026C (size: 0x4)
    float LightIntensity;                                                             // 0x0270 (size: 0x4)
    class UCurveFloat* lightFlick;                                                    // 0x0278 (size: 0x8)
    bool Trigger;                                                                     // 0x0280 (size: 0x1)
    bool Refill;                                                                      // 0x0281 (size: 0x1)

    void GetMaxRange(float& Attenuation Radius);
    void SetLightConeAngle(float NewInnerConeAngle, float NewOuterConeAngle);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA9E97739D();
    void Tick_6246EF4646E19036986D72BA9E97739D(float Ratio);
    void ActivateDefluxor();
    void DeactivateDefluxor();
    void RechargeDefluxor();
    void CanBeUsed(bool bEnabled);
    void TriggerDefluxor(bool Trigger);
    void ExecuteUbergraph_BP_DocDefluxor(int32 EntryPoint);
}; // Size: 0x282

#endif
