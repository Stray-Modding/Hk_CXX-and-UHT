#ifndef UE4SS_SDK_BP_WaterPlaneVolume_HPP
#define UE4SS_SDK_BP_WaterPlaneVolume_HPP

class ABP_WaterPlaneVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Water Box Trigger;                                           // 0x0230 (size: 0x8)
    class UProceduralMeshComponent* WaterProceduralMesh;                              // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    FVector Water Plane Location;                                                     // 0x0248 (size: 0xC)
    float Water Density;                                                              // 0x0254 (size: 0x4)
    float Gravity;                                                                    // 0x0258 (size: 0x4)
    float Normal Angular Damping;                                                     // 0x025C (size: 0x4)
    float Normal Linear Damping;                                                      // 0x0260 (size: 0x4)
    float Water Angular Damping;                                                      // 0x0264 (size: 0x4)
    float Water Linear Damping;                                                       // 0x0268 (size: 0x4)
    FVector Water Volume Gizmo;                                                       // 0x026C (size: 0xC)
    float Mesh vertical Offset;                                                       // 0x0278 (size: 0x4)
    int32 Num Vertices X;                                                             // 0x027C (size: 0x4)
    int32 Num Vertices Y;                                                             // 0x0280 (size: 0x4)
    FLinearColor Vertex Color;                                                        // 0x0284 (size: 0x10)
    class UMaterialInterface* Water Material;                                         // 0x0298 (size: 0x8)
    TArray<int32> Triangles;                                                          // 0x02A0 (size: 0x10)
    TArray<FVector> Vertices;                                                         // 0x02B0 (size: 0x10)
    TArray<FVector2D> UV0;                                                            // 0x02C0 (size: 0x10)
    TArray<FVector> Normals;                                                          // 0x02D0 (size: 0x10)
    TArray<FProcMeshTangent> Tangents;                                                // 0x02E0 (size: 0x10)
    TArray<FLinearColor> Vertex Colors;                                               // 0x02F0 (size: 0x10)
    TArray<class UPrimitiveComponent*> Primitives List;                               // 0x0300 (size: 0x10)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Water Box Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Water Box Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WaterPlaneVolume(int32 EntryPoint);
}; // Size: 0x310

#endif
