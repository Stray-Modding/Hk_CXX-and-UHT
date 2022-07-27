#ifndef UE4SS_SDK_BP_DoorGrid_Rooftop_HPP
#define UE4SS_SDK_BP_DoorGrid_Rooftop_HPP

class ABP_DoorGrid_Rooftop_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UBoxComponent* CatRepelZone;                                                // 0x0380 (size: 0x8)
    class UBoxComponent* ActivationZone;                                              // 0x0388 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPointStatic4;                          // 0x0390 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0398 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPointStatic3;                          // 0x03A0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPointStatic2;                          // 0x03A8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPointStatic;                           // 0x03B0 (size: 0x8)
    class USceneComponent* ZurkattackPointsStatic;                                    // 0x03B8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPointStatic1;                          // 0x03C0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint19;                               // 0x03C8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint18;                               // 0x03D0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint17;                               // 0x03D8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint16;                               // 0x03E0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint15;                               // 0x03E8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint14;                               // 0x03F0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint13;                               // 0x03F8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint12;                               // 0x0400 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint11;                               // 0x0408 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint10;                               // 0x0410 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint9;                                // 0x0418 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint8;                                // 0x0420 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint7;                                // 0x0428 (size: 0x8)
    class USceneComponent* AttackPointFront;                                          // 0x0430 (size: 0x8)
    class USceneComponent* AttackPointsRear;                                          // 0x0438 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint6;                                // 0x0440 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint5;                                // 0x0448 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint4;                                // 0x0450 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint;                                 // 0x0458 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint3;                                // 0x0460 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint2;                                // 0x0468 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint1;                                // 0x0470 (size: 0x8)
    class UZurgAttackPointManagerComponent* ZurgAttackPointManager;                   // 0x0478 (size: 0x8)
    bool isInFront;                                                                   // 0x0480 (size: 0x1)
    bool Debug;                                                                       // 0x0481 (size: 0x1)
    TArray<class USceneComponent*> AttackPoints_Front;                                // 0x0488 (size: 0x10)
    TArray<class USceneComponent*> AttackPoints_Rear;                                 // 0x0498 (size: 0x10)
    class ABP_CatPawn_C* cat;                                                         // 0x04A8 (size: 0x8)
    class ABP_Zurg_Counter_C* Zurg Counter Zone;                                      // 0x04B0 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> zurg leader;                                 // 0x04B8 (size: 0x10)
    bool ZurgCanAttackDoor;                                                           // 0x04C8 (size: 0x1)
    float Shake Force;                                                                // 0x04CC (size: 0x4)
    bool RearAttackActive;                                                            // 0x04D0 (size: 0x1)
    bool FrontAttackActive;                                                           // 0x04D1 (size: 0x1)
    int32 FrontAttackCount;                                                           // 0x04D4 (size: 0x4)
    int32 RearAttackCount;                                                            // 0x04D8 (size: 0x4)
    float Timer;                                                                      // 0x04DC (size: 0x4)
    float UpdateTime;                                                                 // 0x04E0 (size: 0x4)
    int32 FrontAttackCount_iterator;                                                  // 0x04E4 (size: 0x4)
    int32 RearAttackCount_iterator;                                                   // 0x04E8 (size: 0x4)
    float ShakeValue;                                                                 // 0x04EC (size: 0x4)
    float ShakeTimer;                                                                 // 0x04F0 (size: 0x4)
    FTransform DoorInitLocation;                                                      // 0x0500 (size: 0x30)
    float ShakeOffset;                                                                // 0x0530 (size: 0x4)
    int32 ZurgSlaveCount;                                                             // 0x0534 (size: 0x4)
    float dotTolerance;                                                               // 0x0538 (size: 0x4)
    class UAnimSequence* Custom Animation;                                            // 0x0540 (size: 0x8)
    FRotator CatRotator;                                                              // 0x0548 (size: 0xC)
    FRotator AlignDirection;                                                          // 0x0554 (size: 0xC)
    bool CatRepel;                                                                    // 0x0560 (size: 0x1)

    void RepelCat();
    void Complete_6246EF4646E19036986D72BAA4229446();
    void Tick_6246EF4646E19036986D72BAA4229446(float Ratio);
    void Complete_6246EF4646E19036986D72BA023C5C22();
    void Tick_6246EF4646E19036986D72BA023C5C22(float Ratio);
    void ReceiveBeginPlay();
    void Open();
    void Close();
    void ReceiveTick(float DeltaSeconds);
    void UpdateAttackPoints();
    void OnZurgAttached(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    void Update Shake Door();
    void SHOW_DEBUG();
    void BndEvt__BP_DoorGrid_Rooftop_ActivationZone_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_DoorGrid_Rooftop_ActivationZone_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_DoorGrid_Rooftop_CatRepelZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void RepelScared();
    void ExecuteUbergraph_BP_DoorGrid_Rooftop(int32 EntryPoint);
}; // Size: 0x561

#endif
