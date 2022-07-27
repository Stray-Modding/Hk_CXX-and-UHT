#ifndef UE4SS_SDK_TriggerZone_PlayCatCustomAnimation_HPP
#define UE4SS_SDK_TriggerZone_PlayCatCustomAnimation_HPP

class ATriggerZone_PlayCatCustomAnimation_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UAudioComponent* PS5Vibration;                                              // 0x0238 (size: 0x8)
    float delayBeforeTriggered;                                                       // 0x0240 (size: 0x4)
    class UAnimSequence* Custom Animation;                                            // 0x0248 (size: 0x8)
    class USoundBase* Sound;                                                          // 0x0250 (size: 0x8)
    bool DoOnce?;                                                                     // 0x0258 (size: 0x1)
    FRotator AlignDirection;                                                          // 0x025C (size: 0xC)
    class AActor* actorDroid;                                                         // 0x0268 (size: 0x8)
    FRotator CatRotator;                                                              // 0x0270 (size: 0xC)
    bool Finish;                                                                      // 0x027C (size: 0x1)
    class ABP_CatPawn_C* cat;                                                         // 0x0280 (size: 0x8)
    float AnimationDuration;                                                          // 0x0288 (size: 0x4)

    void Complete_6246EF4646E19036986D72BAB4C490EC();
    void Tick_6246EF4646E19036986D72BAB4C490EC(float Ratio);
    void Complete_6246EF4646E19036986D72BA6D6001E1();
    void Tick_6246EF4646E19036986D72BA6D6001E1(float Ratio);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void LogicTrigger();
    void ExecuteUbergraph_TriggerZone_PlayCatCustomAnimation(int32 EntryPoint);
}; // Size: 0x28C

#endif
