#ifndef UE4SS_SDK_BP_Ending_SplineSentinel_HPP
#define UE4SS_SDK_BP_Ending_SplineSentinel_HPP

class ABP_Ending_SplineSentinel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0230 (size: 0x8)
    class USpotLightComponent* VisionSpotLight;                                       // 0x0238 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0240 (size: 0x8)
    class UPointLightComponent* SelfIlluminationPointLight;                           // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* SKM_Sentinel;                                       // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    float Lerp_POS;                                                                   // 0x0260 (size: 0x4)
    FLinearColor DefaultLightColor;                                                   // 0x0264 (size: 0x10)
    class UMaterialInstanceDynamic* Dyn_Mat_SentinelLightColor;                       // 0x0278 (size: 0x8)
    class UMaterialInterface* Sentinel_Mat;                                           // 0x0280 (size: 0x8)
    float SplineTime;                                                                 // 0x0288 (size: 0x4)
    float DelayBeforeMoving;                                                          // 0x028C (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA44253073();
    void Tick_6246EF4646E19036986D72BA44253073(float Ratio);
    void Complete_6246EF4646E19036986D72BAA486E3F6();
    void Tick_6246EF4646E19036986D72BAA486E3F6(float Ratio);
    void Activate();
    void ReceiveBeginPlay();
    void Break_Sentinel();
    void LogicTrigger();
    void Update_SentPos();
    void ExecuteUbergraph_BP_Ending_SplineSentinel(int32 EntryPoint);
}; // Size: 0x290

#endif
