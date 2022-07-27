#ifndef UE4SS_SDK_COMP_simpleLooper_HPP
#define UE4SS_SDK_COMP_simpleLooper_HPP

class UCOMP_simpleLooper_C : public UAudioHolder
{
    class USoundBase* sound base;                                                     // 0x0220 (size: 0x8)
    bool random offset;                                                               // 0x0228 (size: 0x1)
    float gain min;                                                                   // 0x022C (size: 0x4)
    float gain max;                                                                   // 0x0230 (size: 0x4)
    float pitch min;                                                                  // 0x0234 (size: 0x4)
    float pitch max;                                                                  // 0x0238 (size: 0x4)
    bool play at start;                                                               // 0x023C (size: 0x1)
    bool internal virtual state;                                                      // 0x023D (size: 0x1)
    bool is audible;                                                                  // 0x023E (size: 0x1)
    bool actual state;                                                                // 0x023F (size: 0x1)
    class USoundAttenuation* Attenuation;                                             // 0x0240 (size: 0x8)
    FVector relative location;                                                        // 0x0248 (size: 0xC)
    float autostart distance;                                                         // 0x0254 (size: 0x4)
    float fade time;                                                                  // 0x0258 (size: 0x4)
    class UAudioComponent* Audio;                                                     // 0x0260 (size: 0x8)
    bool Debug;                                                                       // 0x0268 (size: 0x1)
    bool Temp_bool_Variable;                                                          // 0x0269 (size: 0x1)
    FCOMP_simpleLooper_CK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate; // 0x026C (size: 0x10)
    void TimerDynamicDelegate();
    float K2Node_CustomEvent_duration;                                                // 0x027C (size: 0x4)
    float K2Node_CustomEvent_pitch;                                                   // 0x0280 (size: 0x4)
    float K2Node_CustomEvent_gain;                                                    // 0x0284 (size: 0x4)
    float CallFunc_HashRandom_float;                                                  // 0x0288 (size: 0x4)
    int32 CallFunc_HashRandom_int;                                                    // 0x028C (size: 0x4)
    float CallFunc_HashRandom_float_1;                                                // 0x0290 (size: 0x4)
    int32 CallFunc_HashRandom_int_1;                                                  // 0x0294 (size: 0x4)
    float CallFunc_HashRandom_float_2;                                                // 0x0298 (size: 0x4)
    int32 CallFunc_HashRandom_int_2;                                                  // 0x029C (size: 0x4)
    float Temp_float_Variable;                                                        // 0x02A0 (size: 0x4)
    float CallFunc_HashRandom_float_3;                                                // 0x02A4 (size: 0x4)
    int32 CallFunc_HashRandom_int_3;                                                  // 0x02A8 (size: 0x4)
    bool Temp_bool_Variable_1;                                                        // 0x02AC (size: 0x1)
    float Temp_float_Variable_1;                                                      // 0x02B0 (size: 0x4)
    float K2Node_Select_Default;                                                      // 0x02B4 (size: 0x4)
    float K2Node_CustomEvent_fade_time;                                               // 0x02B8 (size: 0x4)
    class USoundBase* K2Node_CustomEvent_base;                                        // 0x02C0 (size: 0x8)
    float CallFunc_BreakVector_X;                                                     // 0x02C8 (size: 0x4)
    float CallFunc_BreakVector_Y;                                                     // 0x02CC (size: 0x4)
    float CallFunc_BreakVector_Z;                                                     // 0x02D0 (size: 0x4)
    bool K2Node_SwitchEnum_CmpSuccess;                                                // 0x02D4 (size: 0x1)
    class AActor* K2Node_Event__otherActor_1;                                         // 0x02D8 (size: 0x8)
    class AActor* K2Node_Event__otherActor;                                           // 0x02E0 (size: 0x8)
    float K2Node_Select_Default_1;                                                    // 0x02E8 (size: 0x4)

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
}; // Size: 0x2F0

#endif
