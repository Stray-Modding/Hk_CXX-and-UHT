#ifndef UE4SS_SDK_BP_Movable_window_HPP
#define UE4SS_SDK_BP_Movable_window_HPP

class ABP_Movable_window_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* W_120x120_poignee;                                    // 0x0230 (size: 0x8)
    class UStaticMeshComponent* W_120x120_R;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* W_120x120_L;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* W_120x120_cadre;                                      // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Timeline_0_NewTrack_0_15DE8DE64BDF9205608AEE8C58A7371A;                     // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_15DE8DE64BDF9205608AEE8C58A7371A; // 0x025C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0260 (size: 0x8)
    FRotator Rotation;                                                                // 0x0268 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x0274 (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x0280 (size: 0xC)
    bool Open;                                                                        // 0x028C (size: 0x1)
    FRotator Rotation2;                                                               // 0x0290 (size: 0xC)
    FRotator Base_Rotation2;                                                          // 0x029C (size: 0xC)
    FRotator Rotation_current2;                                                       // 0x02A8 (size: 0xC)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_Movable_window(int32 EntryPoint);
}; // Size: 0x2B4

#endif
