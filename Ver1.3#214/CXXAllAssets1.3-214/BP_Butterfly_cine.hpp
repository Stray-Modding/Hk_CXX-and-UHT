#ifndef UE4SS_SDK_BP_Butterfly_cine_HPP
#define UE4SS_SDK_BP_Butterfly_cine_HPP

class ABP_Butterfly_cine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBillboardComponent* Sprite2;                                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Right Wing;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Left Wing;                                            // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0248 (size: 0x8)
    class UArrowComponent* Butterfly base;                                            // 0x0250 (size: 0x8)
    class UArrowComponent* Actor Base;                                                // 0x0258 (size: 0x8)
    float Butterfly_Resting_Flapping_Motion_2DD5D7A34389AD3B2397AA8E1B9E30B9;         // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Butterfly_Resting__Direction_2DD5D7A34389AD3B2397AA8E1B9E30B9; // 0x0264 (size: 0x1)
    class UTimelineComponent* Butterfly Resting;                                      // 0x0268 (size: 0x8)
    float Butterfly_Flight_Flapping_Motion_73E57FC14E04B3AE6A991587FAA2F1E4;          // 0x0270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Butterfly_Flight__Direction_73E57FC14E04B3AE6A991587FAA2F1E4; // 0x0274 (size: 0x1)
    class UTimelineComponent* Butterfly Flight;                                       // 0x0278 (size: 0x8)
    class UMaterialInstanceDynamic* Wing Material;                                    // 0x0280 (size: 0x8)
    FLinearColor Wing color;                                                          // 0x0288 (size: 0x10)

    void UserConstructionScript();
    void Butterfly Resting__FinishedFunc();
    void Butterfly Resting__UpdateFunc();
    void Butterfly Flight__FinishedFunc();
    void Butterfly Flight__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Butterfly_cine(int32 EntryPoint);
}; // Size: 0x298

#endif
