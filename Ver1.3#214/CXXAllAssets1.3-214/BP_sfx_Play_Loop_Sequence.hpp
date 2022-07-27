#ifndef UE4SS_SDK_BP_sfx_Play_Loop_Sequence_HPP
#define UE4SS_SDK_BP_sfx_Play_Loop_Sequence_HPP

class ABP_sfx_Play_Loop_Sequence_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class AActor* Parent actor;                                                       // 0x0238 (size: 0x8)
    class USoundBase* StartWave;                                                      // 0x0240 (size: 0x8)
    class USoundBase* LoopWave;                                                       // 0x0248 (size: 0x8)
    class USoundBase* StopWave;                                                       // 0x0250 (size: 0x8)
    float global gain;                                                                // 0x0258 (size: 0x4)
    float global pitch;                                                               // 0x025C (size: 0x4)
    float startToLoopTime;                                                            // 0x0260 (size: 0x4)
    float attackDuration;                                                             // 0x0264 (size: 0x4)
    float releaseDuration;                                                            // 0x0268 (size: 0x4)
    bool randomOffset;                                                                // 0x026C (size: 0x1)
    float timeSinceStart;                                                             // 0x0270 (size: 0x4)
    class UAudioComponent* StartComponent;                                            // 0x0278 (size: 0x8)
    class UAudioComponent* LoopComponent;                                             // 0x0280 (size: 0x8)
    class UAudioComponent* StopComponent;                                             // 0x0288 (size: 0x8)
    bool mute;                                                                        // 0x0290 (size: 0x1)
    TEnumAsByte<E_sfx_loop_sequence_state> loop state;                                // 0x0291 (size: 0x1)
    bool Debug;                                                                       // 0x0292 (size: 0x1)
    FString custom name;                                                              // 0x0298 (size: 0x10)

    void Init(class AActor* Parent actor, class USoundBase* Start, class USoundBase* loop, class USoundBase* Stop, float Gain, float Pitch, float start/loop overlap, float attack dur, float release dur, bool random loop offset, bool Debug, FString custom name, bool bind destroy to parent destroy);
    void Start();
    void Stop();
    void Destroy();
    void ReceiveTick(float DeltaSeconds);
    void ToState1();
    void ToState 2();
    void ToState3();
    void ToState4();
    void PlayStart(private)();
    void PlayLoop(private)();
    void PlayStop(private)();
    void FadeOutLoop(private)();
    void Update Pitch(float Pitch);
    void UpdateGain(float Gain);
    void UpdateParent(class AActor* Parent actor, bool bind destroy to parent destroy);
    void loopFinished();
    void Spawn loop (private)();
    void parentDestroyed(class AActor* DestroyedActor);
    void ExecuteUbergraph_BP_sfx_Play_Loop_Sequence(int32 EntryPoint);
}; // Size: 0x2A8

#endif
