#ifndef UE4SS_SDK_BP_FishingRod_HPP
#define UE4SS_SDK_BP_FishingRod_HPP

class ABP_FishingRod_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UEditorTickComponent* EditorTick;                                           // 0x0230 (size: 0x8)
    class UBoxComponent* ActivationZone;                                              // 0x0238 (size: 0x8)
    class USceneComponent* MainAnchor;                                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Hook;                                                 // 0x0248 (size: 0x8)
    class USplineMeshComponent* ChainSplineMesh;                                      // 0x0250 (size: 0x8)
    float Start Tangent Z;                                                            // 0x0258 (size: 0x4)
    float End Tangent Z;                                                              // 0x025C (size: 0x4)
    float StartTangentLength;                                                         // 0x0260 (size: 0x4)
    float EndTangentLength;                                                           // 0x0264 (size: 0x4)
    FVector2D Scale;                                                                  // 0x0268 (size: 0x8)
    FVector HookZ;                                                                    // 0x0270 (size: 0xC)
    float Timer;                                                                      // 0x027C (size: 0x4)
    float noise;                                                                      // 0x0280 (size: 0x4)
    FVector Direction;                                                                // 0x0284 (size: 0xC)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__BP_FishingRod_ActivationZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_FishingRod_ActivationZone_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_FishingRod_EditorTick_K2Node_ComponentBoundEvent_5_EditorTickSignature__DelegateSignature(float DeltaTime);
    void ExecuteUbergraph_BP_FishingRod(int32 EntryPoint);
}; // Size: 0x290

#endif
