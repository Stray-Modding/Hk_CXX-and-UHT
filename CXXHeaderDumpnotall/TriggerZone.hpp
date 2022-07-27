#ifndef UE4SS_SDK_TriggerZone_HPP
#define UE4SS_SDK_TriggerZone_HPP

class ATriggerZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStreamingComponent* Streaming;
    class USaveComponent* Save;
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;
    class USceneComponent* Scene;
    TArray<class AActor*> ActorToTrigger;
    bool Triggered;
    bool DoOnce;
    TSubclassOf<class AActor> ClassToDetect;
    bool Active;
    bool NeedItemInInventory;
    FName ItemName;
    bool DetectWhenEmpty;
    FTriggerZone_CCatHasEnteredZone CatHasEnteredZone;
    void CatHasEnteredZone();
    bool StreamingDone;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void TriggerActors();
    void LogicTrigger();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_TriggerZone(int32 EntryPoint);
    void CatHasEnteredZone__DelegateSignature();
};

#endif
