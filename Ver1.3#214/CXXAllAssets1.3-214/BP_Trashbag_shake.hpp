#ifndef UE4SS_SDK_BP_Trashbag_shake_HPP
#define UE4SS_SDK_BP_Trashbag_shake_HPP

class ABP_Trashbag_shake_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* small_boat;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    FVector Timeline_0_NewTrack_2_C140A8B747E7533E8796EEA111261A08;                   // 0x0248 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C140A8B747E7533E8796EEA111261A08; // 0x0254 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0258 (size: 0x8)
    FRotator BaseRotation;                                                            // 0x0260 (size: 0xC)
    FVector BaseTranslation;                                                          // 0x026C (size: 0xC)
    float ShakeFactor;                                                                // 0x0278 (size: 0x4)
    float TranlateFactor;                                                             // 0x027C (size: 0x4)
    bool Stopped;                                                                     // 0x0280 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_Trashbag_shake(int32 EntryPoint);
}; // Size: 0x281

#endif
