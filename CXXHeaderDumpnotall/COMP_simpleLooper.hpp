#ifndef UE4SS_SDK_COMP_simpleLooper_HPP
#define UE4SS_SDK_COMP_simpleLooper_HPP

class UCOMP_simpleLooper_C : public UAudioHolder
{
    class USoundBase* sound base;
    bool random offset;
    float gain min;
    float gain max;
    float pitch min;
    float pitch max;
    bool play at start;
    bool internal virtual state;
    bool is audible;
    bool actual state;
    class USoundAttenuation* Attenuation;
    FVector relative location;
    float autostart distance;
    float fade time;
    class UAudioComponent* Audio;
    bool Debug;
    bool Temp_bool_Variable;
    FCOMP_simpleLooper_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate;
    void TimerDynamicDelegate();
    float K2Node_CustomEvent_duration;
    float K2Node_CustomEvent_pitch;
    float K2Node_CustomEvent_gain;
    float CallFunc_HashRandom_float;
    int32 CallFunc_HashRandom_int;
    float CallFunc_HashRandom_float_1;
    int32 CallFunc_HashRandom_int_1;
    float CallFunc_HashRandom_float_2;
    int32 CallFunc_HashRandom_int_2;
    float Temp_float_Variable;
    float CallFunc_HashRandom_float_3;
    int32 CallFunc_HashRandom_int_3;
    bool Temp_bool_Variable_1;
    float Temp_float_Variable_1;
    float K2Node_Select_Default;
    float K2Node_CustomEvent_fade_time;
    class USoundBase* K2Node_CustomEvent_base;
    float CallFunc_BreakVector_X;
    float CallFunc_BreakVector_Y;
    float CallFunc_BreakVector_Z;
    bool K2Node_SwitchEnum_CmpSuccess;
    class AActor* K2Node_Event__otherActor_1;
    class AActor* K2Node_Event__otherActor;
    float K2Node_Select_Default_1;

    void update autostart distance();
    void Stop (Public)();
    void set pitch(float bpp__pitch__pf);
    void set gain(float bpp__gain__pf);
    void set base (public)(class USoundBase* bpp__base__pf);
    void RequestSetCollisionEnabled(bool bpp__enabled__pf);
    void ReceiveBeginPlay();
    void Play (Public)();
    void OnHolderEndOverlapCamera(class AActor* bpp___otherActor__pf);
    void OnHolderBeginOverlapCamera(class AActor* bpp___otherActor__pf);
    void IsAudible(bool& bpp__IsAudible__pf);
    void IsActuallyPlaying(bool& bpp__ActualState__pf);
    void init sound();
    void Fade Out (Public)(float bpp__duration__pf);
    void Fade In (Public)(float bpp__fadextime__pfT);
    void DrawDebug();
    void Confront Virtual and Actual States();
};

#endif
