#ifndef UE4SS_SDK_BP_sfx_actorId_pinger_HPP
#define UE4SS_SDK_BP_sfx_actorId_pinger_HPP

class ABP_sfx_actorId_pinger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FName actorId trig;                                                               // 0x0238 (size: 0x8)
    float Delay;                                                                      // 0x0240 (size: 0x4)
    float fade out all music;                                                         // 0x0244 (size: 0x4)

    void Start(FName ActorId);
    void LogicTrigger();
    void ExecuteUbergraph_BP_sfx_actorId_pinger(int32 EntryPoint);
}; // Size: 0x248

#endif
