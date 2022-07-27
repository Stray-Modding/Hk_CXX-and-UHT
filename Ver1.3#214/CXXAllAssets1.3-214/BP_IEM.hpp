#ifndef UE4SS_SDK_BP_IEM_HPP
#define UE4SS_SDK_BP_IEM_HPP

class ABP_IEM_C : public AIEM
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0230 (size: 0x8)
    class USphereComponent* IEM_Sphere_col;                                           // 0x0238 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Timeline_0_NewTrack_2_B280DDD84CD44E4B927E71AEE85816B6;                     // 0x0258 (size: 0x4)
    float Timeline_0_NewTrack_0_B280DDD84CD44E4B927E71AEE85816B6;                     // 0x025C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B280DDD84CD44E4B927E71AEE85816B6; // 0x0260 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0268 (size: 0x8)
    class UMaterialInstanceDynamic* Material_instance;                                // 0x0270 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_IEM(int32 EntryPoint);
}; // Size: 0x278

#endif
