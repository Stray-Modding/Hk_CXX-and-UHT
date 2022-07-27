#ifndef UE4SS_SDK_BP_Grille_CatJump_Broken_HPP
#define UE4SS_SDK_BP_Grille_CatJump_Broken_HPP

class ABP_Grille_CatJump_Broken_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Collision;                                            // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Grillage_450x200;                                     // 0x0250 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0258 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    class ABP_MovingSplineRail_C* MovingSplineRail;                                   // 0x0270 (size: 0x8)
    float Angle;                                                                      // 0x0278 (size: 0x4)
    float initrot;                                                                    // 0x027C (size: 0x4)
    int32 JumpIteration;                                                              // 0x0280 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x0288 (size: 0x8)
    float PreviewMovement;                                                            // 0x0290 (size: 0x4)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAF663E229();
    void Tick_6246EF4646E19036986D72BAF663E229(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_Grille_CatJump_Broken_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Attach_Rail();
    void ExecuteUbergraph_BP_Grille_CatJump_Broken(int32 EntryPoint);
}; // Size: 0x294

#endif
