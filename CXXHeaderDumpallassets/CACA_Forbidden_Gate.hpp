#ifndef UE4SS_SDK_CACA_Forbidden_Gate_HPP
#define UE4SS_SDK_CACA_Forbidden_Gate_HPP

class ACACA_Forbidden_Gate_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0230 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x0238 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* SimpleNeon3;                                          // 0x0258 (size: 0x8)
    class UStaticMeshComponent* SimpleNeon2;                                          // 0x0260 (size: 0x8)
    class UStaticMeshComponent* SimpleNeon1;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* SimpleNeon;                                           // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Detector;                                             // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Street_Walkway;                                       // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    bool Active;                                                                      // 0x0290 (size: 0x1)
    bool Debug;                                                                       // 0x0291 (size: 0x1)
    FLinearColor White;                                                               // 0x0294 (size: 0x10)
    FLinearColor Red;                                                                 // 0x02A4 (size: 0x10)
    FLinearColor Green;                                                               // 0x02B4 (size: 0x10)
    bool isBlinking;                                                                  // 0x02C4 (size: 0x1)
    class UStaticMesh* Mesh;                                                          // 0x02C8 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> ArrayMat;                                 // 0x02D0 (size: 0x10)

    void SetNeonColor(class UPrimitiveComponent* Neon, FLinearColor Value);
    void UserConstructionScript();
    void BndEvt__Detector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetAllNeons(FLinearColor Color);
    void ExecuteUbergraph_CACA_Forbidden_Gate(int32 EntryPoint);
}; // Size: 0x2E0

#endif
