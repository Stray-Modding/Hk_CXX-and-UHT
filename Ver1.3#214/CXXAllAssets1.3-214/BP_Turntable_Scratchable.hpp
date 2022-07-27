#ifndef UE4SS_SDK_BP_Turntable_Scratchable_HPP
#define UE4SS_SDK_BP_Turntable_Scratchable_HPP

class ABP_Turntable_Scratchable_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DiskPivot;                                                 // 0x0230 (size: 0x8)
    class UBoxComponent* DiskDetector;                                                // 0x0238 (size: 0x8)
    class UCOMP_CatScratchableComponent_C* COMP_CatScratchableComponent;              // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Disk;                                                 // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Turntable_Turntable_Mixer;                            // 0x0258 (size: 0x8)
    class UStaticMeshComponent* Turntable_Turntable_Arm_L;                            // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Turntable_Turntable_Arm_R;                            // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Turntable_Turntable_Jogwheel_L;                       // 0x0270 (size: 0x8)
    class UStaticMeshComponent* Turntable_Turntable_Jogwheel_R;                       // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Turntable_Turntable_Decks;                            // 0x0280 (size: 0x8)
    class UArrowComponent* ScratchPoint;                                              // 0x0288 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    float RotationDiskMaxSpeed;                                                       // 0x02A0 (size: 0x4)
    class ASeq_Club_MissingLever_C* Seq_Lever;                                        // 0x02A8 (size: 0x8)
    class ABP_sfx_clubManager_C* BP_sfx_clubManager;                                  // 0x02B0 (size: 0x8)
    float DiskSpeed;                                                                  // 0x02B8 (size: 0x4)
    bool DiskDetected;                                                                // 0x02BC (size: 0x1)
    bool HasDisk;                                                                     // 0x02BD (size: 0x1)
    class ABP_Disk_Grabbable_C* DiskRef;                                              // 0x02C0 (size: 0x8)
    FBP_Turntable_Scratchable_CMusicON MusicON;                                       // 0x02C8 (size: 0x10)
    void MusicON();
    class APROTO_ButtonIcon_C* CatButtonIcon;                                         // 0x02D8 (size: 0x8)
    class ABP_Droid_C* Droid_DJ_Partying;                                             // 0x02E0 (size: 0x8)
    class ABP_Droid_C* Droid_DJ_Mixing;                                               // 0x02E8 (size: 0x8)
    TArray<class ABP_Droid_C*> DroidToReactWhenScratched;                             // 0x02F0 (size: 0x10)
    bool DroidCheering;                                                               // 0x0300 (size: 0x1)

    void Complete_6246EF4646E19036986D72BA0D65BE5D();
    void Tick_6246EF4646E19036986D72BA0D65BE5D(float Ratio);
    void Complete_6246EF4646E19036986D72BA07221D71();
    void Tick_6246EF4646E19036986D72BA07221D71(float Ratio);
    void BndEvt__COMP_CatScratchableComponent_K2Node_ComponentBoundEvent_0_OnScratched__DelegateSignature(class UCOMP_CatScratchableComponent_C* Scratchable);
    void BndEvt__DiskDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DiskDetector_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_3_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void TurnReadingHead(float Time);
    void DiskAccel(float Time);
    void OnObjectDropped_Event_0(class ABP_CatPawn_C* cat, class UCOMP_Grabbable_C* Grabbable);
    void ExecuteUbergraph_BP_Turntable_Scratchable(int32 EntryPoint);
    void MusicON__DelegateSignature();
}; // Size: 0x301

#endif
