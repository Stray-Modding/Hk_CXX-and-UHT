#ifndef UE4SS_SDK_SEQ_LightOff_HPP
#define UE4SS_SDK_SEQ_LightOff_HPP

class ASEQ_LightOff_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    TArray<class ABP_base_LightRealTime_C*> Lights;                                   // 0x0270 (size: 0x10)
    class APointLight* PointLight;                                                    // 0x0280 (size: 0x8)
    TArray<class ABP_LaserBeam_C*> LaserBeam Entrance;                                // 0x0288 (size: 0x10)
    TArray<class ABP_LaserBeam_C*> LaserBeam Exit;                                    // 0x0298 (size: 0x10)
    bool Start;                                                                       // 0x02A8 (size: 0x1)
    TArray<class AActor*> alarms sound;                                               // 0x02B0 (size: 0x10)
    TArray<class ABP_SentinelAI_C*> SentinelsToDisarm;                                // 0x02C0 (size: 0x10)

    void LogicTrigger();
    void OnStartSequence();
    void ExecuteUbergraph_SEQ_LightOff(int32 EntryPoint);
}; // Size: 0x2D0

#endif
