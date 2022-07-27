#ifndef UE4SS_SDK_Seq_DroidPrisonersInCourtYard_HPP
#define UE4SS_SDK_Seq_DroidPrisonersInCourtYard_HPP

class ASeq_DroidPrisonersInCourtYard_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    bool Activate;                                                                    // 0x0278 (size: 0x1)
    class ABP_Droid_C* Prisoner01;                                                    // 0x0280 (size: 0x8)
    TArray<class AActor*> Collision_Prisonner01;                                      // 0x0288 (size: 0x10)
    class AActor* Prisoner01_POS;                                                     // 0x0298 (size: 0x8)
    class AActor* Prisoner01_POS2;                                                    // 0x02A0 (size: 0x8)
    class AActor* Prisoner01_POS3;                                                    // 0x02A8 (size: 0x8)
    class ABP_Droid_C* Prisoner02;                                                    // 0x02B0 (size: 0x8)
    class ABP_DoorWindowBase_C* DoorCourtyard;                                        // 0x02B8 (size: 0x8)
    class AActor* Prisoner02_POS;                                                     // 0x02C0 (size: 0x8)
    class ASeq_DroidCourtYard_C* SEQ_Courtyard;                                       // 0x02C8 (size: 0x8)
    class ABP_Droid_C* Clementine;                                                    // 0x02D0 (size: 0x8)
    class ABP_SplineRail_C* Rail_Banc_Crouch;                                         // 0x02D8 (size: 0x8)
    class ABP_SplineRail_C* Rail_Banc_StandUp;                                        // 0x02E0 (size: 0x8)
    class ABP_Droid_C* Prisoner03;                                                    // 0x02E8 (size: 0x8)
    class AActor* Prisoner03_POS;                                                     // 0x02F0 (size: 0x8)
    class ADial_JailNPC2_C* Prisoner01_Dial;                                          // 0x02F8 (size: 0x8)
    class ADial_JailNPC4_C* Prisoner02_Dial;                                          // 0x0300 (size: 0x8)
    class ADial_JailNPC1_C* Prisoner03_Dial;                                          // 0x0308 (size: 0x8)

    void OnStartSequence();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Seq_DroidPrisonersInCourtYard(int32 EntryPoint);
}; // Size: 0x310

#endif
