#ifndef UE4SS_SDK_BP_DiscoLight_HPP
#define UE4SS_SDK_BP_DiscoLight_HPP

class ABP_DiscoLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Club_Spotlight_Light;                                 // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Club_Spotlight_Base;                                  // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    FRotator Relative Rotation;                                                       // 0x0258 (size: 0xC)
    FRotator Random Rotation;                                                         // 0x0264 (size: 0xC)
    class UMaterialInstanceDynamic* LightColor;                                       // 0x0270 (size: 0x8)
    bool AfterEnteringClub;                                                           // 0x0278 (size: 0x1)
    float StartIntensity;                                                             // 0x027C (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA900E288F();
    void Tick_6246EF4646E19036986D72BA900E288F(float Ratio);
    void ReceiveBeginPlay();
    void Stop&Hide();
    void Start&Show();
    void ExecuteUbergraph_BP_DiscoLight(int32 EntryPoint);
}; // Size: 0x280

#endif
