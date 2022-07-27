#ifndef UE4SS_SDK_TriggerZone_HPP
#define UE4SS_SDK_TriggerZone_HPP

class ATriggerZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0258 (size: 0x10)
    bool Triggered;                                                                   // 0x0268 (size: 0x1)
    bool DoOnce;                                                                      // 0x0269 (size: 0x1)
    TSubclassOf<class AActor> ClassToDetect;                                          // 0x0270 (size: 0x8)
    bool Active;                                                                      // 0x0278 (size: 0x1)
    bool NeedItemInInventory;                                                         // 0x0279 (size: 0x1)
    FName ItemName;                                                                   // 0x027C (size: 0x8)
    bool DetectWhenEmpty;                                                             // 0x0284 (size: 0x1)
    FTriggerZone_CCatHasEnteredZone CatHasEnteredZone;                                // 0x0288 (size: 0x10)
    void CatHasEnteredZone();
    bool StreamingDone;                                                               // 0x0298 (size: 0x1)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void TriggerActors();
    void LogicTrigger();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void BndEvt__Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_TriggerZone(int32 EntryPoint);
    void CatHasEnteredZone__DelegateSignature();
}; // Size: 0x299

#endif
