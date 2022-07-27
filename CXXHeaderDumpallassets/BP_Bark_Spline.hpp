#ifndef UE4SS_SDK_BP_Bark_Spline_HPP
#define UE4SS_SDK_BP_Bark_Spline_HPP

class ABP_Bark_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class ABP_Droid_C* Smuggler;                                                      // 0x0248 (size: 0x8)
    class AActor* Actor_to_Move;                                                      // 0x0250 (size: 0x8)
    TArray<class AActor*> SpeedModifier;                                              // 0x0258 (size: 0x10)
    float Time;                                                                       // 0x0268 (size: 0x4)
    float Speed;                                                                      // 0x026C (size: 0x4)
    bool On/Off;                                                                      // 0x0270 (size: 0x1)
    bool Rotation_?;                                                                  // 0x0271 (size: 0x1)
    float Base_Yaw;                                                                   // 0x0274 (size: 0x4)
    float Smooth Rotation ;                                                           // 0x0278 (size: 0x4)
    float Smooth Location;                                                            // 0x027C (size: 0x4)
    bool EndReached;                                                                  // 0x0280 (size: 0x1)
    float SpeedBlended;                                                               // 0x0284 (size: 0x4)
    float waitTimer;                                                                  // 0x0288 (size: 0x4)
    bool WaitTrigger;                                                                 // 0x028C (size: 0x1)
    class ABP_BarkModifier_C* WaitTriggerObject;                                      // 0x0290 (size: 0x8)
    bool CatIsOnBark;                                                                 // 0x0298 (size: 0x1)
    TArray<class AActor*> NotOnBarkZone;                                              // 0x02A0 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void UpdateSpeed();
    void ExecuteUbergraph_BP_Bark_Spline(int32 EntryPoint);
}; // Size: 0x2B0

#endif
