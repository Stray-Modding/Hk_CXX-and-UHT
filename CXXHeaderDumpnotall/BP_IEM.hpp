#ifndef UE4SS_SDK_BP_IEM_HPP
#define UE4SS_SDK_BP_IEM_HPP

class ABP_IEM_C : public AIEM
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URadialForceComponent* RadialForce;
    class USphereComponent* IEM_Sphere_col;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_2_B280DDD84CD44E4B927E71AEE85816B6;
    float Timeline_0_NewTrack_0_B280DDD84CD44E4B927E71AEE85816B6;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B280DDD84CD44E4B927E71AEE85816B6;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* Material_instance;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_IEM(int32 EntryPoint);
};

#endif
