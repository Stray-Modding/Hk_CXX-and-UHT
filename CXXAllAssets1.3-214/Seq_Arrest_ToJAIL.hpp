#ifndef UE4SS_SDK_Seq_Arrest_ToJAIL_HPP
#define UE4SS_SDK_Seq_Arrest_ToJAIL_HPP

class ASeq_Arrest_ToJAIL_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ATriggerZone_C* Trigger_Move_Blazer;                                        // 0x0270 (size: 0x8)
    class ACameraActor* Camera_1_MoveBlazer;                                          // 0x0278 (size: 0x8)
    class ACameraActor* Camera_2_ClemTop;                                             // 0x0280 (size: 0x8)
    class ACameraActor* Camera_3_ClemFoot;                                            // 0x0288 (size: 0x8)
    class ACameraActor* Camera_4_ClemFace;                                            // 0x0290 (size: 0x8)
    class ABP_Droid_C* Clem;                                                          // 0x0298 (size: 0x8)
    class ABP_Droid_C* Blazer;                                                        // 0x02A0 (size: 0x8)
    class AActor* Point_Blazer;                                                       // 0x02A8 (size: 0x8)
    class AActor* Point_Cat;                                                          // 0x02B0 (size: 0x8)
    class AActor* Door1;                                                              // 0x02B8 (size: 0x8)
    class AActor* Door2;                                                              // 0x02C0 (size: 0x8)
    class ADIAL_Club_Ending_C* DialogClubEnding;                                      // 0x02C8 (size: 0x8)
    class ADIAL_Club_Clem_C* DialClubClem;                                            // 0x02D0 (size: 0x8)
    class ACameraActor* ClemUnderArrest_CamIntro_0;                                   // 0x02D8 (size: 0x8)
    class ACameraActor* ClemUnderArrest_CamIntro;                                     // 0x02E0 (size: 0x8)
    class ALevelSequenceActor* ClementineUnderArrest_Sequence;                        // 0x02E8 (size: 0x8)
    class ACameraActor* ClemArrest_CamIntro02;                                        // 0x02F0 (size: 0x8)
    class ABP_Droid_C* RichGuy;                                                       // 0x02F8 (size: 0x8)
    class AActor* RichGuyTurnToward;                                                  // 0x0300 (size: 0x8)
    class AActor* Point_Blazer_TpToWalk;                                              // 0x0308 (size: 0x8)
    class AActor* Balzer_Vape;                                                        // 0x0310 (size: 0x8)
    class AActor* Blazer_Pant;                                                        // 0x0318 (size: 0x8)
    class ABP_Jail_CatCage_C* JailCage;                                               // 0x0320 (size: 0x8)
    bool BlazerHasLeftBalcony;                                                        // 0x0328 (size: 0x1)
    TArray<class ABP_DiscoLight_C*> ClubSopt;                                         // 0x0330 (size: 0x10)

    void OnStartSequence();
    void LogicTrigger();
    void CatHasEnteredZone_Event_0();
    void ExecuteUbergraph_Seq_Arrest_ToJAIL(int32 EntryPoint);
}; // Size: 0x340

#endif
