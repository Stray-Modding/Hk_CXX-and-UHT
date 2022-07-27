#ifndef UE4SS_SDK_SEQ_BossEyeManager_HPP
#define UE4SS_SDK_SEQ_BossEyeManager_HPP

class ASEQ_BossEyeManager_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    float DelayBetweenWaves;                                                          // 0x0270 (size: 0x4)
    bool Active;                                                                      // 0x0274 (size: 0x1)
    bool RemoveEyes;                                                                  // 0x0275 (size: 0x1)
    bool FirstTriggerDone;                                                            // 0x0276 (size: 0x1)

    void LogicTrigger();
    void UpdateEyes(TEnumAsByte<ENUM_ZurgBoss_State> State);
    void SpawnWave();
    void ShakeOnly();
    void BndEvt__m_streamingComponent_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_SEQ_BossEyeManager(int32 EntryPoint);
}; // Size: 0x277

#endif
