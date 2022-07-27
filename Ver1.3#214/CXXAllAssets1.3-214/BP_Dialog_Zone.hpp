#ifndef UE4SS_SDK_BP_Dialog_Zone_HPP
#define UE4SS_SDK_BP_Dialog_Zone_HPP

class ABP_Dialog_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0230 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class ADialog* B12Dialog;                                                         // 0x0250 (size: 0x8)
    TSubclassOf<class ADialog> Dialog Class;                                          // 0x0258 (size: 0x8)
    class AActor* ActorToMakeTalk;                                                    // 0x0260 (size: 0x8)
    bool Used;                                                                        // 0x0268 (size: 0x1)
    bool OnlyOnce?;                                                                   // 0x0269 (size: 0x1)
    bool Active;                                                                      // 0x026A (size: 0x1)
    bool Delay?;                                                                      // 0x026B (size: 0x1)
    float DelayTime;                                                                  // 0x026C (size: 0x4)
    bool AllowMovement;                                                               // 0x0270 (size: 0x1)
    class ABP_Droid_C* Momo;                                                          // 0x0278 (size: 0x8)
    FBP_Dialog_Zone_CDialogRequested DialogRequested;                                 // 0x0280 (size: 0x10)
    void DialogRequested();

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void LogicTrigger();
    void DialogEnded_Event_0(class UTalkableComponent* _talkableComponent);
    void ExecuteUbergraph_BP_Dialog_Zone(int32 EntryPoint);
    void DialogRequested__DelegateSignature();
}; // Size: 0x290

#endif
