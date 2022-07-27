#ifndef UE4SS_SDK_BP_sfx_synchronizer_HPP
#define UE4SS_SDK_BP_sfx_synchronizer_HPP

class ABP_sfx_synchronizer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Time;
    TArray<class ABP_sfx_single_player_C*> players;
    float Timer;
    bool somethingCurrentlyPlaying;
    class UAudioComponent* NewVar_0;
    float lastFrameTime;
    FString Name;
    bool has started yet;
    float true delta time;
    bool Debug;
    float syncTimeLimit;
    bool hasSkipped;
    float StartTime;
    float lastTime;
    float nextTime;
    int32 ClickCount;

    void ReceiveTick(float DeltaSeconds);
    void AddReference(const class ABP_sfx_single_player_C* sfxSinglePlay);
    void game_over();
    void informStart();
    void resyncTimers();
    void ExecuteUbergraph_BP_sfx_synchronizer(int32 EntryPoint);
};

#endif
