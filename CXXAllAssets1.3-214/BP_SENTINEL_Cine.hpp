#ifndef UE4SS_SDK_BP_SENTINEL_Cine_HPP
#define UE4SS_SDK_BP_SENTINEL_Cine_HPP

class ABP_SENTINEL_Cine_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class USpotLightComponent* VisionSpotLight;                                       // 0x02B8 (size: 0x8)
    class UMaterialInterface* Sentinel_Mat;                                           // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* Dyn_Mat_SentinelLightColor;                       // 0x02C8 (size: 0x8)
    float LightInclinaison;                                                           // 0x02D0 (size: 0x4)
    FLinearColor Color;                                                               // 0x02D4 (size: 0x10)

    void UserConstructionScript();
    void Change Color Sentinel(FLinearColor Color);
    void ExecuteUbergraph_BP_SENTINEL_Cine(int32 EntryPoint);
}; // Size: 0x2E4

#endif
