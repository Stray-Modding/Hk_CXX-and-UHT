#ifndef UE4SS_SDK_Seq_FadeEND_HPP
#define UE4SS_SDK_Seq_FadeEND_HPP

class ASeq_FadeEND_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0270 (size: 0x8)
    class ALevelSequenceActor* Sequencer;                                             // 0x0278 (size: 0x8)
    TSubclassOf<class UUserWidget> Class;                                             // 0x0280 (size: 0x8)

    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_FadeEND(int32 EntryPoint);
}; // Size: 0x288

#endif
