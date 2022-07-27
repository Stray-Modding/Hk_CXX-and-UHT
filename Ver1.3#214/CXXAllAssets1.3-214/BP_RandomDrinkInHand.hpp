#ifndef UE4SS_SDK_BP_RandomDrinkInHand_HPP
#define UE4SS_SDK_BP_RandomDrinkInHand_HPP

class ABP_RandomDrinkInHand_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* GlassContent_2;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* GlassContent_1;                                       // 0x0238 (size: 0x8)
    class USceneComponent* Pivot;                                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Club_Glass_Classic;                                   // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    bool Pour/Drink;                                                                  // 0x0258 (size: 0x1)
    bool DrinkEmpty;                                                                  // 0x0259 (size: 0x1)
    float DrinkContent;                                                               // 0x025C (size: 0x4)
    float Fill_Speed;                                                                 // 0x0260 (size: 0x4)
    float DrinkSpeed;                                                                 // 0x0264 (size: 0x4)
    class UMaterialInterface* NewMatTemp;                                             // 0x0268 (size: 0x8)
    bool Tick_fill;                                                                   // 0x0270 (size: 0x1)

    void HideGlass();
    void ShowGlass();
    void ReceiveTick(float DeltaSeconds);
    void StartPouringDrink();
    void Stop Pouring Drink();
    void StartDrinking();
    void StopDrinking();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RandomDrinkInHand(int32 EntryPoint);
}; // Size: 0x271

#endif
