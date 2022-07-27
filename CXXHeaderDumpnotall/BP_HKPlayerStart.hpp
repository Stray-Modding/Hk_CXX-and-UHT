#ifndef UE4SS_SDK_BP_HKPlayerStart_HPP
#define UE4SS_SDK_BP_HKPlayerStart_HPP

class ABP_HKPlayerStart_C : public AHKPlayerStart
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cat_StaticMesh;
    class USaveComponent* Save;
    class UBoxComponent* SaveZone;
    class UTextRenderComponent* Start;
    bool CheckpointEnabled;
    EChapter CurrentChapter;
    bool OverrideAdventureState;
    FFullAdventureState AdventureState;
    bool HasSavedOnce;
    bool PlayerInSaveZone;
    FBP_HKPlayerStart_CCheckpointDispatch CheckpointDispatch;
    void CheckpointDispatch();

    void BeforeCatSpawned();
    void BndEvt__BP_HKPlayerStart_SaveZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Trigger Checkpoint();
    void Activate Checkpoint();
    void BndEvt__BP_HKPlayerStart_SaveZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_HKPlayerStart(int32 EntryPoint);
    void CheckpointDispatch__DelegateSignature();
};

#endif
