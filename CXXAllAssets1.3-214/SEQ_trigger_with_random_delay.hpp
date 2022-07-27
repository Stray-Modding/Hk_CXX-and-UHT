#ifndef UE4SS_SDK_SEQ_trigger_with_random_delay_HPP
#define UE4SS_SDK_SEQ_trigger_with_random_delay_HPP

class ASEQ_trigger_with_random_delay_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0270 (size: 0x8)
    bool Active;                                                                      // 0x0278 (size: 0x1)
    TArray<class AActor*> Screen_array;                                               // 0x0280 (size: 0x10)
    int32 Index;                                                                      // 0x0290 (size: 0x4)
    float Delay_time_Mul;                                                             // 0x0294 (size: 0x4)
    float delay_before_trigger;                                                       // 0x0298 (size: 0x4)
    bool needToBeSaved;                                                               // 0x029C (size: 0x1)

    void BndEvt__SEQ_trigger_with_random_delay_Meowable_K2Node_ComponentBoundEvent_0_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void OnStartSequence();
    void Activate();
    void LogicTrigger();
    void ExecuteUbergraph_SEQ_trigger_with_random_delay(int32 EntryPoint);
}; // Size: 0x29D

#endif
