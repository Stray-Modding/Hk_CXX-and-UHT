#ifndef UE4SS_SDK_SEQ_GoToEnding_HPP
#define UE4SS_SDK_SEQ_GoToEnding_HPP

class ASEQ_GoToEnding_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class AActor* camera_Plan1;                                                       // 0x0270 (size: 0x8)
    class AActor* camera_Plan2;                                                       // 0x0278 (size: 0x8)
    class AActor* Camera_Plan3;                                                       // 0x0280 (size: 0x8)
    class ABP_DoorSubwayToEnding_C* DoorSubway;                                       // 0x0288 (size: 0x8)
    class ABP_Wagon_C* Metro;                                                         // 0x0290 (size: 0x8)
    float Speed;                                                                      // 0x0298 (size: 0x4)
    bool Start_Metro;                                                                 // 0x029C (size: 0x1)
    class AActor* TP_CatInMetro;                                                      // 0x02A0 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_GoToEnding(int32 EntryPoint);
}; // Size: 0x2B0

#endif
