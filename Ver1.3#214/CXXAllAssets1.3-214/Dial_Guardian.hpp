#ifndef UE4SS_SDK_Dial_Guardian_HPP
#define UE4SS_SDK_Dial_Guardian_HPP

class ADial_Guardian_C : public ABP_DialogBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0338 (size: 0x8)
    bool IntroTalkedFinished;                                                         // 0x0340 (size: 0x1)
    class AActor* Momo_Dir;                                                           // 0x0348 (size: 0x8)
    class ABP_Droid_C* Guardian;                                                      // 0x0350 (size: 0x8)
    bool WaitForCatToComeClose;                                                       // 0x0358 (size: 0x1)
    class ASEQ_Intro_DroidsReturn_C* Seq_Intro_Droid_Returns;                         // 0x0360 (size: 0x8)
    bool PostCardShown;                                                               // 0x0368 (size: 0x1)
    class ASeq_Slum_intro_Alarm_C* seq slum intro alarm;                              // 0x0370 (size: 0x8)
    bool FirstTime;                                                                   // 0x0378 (size: 0x1)
    class ADial_b12_ask_the_guardian_C* Dial_B12_AskGuardian;                         // 0x0380 (size: 0x8)
    bool Untranslated;                                                                // 0x0388 (size: 0x1)
    class ABP_CatButton_FrottableDroid_C* Frottable;                                  // 0x0390 (size: 0x8)
    class ACameraActor* MomoCam;                                                      // 0x0398 (size: 0x8)
    class AActor* CatEndOfDialogPos;                                                  // 0x03A0 (size: 0x8)
    class ABP_TutoZone_C* TutoB12Help;                                                // 0x03A8 (size: 0x8)
    class ASeq_Slum_Meet_Guardian_C* Seq_Slums_MeetGuardian;                          // 0x03B0 (size: 0x8)

    void OnDialogBegan();
    void OnItemShown(class ULootableComponent* _lootable);
    void ExecuteUbergraph_Dial_Guardian(int32 EntryPoint);
}; // Size: 0x3B8

#endif
