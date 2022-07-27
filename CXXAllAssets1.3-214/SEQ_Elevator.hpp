#ifndef UE4SS_SDK_SEQ_Elevator_HPP
#define UE4SS_SDK_SEQ_Elevator_HPP

class ASEQ_Elevator_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> Zurgs;                                       // 0x0270 (size: 0x10)
    bool Activate;                                                                    // 0x0280 (size: 0x1)
    class AActor* camera_Plan1;                                                       // 0x0288 (size: 0x8)
    class AActor* camera_Plan2;                                                       // 0x0290 (size: 0x8)
    class ABP_ElevatorRoofTop_C* Elevator;                                            // 0x0298 (size: 0x8)
    class ASEQ_ElevatorDoors_C* Elevator_Doors;                                       // 0x02A0 (size: 0x8)
    int32 ZurgsCount;                                                                 // 0x02A8 (size: 0x4)
    int32 ZurgsPerSpawner;                                                            // 0x02AC (size: 0x4)
    int32 CurrentZurgsCount;                                                          // 0x02B0 (size: 0x4)
    TArray<int32> ZurgCountWave;                                                      // 0x02B8 (size: 0x10)
    bool CatIsNearTheElevator;                                                        // 0x02C8 (size: 0x1)
    class AActor* CatTP;                                                              // 0x02D0 (size: 0x8)
    int32 wave;                                                                       // 0x02D8 (size: 0x4)
    bool Finished;                                                                    // 0x02DC (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x02E0 (size: 0x8)
    TArray<class ABP_Zurg_KillZone_C*> ZurgKillZone;                                  // 0x02E8 (size: 0x10)
    float RefillTimer;                                                                // 0x02F8 (size: 0x4)
    float Delta Seconds;                                                              // 0x02FC (size: 0x4)
    float ResetRefillTime;                                                            // 0x0300 (size: 0x4)

    void ReceiveBeginPlay();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SEQ_Elevator_m_streamingComponent_K2Node_ComponentBoundEvent_2_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_Elevator(int32 EntryPoint);
}; // Size: 0x304

#endif
