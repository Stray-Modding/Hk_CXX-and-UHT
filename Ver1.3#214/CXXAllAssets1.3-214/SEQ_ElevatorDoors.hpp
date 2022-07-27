#ifndef UE4SS_SDK_SEQ_ElevatorDoors_HPP
#define UE4SS_SDK_SEQ_ElevatorDoors_HPP

class ASEQ_ElevatorDoors_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    class ABP_ElevatorRoofTop_C* Elevator;                                            // 0x0278 (size: 0x8)
    class AActor* Door1;                                                              // 0x0280 (size: 0x8)
    class AActor* Door2;                                                              // 0x0288 (size: 0x8)
    float Time;                                                                       // 0x0290 (size: 0x4)
    float Speed;                                                                      // 0x0294 (size: 0x4)
    FVector InitLocation;                                                             // 0x0298 (size: 0xC)
    FVector InitLocation_2;                                                           // 0x02A4 (size: 0xC)
    bool OpenDoor;                                                                    // 0x02B0 (size: 0x1)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void OnStartSequence();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_ElevatorDoors(int32 EntryPoint);
}; // Size: 0x2B1

#endif
