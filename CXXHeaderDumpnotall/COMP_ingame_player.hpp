#ifndef UE4SS_SDK_COMP_ingame_player_HPP
#define UE4SS_SDK_COMP_ingame_player_HPP

class UCOMP_ingame_player_C : public UAudioHolder
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 Channel;
    TArray<class USoundBase*> Playlist;
    bool playAtStart;
    float Pitch;
    float pitch_target;
    float CurrentTime;
    class UAudioComponent* audio track;
    float gap between tracks;
    class USoundBase* sfx on;
    class USoundBase* sfx next;
    class USoundBase* sfx off;
    class USoundBase* sfx off released;
    class USoundBase* sfx burst;
    bool tape stop;
    bool tape stop between each track;
    bool is playing;
    float Gain;
    float totalSpaceValue;
    class USoundEffectSourcePresetChain* SourceEffectChain;
    float autoSwitchEvery;
    float timeSinceTrackSwitch;
    class USoundAttenuation* Attenuation;
    TArray<FF_sfx_zone_type> zones modifiers;
    bool wasCatInside;
    int32 number of tries to find channel;
    bool use radio filter;
    float gainWhenDucked;
    class UAudioComponent* audio burst;
    float autostart distance;
    bool is audible (distance);
    bool is audible (zones);
    class ABP_AudioManager_C* AudioManager;
    bool recheck zones;
    float ActiveTickInterval;
    float InactiveTickInterval;
    class UAudioComponent* audio next;

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
};

#endif
