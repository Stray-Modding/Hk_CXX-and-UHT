#ifndef UE4SS_SDK_CACA_LightCharger_HPP
#define UE4SS_SDK_CACA_LightCharger_HPP

class ACACA_LightCharger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0230 (size: 0x8)
    class UStaticMeshComponent* ChargeFeedback;                                       // 0x0238 (size: 0x8)
    class UStaticMeshComponent* JaugeOff1;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Jauge1;                                               // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0258 (size: 0x8)
    class UStaticMeshComponent* JaugeOff;                                             // 0x0260 (size: 0x8)
    class UStaticMeshComponent* Jauge;                                                // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    bool HasStillEnergy;                                                              // 0x0278 (size: 0x1)
    float EnergyLeft;                                                                 // 0x027C (size: 0x4)
    float TimeToCharge;                                                               // 0x0280 (size: 0x4)
    float ChargeFeedbackVisibleDuration;                                              // 0x0284 (size: 0x4)
    float ChargeFeedbackTimer;                                                        // 0x0288 (size: 0x4)
    float ChargeSpeed;                                                                // 0x028C (size: 0x4)
    bool MatInstance;                                                                 // 0x0290 (size: 0x1)
    class UMaterialInstanceDynamic* MaterialCharger;                                  // 0x0298 (size: 0x8)
    FLinearColor ChargeColor;                                                         // 0x02A0 (size: 0x10)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_CACA_LightCharger(int32 EntryPoint);
}; // Size: 0x2B0

#endif
