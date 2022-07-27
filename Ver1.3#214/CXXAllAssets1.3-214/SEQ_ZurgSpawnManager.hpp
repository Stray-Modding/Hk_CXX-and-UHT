#ifndef UE4SS_SDK_SEQ_ZurgSpawnManager_HPP
#define UE4SS_SDK_SEQ_ZurgSpawnManager_HPP

class ASEQ_ZurgSpawnManager_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Activate;                                                                    // 0x0270 (size: 0x1)
    bool loop;                                                                        // 0x0271 (size: 0x1)
    int32 WaveIndex;                                                                  // 0x0274 (size: 0x4)
    float Timer;                                                                      // 0x0278 (size: 0x4)
    bool Spawn;                                                                       // 0x027C (size: 0x1)
    FZurgSpawnParams ZurgSpawnParams;                                                 // 0x0280 (size: 0x38)
    int32 SpawnRefillCount;                                                           // 0x02B8 (size: 0x4)
    bool Debug display;                                                               // 0x02BC (size: 0x1)
    float Offset;                                                                     // 0x02C0 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x02C8 (size: 0x8)
    bool Refill;                                                                      // 0x02D0 (size: 0x1)
    int32 SpawnRefill;                                                                // 0x02D4 (size: 0x4)
    int32 SpawnTotalCount;                                                            // 0x02D8 (size: 0x4)
    int32 SpawnCount;                                                                 // 0x02DC (size: 0x4)
    class AActor* TargetToChase;                                                      // 0x02E0 (size: 0x8)
    bool Stop;                                                                        // 0x02E8 (size: 0x1)

    void GetZurgsRemainAfterRefill(bool& Refill IS Finished, int32& Get Zurgs Count);
    void IsCatAttacked(class ABP_CatPawn_C* Cat Pawn, int32 Zurg Count, bool& Attacked);
    void SelectSpawnPoint();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SEQ_ZurgWavesSpawner_m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void StartSpawn();
    void StopSpawn();
    void Debug();
    void DestroyZurgs();
    void ExecuteUbergraph_SEQ_ZurgSpawnManager(int32 EntryPoint);
}; // Size: 0x2E9

#endif
