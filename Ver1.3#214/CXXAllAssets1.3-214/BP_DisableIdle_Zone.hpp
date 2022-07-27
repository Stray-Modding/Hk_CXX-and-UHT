#ifndef UE4SS_SDK_BP_DisableIdle_Zone_HPP
#define UE4SS_SDK_BP_DisableIdle_Zone_HPP

class ABP_DisableIdle_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    bool Enable;                                                                      // 0x0248 (size: 0x1)
    bool push;                                                                        // 0x0249 (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0250 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void BndEvt__BP_DisableIdle_Zone_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Activate();
    void Deactivate();
    void LogicTrigger();
    void ExecuteUbergraph_BP_DisableIdle_Zone(int32 EntryPoint);
}; // Size: 0x258

#endif
