#ifndef UE4SS_SDK_Seq_BarkPiloter_HPP
#define UE4SS_SDK_Seq_BarkPiloter_HPP

class ASeq_BarkPiloter_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_SewerBark_C* sewerbark;                                                 // 0x0270 (size: 0x8)
    class AActor* TargetInFrontOfGrid;                                                // 0x0278 (size: 0x8)
    class AActor* SecondTargetAfterGrid;                                              // 0x0280 (size: 0x8)
    class AActor* ThirdTargetFrontDoor;                                               // 0x0288 (size: 0x8)
    bool GridOpen;                                                                    // 0x0290 (size: 0x1)
    bool StartBarkTriggered;                                                          // 0x0291 (size: 0x1)
    class AActor* TargetCoast;                                                        // 0x0298 (size: 0x8)
    class ASEQ_MomoMainDoor_C* seq momo main door;                                    // 0x02A0 (size: 0x8)
    class AActor* TargetBeforeGridApproach;                                           // 0x02A8 (size: 0x8)
    class ABP_Droid_C* Momo;                                                          // 0x02B0 (size: 0x8)

    void LogicTrigger();
    void OnStartSequence();
    void OnStartFromCheckpoint();
    void StartBoat();
    void ExecuteUbergraph_Seq_BarkPiloter(int32 EntryPoint);
}; // Size: 0x2B8

#endif
