#ifndef UE4SS_SDK_Seq_StreetSweeper_HPP
#define UE4SS_SDK_Seq_StreetSweeper_HPP

class ASeq_StreetSweeper_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool StartEnabled;                                                                // 0x0270 (size: 0x1)
    class ABP_Droid_C* Droid;                                                         // 0x0278 (size: 0x8)
    class ADIAL_RobotStreetSweeper_C* Dial_Sweeper;                                   // 0x0280 (size: 0x8)
    class UAnimSequence* Idle Anim;                                                   // 0x0288 (size: 0x8)
    class AActor* Look At Data Actor;                                                 // 0x0290 (size: 0x8)
    class AActor* Position_1;                                                         // 0x0298 (size: 0x8)
    float StopDelay_1;                                                                // 0x02A0 (size: 0x4)
    class AActor* Position2;                                                          // 0x02A8 (size: 0x8)
    float StopDelay_2;                                                                // 0x02B0 (size: 0x4)
    class AActor* Position3;                                                          // 0x02B8 (size: 0x8)
    float StopDelay_3;                                                                // 0x02C0 (size: 0x4)
    class AActor* BroomLoop;                                                          // 0x02C8 (size: 0x8)
    class AActor* BroomBreak;                                                         // 0x02D0 (size: 0x8)

    void Stop sweep loop();
    void OnStartSequence();
    void Look at club();
    void Sweep Loop();
    void ExecuteUbergraph_Seq_StreetSweeper(int32 EntryPoint);
}; // Size: 0x2D8

#endif
