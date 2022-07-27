#ifndef UE4SS_SDK_BP_LaserBeam_HPP
#define UE4SS_SDK_BP_LaserBeam_HPP

class ABP_LaserBeam_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* LaserGlobalBox;                                              // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper base;                               // 0x0238 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper tip;                                // 0x0240 (size: 0x8)
    class URectLightComponent* RectLight2;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Gear1;                                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Gear;                                                 // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Socle;                                                // 0x0260 (size: 0x8)
    class UStaticMeshComponent* LaserMesh5;                                           // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Sphere4;                                              // 0x0270 (size: 0x8)
    class UStaticMeshComponent* LaserMesh4;                                           // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Sphere3;                                              // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Sphere2;                                              // 0x0288 (size: 0x8)
    class UStaticMeshComponent* LaserMesh3;                                           // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Sphere1;                                              // 0x0298 (size: 0x8)
    class UStaticMeshComponent* LaserMesh2;                                           // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* LaserMesh1;                                           // 0x02B0 (size: 0x8)
    class USceneComponent* Laser;                                                     // 0x02B8 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x02C0 (size: 0x8)
    class USceneComponent* Base;                                                      // 0x02C8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02D0 (size: 0x8)
    bool Debug;                                                                       // 0x02D8 (size: 0x1)
    bool Activate;                                                                    // 0x02D9 (size: 0x1)
    class USplineRailComponent* LastSpline Rail;                                      // 0x02E0 (size: 0x8)
    TArray<class UStaticMeshComponent*> Lasers;                                       // 0x02E8 (size: 0x10)
    float LaserLengthMax;                                                             // 0x02F8 (size: 0x4)
    int32 LaserNum;                                                                   // 0x02FC (size: 0x4)
    float CurrentLengthMax;                                                           // 0x0300 (size: 0x4)
    bool NeedToUpdate;                                                                // 0x0304 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0308 (size: 0x8)
    bool CurrentNeedToAlert;                                                          // 0x0310 (size: 0x1)
    bool IsCatTouchLaser;                                                             // 0x0311 (size: 0x1)
    class UAnimSequence* Custom Animation;                                            // 0x0318 (size: 0x8)
    FRotator CatRotator;                                                              // 0x0320 (size: 0xC)
    FRotator AlignDirection;                                                          // 0x032C (size: 0xC)
    class USoundBase* Sound;                                                          // 0x0338 (size: 0x8)
    bool CatRepel;                                                                    // 0x0340 (size: 0x1)
    TArray<class UClass*> OverlapClass;                                               // 0x0348 (size: 0x10)
    int32 OverlapNumber;                                                              // 0x0358 (size: 0x4)
    class UMaterialInstanceDynamic* Laser_Material;                                   // 0x0360 (size: 0x8)
    class UPrimitiveComponent* Hit Component;                                         // 0x0368 (size: 0x8)
    FVector HitLocation;                                                              // 0x0370 (size: 0xC)
    class AActor* Hit Actor;                                                          // 0x0380 (size: 0x8)

    void RepelCat();
    void LineTraceForLaser(class USceneComponent* Target);
    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BAD979D0E7();
    void Tick_6246EF4646E19036986D72BAD979D0E7(float Ratio);
    void Complete_6246EF4646E19036986D72BA40D02DE5();
    void Tick_6246EF4646E19036986D72BA40D02DE5(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void LogicTrigger();
    void play_repel_sfx(FVector Location);
    void Disable();
    void BndEvt__BP_LaserBeam_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void DetectObjectInLaser();
    void UpdateLaser();
    void RepelScared();
    void ShowDebug();
    void BndEvt__BP_LaserBeam_LaserGlobalBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LaserBeam_LaserGlobalBox_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ActivateCollison(bool On);
    void ExecuteUbergraph_BP_LaserBeam(int32 EntryPoint);
}; // Size: 0x388

#endif
