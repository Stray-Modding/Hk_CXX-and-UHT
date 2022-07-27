#ifndef UE4SS_SDK_Seq_Clem_Flat_Intro_HPP
#define UE4SS_SDK_Seq_Clem_Flat_Intro_HPP

class ASeq_Clem_Flat_Intro_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UActorIdComponent* ActorId;                                                 // 0x0270 (size: 0x8)
    bool Start;                                                                       // 0x0278 (size: 0x1)
    bool IntroDone;                                                                   // 0x0279 (size: 0x1)
    class ALevelSequenceActor* MeetClem_Sequence;                                     // 0x0280 (size: 0x8)
    class ABP_Droid_C* Clem;                                                          // 0x0288 (size: 0x8)
    class AActor* Lamp_InHand_SKM;                                                    // 0x0290 (size: 0x8)
    class ATriggerZone_C* Trigger;                                                    // 0x0298 (size: 0x8)
    class AActor* Point_Cat_MoveTo;                                                   // 0x02A0 (size: 0x8)
    class AActor* Point_Cat_AfterCine;                                                // 0x02A8 (size: 0x8)
    class ACameraActor* CamIntro;                                                     // 0x02B0 (size: 0x8)
    class ACameraActor* CamOutro;                                                     // 0x02B8 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void DisableIntro_Clem();
    void ExecuteUbergraph_Seq_Clem_Flat_Intro(int32 EntryPoint);
}; // Size: 0x2C0

#endif
