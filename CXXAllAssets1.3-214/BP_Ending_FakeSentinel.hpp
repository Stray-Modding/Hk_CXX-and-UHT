#ifndef UE4SS_SDK_BP_Ending_FakeSentinel_HPP
#define UE4SS_SDK_BP_Ending_FakeSentinel_HPP

class ABP_Ending_FakeSentinel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USpotLightComponent* VisionSpotLight;                                       // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0240 (size: 0x8)
    class UParticleSystemComponent* FX_Flames_small;                                  // 0x0248 (size: 0x8)
    class UPointLightComponent* SelfIlluminationPointLight;                           // 0x0250 (size: 0x8)
    class UParticleSystemComponent* FX_Electric;                                      // 0x0258 (size: 0x8)
    class UArrowComponent* FX;                                                        // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* SKM_Sentinel;                                       // 0x0268 (size: 0x8)
    class USkeletalMeshComponent* SKM_SENTINEL_DYING;                                 // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    float Lerp_VerticalPos;                                                           // 0x0280 (size: 0x4)
    FLinearColor DefaultLightColor;                                                   // 0x0284 (size: 0x10)
    class ABP_DeadSentinel_PhysicProps_C* DeadSentinel;                               // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* Dyn_Mat_SentinelLightColor;                       // 0x02A0 (size: 0x8)
    class UMaterialInterface* Sentinel_Mat;                                           // 0x02A8 (size: 0x8)
    FVector relative location;                                                        // 0x02B0 (size: 0xC)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAF7871D23();
    void Tick_6246EF4646E19036986D72BAF7871D23(float Ratio);
    void Complete_6246EF4646E19036986D72BA6A8BE34E();
    void Tick_6246EF4646E19036986D72BA6A8BE34E(float Ratio);
    void Complete_6246EF4646E19036986D72BA247CA20B();
    void Tick_6246EF4646E19036986D72BA247CA20B(float Ratio);
    void Complete_6246EF4646E19036986D72BA10DF3C28();
    void Tick_6246EF4646E19036986D72BA10DF3C28(float Ratio);
    void Activate();
    void ReceiveBeginPlay();
    void Hide_FX(bool NewHidden);
    void Break_Sentinel();
    void LogicTrigger();
    void ExecuteUbergraph_BP_Ending_FakeSentinel(int32 EntryPoint);
}; // Size: 0x2BC

#endif
