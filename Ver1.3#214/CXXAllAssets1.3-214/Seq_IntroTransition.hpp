#ifndef UE4SS_SDK_Seq_IntroTransition_HPP
#define UE4SS_SDK_Seq_IntroTransition_HPP

class ASeq_IntroTransition_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    TArray<FName> Transition Groups;                                                  // 0x0278 (size: 0x10)
    TArray<TSoftObjectPtr<UWorld>> Preloaded Levels;                                  // 0x0288 (size: 0x10)
    bool StartTransition;                                                             // 0x0298 (size: 0x1)
    class AActor* TeleportPos;                                                        // 0x02A0 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void ExecuteUbergraph_Seq_IntroTransition(int32 EntryPoint);
}; // Size: 0x2A8

#endif
