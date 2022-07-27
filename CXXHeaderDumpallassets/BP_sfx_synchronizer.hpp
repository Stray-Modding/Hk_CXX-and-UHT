#ifndef UE4SS_SDK_BP_sfx_synchronizer_HPP
#define UE4SS_SDK_BP_sfx_synchronizer_HPP

class ABP_sfx_synchronizer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Time;                                                                       // 0x0238 (size: 0x4)
    TArray<class ABP_sfx_single_player_C*> players;                                   // 0x0240 (size: 0x10)
    float Timer;                                                                      // 0x0250 (size: 0x4)
    bool somethingCurrentlyPlaying;                                                   // 0x0254 (size: 0x1)
    class UAudioComponent* NewVar_0;                                                  // 0x0258 (size: 0x8)
    float lastFrameTime;                                                              // 0x0260 (size: 0x4)
    FString Name;                                                                     // 0x0268 (size: 0x10)
    bool has started yet;                                                             // 0x0278 (size: 0x1)
    float true delta time;                                                            // 0x027C (size: 0x4)
    bool Debug;                                                                       // 0x0280 (size: 0x1)
    float syncTimeLimit;                                                              // 0x0284 (size: 0x4)
    bool hasSkipped;                                                                  // 0x0288 (size: 0x1)
    float StartTime;                                                                  // 0x028C (size: 0x4)
    float lastTime;                                                                   // 0x0290 (size: 0x4)
    float nextTime;                                                                   // 0x0294 (size: 0x4)
    int32 ClickCount;                                                                 // 0x0298 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void AddReference(const class ABP_sfx_single_player_C* sfxSinglePlay);
    void game_over();
    void informStart();
    void resyncTimers();
    void ExecuteUbergraph_BP_sfx_synchronizer(int32 EntryPoint);
}; // Size: 0x29C

#endif
