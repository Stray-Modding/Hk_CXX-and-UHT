#ifndef UE4SS_SDK_LevelScript_SlumsPart2_Global_HPP
#define UE4SS_SDK_LevelScript_SlumsPart2_Global_HPP

class ALevelScript_SlumsPart2_Global_C : public ALevelScript
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ASeq_DEMO_SLUM_INTRO_C* Seq Demo Slum Intro;                                // 0x0248 (size: 0x8)
    TArray<class ATriggerZone_C*> TriggerZonesToDeactivate;                           // 0x0250 (size: 0x10)
    class ASeq_Slum_Meet_Guardian_C* seq slum meet guardian;                          // 0x0260 (size: 0x8)
    class ADial_Guardian_C* dial guardian;                                            // 0x0268 (size: 0x8)
    TArray<class ABP_Droid_C*> DroidsTodeactivate;                                    // 0x0270 (size: 0x10)
    class ABP_Droid_C* DroidChief;                                                    // 0x0280 (size: 0x8)
    TArray<class AActor*> ActorsToDestroy;                                            // 0x0288 (size: 0x10)
    class ASeq_Cycle_Base_C* Seq_WalkCycle_1;                                         // 0x0298 (size: 0x8)
    class ASeq_BucketThrower_C* Seq_BucketThrower;                                    // 0x02A0 (size: 0x8)
    class ADial_Grandma_C* Dial_Grandma;                                              // 0x02A8 (size: 0x8)
    class ADial_Elliot_C* Dial_Elliot;                                                // 0x02B0 (size: 0x8)
    bool SlumsPart1SetUpDone;                                                         // 0x02B8 (size: 0x1)
    bool SlumsPart2SetUpDone;                                                         // 0x02B9 (size: 0x1)
    bool SlumsPart3SetUpDone;                                                         // 0x02BA (size: 0x1)
    class ADial_Droid_LookAtSky_C* Dial_Droid_LookAtSky;                              // 0x02C0 (size: 0x8)
    class ASeq_Roberto_BAR_C* Seq_Roberto_BAR;                                        // 0x02C8 (size: 0x8)
    class AActor* PosGuardianSlums2;                                                  // 0x02D0 (size: 0x8)
    class AActor* Detergent;                                                          // 0x02D8 (size: 0x8)
    class ABP_CatButton_FrottableDroid_C* FrottableGuardian;                          // 0x02E0 (size: 0x8)

    void OnInitialise(EChapter _chapter);
    void SetUpSlumsPart3();
    void ExecuteUbergraph_LevelScript_SlumsPart2_Global(int32 EntryPoint);
}; // Size: 0x2E8

#endif
