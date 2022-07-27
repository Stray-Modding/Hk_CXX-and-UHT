#ifndef UE4SS_SDK_BP_CatButton_PushableBottleCrate_HPP
#define UE4SS_SDK_BP_CatButton_PushableBottleCrate_HPP

class ABP_CatButton_PushableBottleCrate_C : public ABP_CatButton_PushableBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UChildActorComponent* Bottle4;                                              // 0x02E8 (size: 0x8)
    class UChildActorComponent* Bottle3;                                              // 0x02F0 (size: 0x8)
    class UChildActorComponent* Crate;                                                // 0x02F8 (size: 0x8)
    class UChildActorComponent* Bottle2;                                              // 0x0300 (size: 0x8)
    class UChildActorComponent* Bottle6;                                              // 0x0308 (size: 0x8)
    class UChildActorComponent* Bottle5;                                              // 0x0310 (size: 0x8)
    class UChildActorComponent* Bottle1;                                              // 0x0318 (size: 0x8)
    TArray<class UStaticMeshComponent*> ChildActorMeshes;                             // 0x0320 (size: 0x10)
    FTransform meshStartTransform;                                                    // 0x0330 (size: 0x30)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x0360 (size: 0x10)

    void UserConstructionScript();
    void On Falling();
    void BndEvt__BP_CatButton_PushableBottleCrate_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CatButton_PushableBottleCrate(int32 EntryPoint);
}; // Size: 0x370

#endif
