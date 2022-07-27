#ifndef UE4SS_SDK_BP_Butterfly_HPP
#define UE4SS_SDK_BP_Butterfly_HPP

class ABP_Butterfly_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UArrowComponent* Flight target;                                             // 0x0230 (size: 0x8)
    class UBillboardComponent* Sprite2;                                               // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Right Wing;                                           // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Left Wing;                                            // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0250 (size: 0x8)
    class UArrowComponent* Butterfly base;                                            // 0x0258 (size: 0x8)
    class UArrowComponent* Actor Base;                                                // 0x0260 (size: 0x8)
    float Butterfly_Resting_Flapping_Motion_96D01C4D45C603D99287B499F3A8EA19;         // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Butterfly_Resting__Direction_96D01C4D45C603D99287B499F3A8EA19; // 0x026C (size: 0x1)
    class UTimelineComponent* Butterfly Resting;                                      // 0x0270 (size: 0x8)
    float Butterfly_Landing_0_to_1_1B4FE5DF46AD1EE8C8F60C8E58594EE5;                  // 0x0278 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Butterfly_Landing__Direction_1B4FE5DF46AD1EE8C8F60C8E58594EE5; // 0x027C (size: 0x1)
    class UTimelineComponent* Butterfly Landing;                                      // 0x0280 (size: 0x8)
    float Butterfly_Flight_Flapping_Motion_ADC700944B2EBD6C66A23AA6DB561373;          // 0x0288 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Butterfly_Flight__Direction_ADC700944B2EBD6C66A23AA6DB561373; // 0x028C (size: 0x1)
    class UTimelineComponent* Butterfly Flight;                                       // 0x0290 (size: 0x8)
    FVector Attractor Location;                                                       // 0x0298 (size: 0xC)
    class AActor* Surface;                                                            // 0x02A8 (size: 0x8)
    bool Flying forward;                                                              // 0x02B0 (size: 0x1)
    float Delta Seconds;                                                              // 0x02B4 (size: 0x4)
    FRotator Landing start rot;                                                       // 0x02B8 (size: 0xC)
    FVector Landing Start;                                                            // 0x02C4 (size: 0xC)
    bool Collision on;                                                                // 0x02D0 (size: 0x1)
    float Max flight range;                                                           // 0x02D4 (size: 0x4)
    float Forward speed;                                                              // 0x02D8 (size: 0x4)
    float Upward speed;                                                               // 0x02DC (size: 0x4)
    int32 Time in flight;                                                             // 0x02E0 (size: 0x4)
    class UMaterialInstanceDynamic* Wing Material;                                    // 0x02E8 (size: 0x8)
    FLinearColor Wing color;                                                          // 0x02F0 (size: 0x10)

    void UserConstructionScript();
    void Butterfly Landing__FinishedFunc();
    void Butterfly Landing__UpdateFunc();
    void Butterfly Resting__FinishedFunc();
    void Butterfly Resting__UpdateFunc();
    void Butterfly Flight__FinishedFunc();
    void Butterfly Flight__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Butterfly(int32 EntryPoint);
}; // Size: 0x300

#endif
