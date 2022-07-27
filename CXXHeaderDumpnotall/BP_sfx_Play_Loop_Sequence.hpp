#ifndef UE4SS_SDK_BP_sfx_Play_Loop_Sequence_HPP
#define UE4SS_SDK_BP_sfx_Play_Loop_Sequence_HPP

class ABP_sfx_Play_Loop_Sequence_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class AActor* Parent actor;
    class USoundBase* StartWave;
    class USoundBase* LoopWave;
    class USoundBase* StopWave;
    float global gain;
    float global pitch;
    float startToLoopTime;
    float attackDuration;
    float releaseDuration;
    bool randomOffset;
    float timeSinceStart;
    class UAudioComponent* StartComponent;
    class UAudioComponent* LoopComponent;
    class UAudioComponent* StopComponent;
    bool mute;
    TEnumAsByte<E_sfx_loop_sequence_state> loop state;
    bool Debug;
    FString custom name;

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
};

#endif
