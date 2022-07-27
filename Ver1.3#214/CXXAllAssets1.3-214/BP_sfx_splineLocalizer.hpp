#ifndef UE4SS_SDK_BP_sfx_splineLocalizer_HPP
#define UE4SS_SDK_BP_sfx_splineLocalizer_HPP

class ABP_sfx_splineLocalizer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class USoundBase* sound base;                                                     // 0x0250 (size: 0x8)
    TArray<FVector> Points;                                                           // 0x0258 (size: 0x10)
    FVector smoothClosestPoint;                                                       // 0x0268 (size: 0xC)
    bool seePointsIngame;                                                             // 0x0274 (size: 0x1)
    float Gain;                                                                       // 0x0278 (size: 0x4)
    float Pitch;                                                                      // 0x027C (size: 0x4)
    bool random offset;                                                               // 0x0280 (size: 0x1)
    int32 frames elapsed;                                                             // 0x0284 (size: 0x4)
    bool Play sound;                                                                  // 0x0288 (size: 0x1)
    class USoundAttenuation* Attenuation;                                             // 0x0290 (size: 0x8)
    class AActor* fitToThis;                                                          // 0x0298 (size: 0x8)
    FVector location offset;                                                          // 0x02A0 (size: 0xC)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_sfx_splineLocalizer(int32 EntryPoint);
}; // Size: 0x2AC

#endif
