#ifndef UE4SS_SDK_BP_Dialog_Zone_HPP
#define UE4SS_SDK_BP_Dialog_Zone_HPP

class ABP_Dialog_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    class USaveComponent* Save;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class ADialog* B12Dialog;
    TSubclassOf<class ADialog> Dialog Class;
    class AActor* ActorToMakeTalk;
    bool Used;
    bool OnlyOnce?;
    bool Active;
    bool Delay?;
    float DelayTime;
    bool AllowMovement;
    class ABP_Droid_C* Momo;
    FBP_Dialog_Zone_CDialogRequested DialogRequested;
    void DialogRequested();

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LogicTrigger();
    void DialogEnded_Event_0(class UTalkableComponent* _talkableComponent);
    void ExecuteUbergraph_BP_Dialog_Zone(int32 EntryPoint);
    void DialogRequested__DelegateSignature();
};

#endif
