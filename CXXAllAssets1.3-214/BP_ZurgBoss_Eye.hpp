#ifndef UE4SS_SDK_BP_ZurgBoss_Eye_HPP
#define UE4SS_SDK_BP_ZurgBoss_Eye_HPP

class ABP_ZurgBoss_Eye_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class ULightableComponent* lightable;                                             // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0240 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0248 (size: 0x8)
    bool bIsUnderSpotLight;                                                           // 0x0250 (size: 0x1)
    class UMaterialInstanceDynamic* IrisDynamicMaterial;                              // 0x0258 (size: 0x8)
    TEnumAsByte<ENUM_ZurgBoss_State> CurrentState;                                    // 0x0260 (size: 0x1)
    FBP_ZurgBoss_Eye_COnKilled OnKilled;                                              // 0x0268 (size: 0x10)
    void OnKilled(class ABP_ZurgBoss_Eye_C* Boss Eye);
    float InitialIrisSIValue;                                                         // 0x0278 (size: 0x4)
    float LightingRatio;                                                              // 0x027C (size: 0x4)
    FVector2D StartPupilScale;                                                        // 0x0280 (size: 0x8)
    FVector2D TargetPupilScale;                                                       // 0x0288 (size: 0x8)

    void _ChangeIsUnderSpotLight(bool NewIsUnderSpotLight);
    void _TickIsUnderSpotLight();
    void Complete_6246EF4646E19036986D72BAADB97E24();
    void Tick_6246EF4646E19036986D72BAADB97E24(float Ratio);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetState(TEnumAsByte<ENUM_ZurgBoss_State> CurrentState);
    void State_Sleep_Enter();
    void State_Sleep_Exit();
    void State_Normal_Enter();
    void State_Normal_Exit();
    void State_Excited_Enter();
    void State_Excited_Exit();
    void OnBossKilled();
    void State_Closed_Enter();
    void State_Closed_Exit();
    void UnderSpotLightChanged();
    void AnimatePupil(FVector2D TargetPupilScale);
    void BndEvt__Lightable_K2Node_ComponentBoundEvent_0_LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void BndEvt__Lightable_K2Node_ComponentBoundEvent_1_LightableDelegate__DelegateSignature(class ULightableComponent* _lightableComponent, class UAntiZurgSpotlightComponent* _spotlightComponent);
    void ExecuteUbergraph_BP_ZurgBoss_Eye(int32 EntryPoint);
    void OnKilled__DelegateSignature(class ABP_ZurgBoss_Eye_C* Boss Eye);
}; // Size: 0x290

#endif
