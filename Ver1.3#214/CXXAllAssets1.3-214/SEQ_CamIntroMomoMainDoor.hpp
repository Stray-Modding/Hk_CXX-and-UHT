#ifndef UE4SS_SDK_SEQ_CamIntroMomoMainDoor_HPP
#define UE4SS_SDK_SEQ_CamIntroMomoMainDoor_HPP

class ASEQ_CamIntroMomoMainDoor_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ALevelSequenceActor* OpenEcluse_Seq;                                        // 0x0270 (size: 0x8)
    class ACameraActor* OutCam;                                                       // 0x0278 (size: 0x8)
    class AActor* Momo;                                                               // 0x0280 (size: 0x8)
    class AActor* Stick;                                                              // 0x0288 (size: 0x8)
    class AActor* Bark;                                                               // 0x0290 (size: 0x8)
    class AActor* CatPositionCine;                                                    // 0x0298 (size: 0x8)
    class ABP_Droid_C* CineMomo;                                                      // 0x02A0 (size: 0x8)
    class ABP_Droid_C* MomoBP;                                                        // 0x02A8 (size: 0x8)
    class AActor* CamOrient_EndCine;                                                  // 0x02B0 (size: 0x8)
    class AActor* End Cine Pos Cat;                                                   // 0x02B8 (size: 0x8)

    void LogicTrigger();
    void ExecuteUbergraph_SEQ_CamIntroMomoMainDoor(int32 EntryPoint);
}; // Size: 0x2C0

#endif
