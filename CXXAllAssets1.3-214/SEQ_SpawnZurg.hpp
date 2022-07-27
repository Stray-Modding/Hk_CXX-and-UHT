#ifndef UE4SS_SDK_SEQ_SpawnZurg_HPP
#define UE4SS_SDK_SEQ_SpawnZurg_HPP

class ASEQ_SpawnZurg_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* Zurg;                                                // 0x0270 (size: 0x8)
    int32 SpawnCount;                                                                 // 0x0278 (size: 0x4)
    float SpawnRadius;                                                                // 0x027C (size: 0x4)
    float DelayBeforeSpawn;                                                           // 0x0280 (size: 0x4)
    bool Activate;                                                                    // 0x0284 (size: 0x1)
    float Timer;                                                                      // 0x0288 (size: 0x4)

    void LogicTrigger();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SEQ_SpawnZurg(int32 EntryPoint);
}; // Size: 0x28C

#endif
