#ifndef UE4SS_SDK_BP_HKPlayerStart_HPP
#define UE4SS_SDK_BP_HKPlayerStart_HPP

class ABP_HKPlayerStart_C : public AHKPlayerStart
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UStaticMeshComponent* Cat_StaticMesh;                                       // 0x0290 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0298 (size: 0x8)
    class UBoxComponent* SaveZone;                                                    // 0x02A0 (size: 0x8)
    class UTextRenderComponent* Start;                                                // 0x02A8 (size: 0x8)
    bool CheckpointEnabled;                                                           // 0x02B0 (size: 0x1)
    EChapter CurrentChapter;                                                          // 0x02B1 (size: 0x1)
    bool OverrideAdventureState;                                                      // 0x02B2 (size: 0x1)
    FFullAdventureState AdventureState;                                               // 0x02B3 (size: 0xD)
    bool HasSavedOnce;                                                                // 0x02C0 (size: 0x1)
    bool PlayerInSaveZone;                                                            // 0x02C1 (size: 0x1)
    FBP_HKPlayerStart_CCheckpointDispatch CheckpointDispatch;                         // 0x02C8 (size: 0x10)
    void CheckpointDispatch();

    void BeforeCatSpawned();
    void BndEvt__BP_HKPlayerStart_SaveZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Trigger Checkpoint();
    void Activate Checkpoint();
    void BndEvt__BP_HKPlayerStart_SaveZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HKPlayerStart(int32 EntryPoint);
    void CheckpointDispatch__DelegateSignature();
}; // Size: 0x2D8

#endif
