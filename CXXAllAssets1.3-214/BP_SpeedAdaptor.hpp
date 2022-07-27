#ifndef UE4SS_SDK_BP_SpeedAdaptor_HPP
#define UE4SS_SDK_BP_SpeedAdaptor_HPP

class ABP_SpeedAdaptor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    bool Activate;                                                                    // 0x0240 (size: 0x1)
    TArray<class ABP_CatFollow_C*> OtherCats;                                         // 0x0248 (size: 0x10)
    float Speed;                                                                      // 0x0258 (size: 0x4)
    float Speed_Current;                                                              // 0x025C (size: 0x4)
    float Speed_Max;                                                                  // 0x0260 (size: 0x4)
    float SlowDownDistance;                                                           // 0x0264 (size: 0x4)
    class ABP_CatPawn_C* cat;                                                         // 0x0268 (size: 0x8)
    float AngleRatio;                                                                 // 0x0270 (size: 0x4)
    float DistanceRatio;                                                              // 0x0274 (size: 0x4)
    float SlowDownRatio;                                                              // 0x0278 (size: 0x4)
    float CatWidth;                                                                   // 0x027C (size: 0x4)
    float CatLength;                                                                  // 0x0280 (size: 0x4)
    bool Debug;                                                                       // 0x0284 (size: 0x1)
    float SlowDownAngle;                                                              // 0x0288 (size: 0x4)
    FVector SpeedDirection;                                                           // 0x028C (size: 0xC)
    FLinearColor Text Color;                                                          // 0x0298 (size: 0x10)
    bool SlowDown;                                                                    // 0x02A8 (size: 0x1)
    float SpeedRatio;                                                                 // 0x02AC (size: 0x4)
    bool CatIsInSpeedZone;                                                            // 0x02B0 (size: 0x1)
    bool IsOnRail;                                                                    // 0x02B1 (size: 0x1)
    bool jump_notvalid;                                                               // 0x02B2 (size: 0x1)
    FVector Extent;                                                                   // 0x02B4 (size: 0xC)
    bool isCatCollide;                                                                // 0x02C0 (size: 0x1)

    void CalculateSpeedDirection();
    void GetSlowDownRatio(class AActor* CatFollow, FVector NearestLocation, FVector FarLocation);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void GetBestRatio(class ABP_CatFollow_C* CatFollow);
    void BndEvt__BP_SpeedAdaptor_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void BndEvt__BP_SpeedAdaptor_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void Disable jump();
    void ExecuteUbergraph_BP_SpeedAdaptor(int32 EntryPoint);
}; // Size: 0x2C1

#endif
