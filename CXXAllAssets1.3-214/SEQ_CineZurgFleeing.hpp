#ifndef UE4SS_SDK_SEQ_CineZurgFleeing_HPP
#define UE4SS_SDK_SEQ_CineZurgFleeing_HPP

class ASEQ_CineZurgFleeing_C : public ABP_SequenceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    TArray<class ABP_ZurgPawn_Leader_C*> Zurgs;                                       // 0x0278 (size: 0x10)
    class AActor* AttackTarget;                                                       // 0x0288 (size: 0x8)
    class AActor* NoisePos;                                                           // 0x0290 (size: 0x8)
    class AActor* Light;                                                              // 0x0298 (size: 0x8)
    class ACameraActor* Cam;                                                          // 0x02A0 (size: 0x8)
    class ABP_ZurgPawn_Leader_C* ZurgsMass;                                           // 0x02A8 (size: 0x8)
    class AActor* LightTargetPos;                                                     // 0x02B0 (size: 0x8)
    FTransform InitLightPos;                                                          // 0x02C0 (size: 0x30)

    void Complete_6246EF4646E19036986D72BA599AD48E();
    void Tick_6246EF4646E19036986D72BA599AD48E(float Ratio);
    void OnStartSequence();
    void LogicTrigger();
    void ExecuteUbergraph_SEQ_CineZurgFleeing(int32 EntryPoint);
}; // Size: 0x2F0

#endif
