#ifndef UE4SS_SDK_COMP_ingame_player_HPP
#define UE4SS_SDK_COMP_ingame_player_HPP

class UCOMP_ingame_player_C : public UAudioHolder
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    int32 Channel;                                                                    // 0x0228 (size: 0x4)
    TArray<class USoundBase*> Playlist;                                               // 0x0230 (size: 0x10)
    bool playAtStart;                                                                 // 0x0240 (size: 0x1)
    float Pitch;                                                                      // 0x0244 (size: 0x4)
    float pitch_target;                                                               // 0x0248 (size: 0x4)
    float CurrentTime;                                                                // 0x024C (size: 0x4)
    class UAudioComponent* audio track;                                               // 0x0250 (size: 0x8)
    float gap between tracks;                                                         // 0x0258 (size: 0x4)
    class USoundBase* sfx on;                                                         // 0x0260 (size: 0x8)
    class USoundBase* sfx next;                                                       // 0x0268 (size: 0x8)
    class USoundBase* sfx off;                                                        // 0x0270 (size: 0x8)
    class USoundBase* sfx off released;                                               // 0x0278 (size: 0x8)
    class USoundBase* sfx burst;                                                      // 0x0280 (size: 0x8)
    bool tape stop;                                                                   // 0x0288 (size: 0x1)
    bool tape stop between each track;                                                // 0x0289 (size: 0x1)
    bool is playing;                                                                  // 0x028A (size: 0x1)
    float Gain;                                                                       // 0x028C (size: 0x4)
    float totalSpaceValue;                                                            // 0x0290 (size: 0x4)
    class USoundEffectSourcePresetChain* SourceEffectChain;                           // 0x0298 (size: 0x8)
    float autoSwitchEvery;                                                            // 0x02A0 (size: 0x4)
    float timeSinceTrackSwitch;                                                       // 0x02A4 (size: 0x4)
    class USoundAttenuation* Attenuation;                                             // 0x02A8 (size: 0x8)
    TArray<FF_sfx_zone_type> zones modifiers;                                         // 0x02B0 (size: 0x10)
    bool wasCatInside;                                                                // 0x02C0 (size: 0x1)
    int32 number of tries to find channel;                                            // 0x02C4 (size: 0x4)
    bool use radio filter;                                                            // 0x02C8 (size: 0x1)
    float gainWhenDucked;                                                             // 0x02CC (size: 0x4)
    class UAudioComponent* audio burst;                                               // 0x02D0 (size: 0x8)
    float autostart distance;                                                         // 0x02D8 (size: 0x4)
    bool is audible (distance);                                                       // 0x02DC (size: 0x1)
    bool is audible (zones);                                                          // 0x02DD (size: 0x1)
    class ABP_AudioManager_C* AudioManager;                                           // 0x02E0 (size: 0x8)
    bool recheck zones;                                                               // 0x02E8 (size: 0x1)
    float ActiveTickInterval;                                                         // 0x02EC (size: 0x4)
    float InactiveTickInterval;                                                       // 0x02F0 (size: 0x4)
    class UAudioComponent* audio next;                                                // 0x02F8 (size: 0x8)

    void get current time(float& current time);
    void Player_play();
    void Player_stop();
    void push button();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void triggerSwitch(bool allowStop);
    void OnHolderBeginOverlapCamera(class AActor* _otherActor);
    void OnHolderEndOverlapCamera(class AActor* _otherActor);
    void update autostart distance();
    void Confront Virtual and Actual States();
    void Switch channel();
    void set current time(float CurrentTime);
    void notify change();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_COMP_ingame_player(int32 EntryPoint);
}; // Size: 0x300

#endif
