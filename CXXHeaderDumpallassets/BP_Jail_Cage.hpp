#ifndef UE4SS_SDK_BP_Jail_Cage_HPP
#define UE4SS_SDK_BP_Jail_Cage_HPP

class ABP_Jail_Cage_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0238 (size: 0x8)
    class UArrowComponent* SplineRailPos;                                             // 0x0240 (size: 0x8)
    class USpringFloat_C* ChainRotX;                                                  // 0x0248 (size: 0x8)
    class USpringFloat_C* MainAnchorRotY;                                             // 0x0250 (size: 0x8)
    class USpringFloat_C* MainAnchorRotX;                                             // 0x0258 (size: 0x8)
    class USceneComponent* Cage;                                                      // 0x0260 (size: 0x8)
    class USceneComponent* MainAnchor;                                                // 0x0268 (size: 0x8)
    class USpringFloat_C* CageRotY;                                                   // 0x0270 (size: 0x8)
    class USpringFloat_C* CageRotX;                                                   // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Jail_Cat_Cage;                                        // 0x0280 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0288 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    bool Activate;                                                                    // 0x02A0 (size: 0x1)
    class ABP_MovingSplineRail_C* spline rail;                                        // 0x02A8 (size: 0x8)
    int32 HitNumber;                                                                  // 0x02B0 (size: 0x4)
    bool DoorIsBroken;                                                                // 0x02B4 (size: 0x1)
    bool CatIsOnCage;                                                                 // 0x02B5 (size: 0x1)
    int32 SplineSegment;                                                              // 0x02B8 (size: 0x4)
    TArray<class USplineMeshComponent*> ChainSplineMesh;                              // 0x02C0 (size: 0x10)
    FVector PreviousCageLocation;                                                     // 0x02D0 (size: 0xC)
    FVector CageLocation;                                                             // 0x02DC (size: 0xC)
    FVector CageVelocity;                                                             // 0x02E8 (size: 0xC)
    FVector CageAngularVelocity;                                                      // 0x02F4 (size: 0xC)
    FRotator PreviousCageRotator;                                                     // 0x0300 (size: 0xC)
    FRotator CageRotator;                                                             // 0x030C (size: 0xC)
    float ChainLength;                                                                // 0x0318 (size: 0x4)
    float WallLimit;                                                                  // 0x031C (size: 0x4)
    float CageVelocityValue;                                                          // 0x0320 (size: 0x4)
    bool Debug;                                                                       // 0x0324 (size: 0x1)
    float sfx_grinding_volume;                                                        // 0x0328 (size: 0x4)
    class ABP_RotatingBeam_Jail_C* RotatingBeam;                                      // 0x0330 (size: 0x8)
    bool DoImpulse;                                                                   // 0x0338 (size: 0x1)
    float CatImpulseX;                                                                // 0x033C (size: 0x4)
    float CatImpulseY;                                                                // 0x0340 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Update_Chain();
    void UpdateDebug();
    void Attach_Rail();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Jail_Cage(int32 EntryPoint);
}; // Size: 0x344

#endif
