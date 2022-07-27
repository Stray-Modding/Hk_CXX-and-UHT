#ifndef UE4SS_SDK_BP_DoorDeadEndTorchlight_HPP
#define UE4SS_SDK_BP_DoorDeadEndTorchlight_HPP

class ABP_DoorDeadEndTorchlight_C : public ABP_DoorWindowBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USpringFloat_C* PadLockRotZ;                                                // 0x0380 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint24;                               // 0x0388 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint23;                               // 0x0390 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint22;                               // 0x0398 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint21;                               // 0x03A0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint20;                               // 0x03A8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint19;                               // 0x03B0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint18;                               // 0x03B8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03C0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint17;                               // 0x03C8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint16;                               // 0x03D0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint15;                               // 0x03D8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint14;                               // 0x03E0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint13;                               // 0x03E8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint12;                               // 0x03F0 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint11;                               // 0x03F8 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint10;                               // 0x0400 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint9;                                // 0x0408 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint8;                                // 0x0410 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint7;                                // 0x0418 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint6;                                // 0x0420 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint5;                                // 0x0428 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint4;                                // 0x0430 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint3;                                // 0x0438 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint2;                                // 0x0440 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint1;                                // 0x0448 (size: 0x8)
    class USceneComponent* AttackPointsStatic;                                        // 0x0450 (size: 0x8)
    class UZurgAttackPointManagerComponent* ZurgAttackPointManager;                   // 0x0458 (size: 0x8)
    class UZurgAttackPointComponent* ZurgAttackPoint;                                 // 0x0460 (size: 0x8)
    class USceneComponent* AttackPoints;                                              // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Lock;                                                 // 0x0470 (size: 0x8)
    class USceneComponent* LockPivot;                                                 // 0x0478 (size: 0x8)
    class USpringFloat_C* LockRotY;                                                   // 0x0480 (size: 0x8)
    class USpringFloat_C* LockRotX;                                                   // 0x0488 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0490 (size: 0x8)
    class UStaticMeshComponent* Padlock;                                              // 0x0498 (size: 0x8)
    class UBoxComponent* ActivationZone;                                              // 0x04A0 (size: 0x8)
    float ShakeValue;                                                                 // 0x04A8 (size: 0x4)
    float ShakeOffset;                                                                // 0x04AC (size: 0x4)
    float ShakeTimer;                                                                 // 0x04B0 (size: 0x4)
    FRotator DoorInitRotator;                                                         // 0x04B4 (size: 0xC)
    TArray<class UZurgAttackPointComponent*> AttackPointsOnDoor;                      // 0x04C0 (size: 0x10)
    float Timer;                                                                      // 0x04D0 (size: 0x4)
    float UpdateTime;                                                                 // 0x04D4 (size: 0x4)
    int32 DoorAttackCount_iterator;                                                   // 0x04D8 (size: 0x4)
    int32 DoorAttackCount;                                                            // 0x04DC (size: 0x4)
    TArray<class UZurgAttackPointComponent*> AttackPointsOnGrid;                      // 0x04E0 (size: 0x10)
    int32 GridAttackCount_iterator;                                                   // 0x04F0 (size: 0x4)
    int32 GridAttackCount;                                                            // 0x04F4 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void Update Shake Door();
    void ReceiveBeginPlay();
    void BndEvt__BP_DoorDeadEndTorchlight_ActivationZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_DoorDeadEndTorchlight_ActivationZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Open();
    void OnZurgAttachedOnDoor(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    void OnZurgAttachedOnGrid(class UZurgAttackPointComponent* _zurgAttackPointComponent, class AZurgPawnSlave* _zurg);
    void ExecuteUbergraph_BP_DoorDeadEndTorchlight(int32 EntryPoint);
}; // Size: 0x4F8

#endif
