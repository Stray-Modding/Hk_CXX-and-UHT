#ifndef UE4SS_SDK_Seq_DocSonPilot_HPP
#define UE4SS_SDK_Seq_DocSonPilot_HPP

class ASeq_DocSonPilot_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_Droid_C* Droid;                                                         // 0x0270 (size: 0x8)
    bool QuestDone;                                                                   // 0x0278 (size: 0x1)
    class AActor* CodePos;                                                            // 0x0280 (size: 0x8)
    class ADial_SonDoc_C* DialSonDoc;                                                 // 0x0288 (size: 0x8)
    class AActor* IntroCinePos;                                                       // 0x0290 (size: 0x8)
    bool WaitForTheCat;                                                               // 0x0298 (size: 0x1)

    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_DocSonPilot(int32 EntryPoint);
}; // Size: 0x299

#endif
