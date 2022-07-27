#ifndef UE4SS_SDK_BP_PhysicBoxPile_HPP
#define UE4SS_SDK_BP_PhysicBoxPile_HPP

class ABP_PhysicBoxPile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class USceneComponent* NotebookSocket;                                            // 0x0240 (size: 0x8)
    class UArrowComponent* ImpulsionPivot;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* ImpulsionLocation;                                    // 0x0250 (size: 0x8)
    class USplineRailComponent* SplineRail;                                           // 0x0258 (size: 0x8)
    class UChildActorComponent* BoxLid;                                               // 0x0260 (size: 0x8)
    class UChildActorComponent* ContainerBox;                                         // 0x0268 (size: 0x8)
    class UChildActorComponent* Box4;                                                 // 0x0270 (size: 0x8)
    class UChildActorComponent* Box3;                                                 // 0x0278 (size: 0x8)
    class UChildActorComponent* Box2;                                                 // 0x0280 (size: 0x8)
    class UChildActorComponent* Box1;                                                 // 0x0288 (size: 0x8)
    class UBoxComponent* BoxPileCollider;                                             // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TArray<class UStaticMeshComponent*> BoxArray;                                     // 0x02A0 (size: 0x10)
    TArray<class UCOMP_PhysicsAudioComponent_C*> AudioPhysArray;                      // 0x02B0 (size: 0x10)
    float ImpulseStrength;                                                            // 0x02C0 (size: 0x4)
    bool SnapBook;                                                                    // 0x02C4 (size: 0x1)
    class ALOOT_Notebook_Gerard_C* BookInside;                                        // 0x02C8 (size: 0x8)
    bool Collapsed;                                                                   // 0x02D0 (size: 0x1)

    void ReceiveBeginPlay();
    void BndEvt__SplineRail_K2Node_ComponentBoundEvent_2_RailCatDelegate__DelegateSignature(class USplineRailComponent* _rail, class ACatPawn* _cat);
    void BndEvt__BP_PhysicBoxPile_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_PhysicBoxPile(int32 EntryPoint);
}; // Size: 0x2D1

#endif
