#ifndef UE4SS_SDK_BP_Door_Logic_2_HPP
#define UE4SS_SDK_BP_Door_Logic_2_HPP

class ABP_Door_Logic_2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* door_squeak_01_Cue;                                        // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Door04_rotate_Door04_rotate;                          // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float Timeline_0_NewTrack_0_768E29F94B871187C8FC3D96B60472DE;                     // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_768E29F94B871187C8FC3D96B60472DE; // 0x024C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0250 (size: 0x8)
    FRotator Rotation;                                                                // 0x0258 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x0264 (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x0270 (size: 0xC)
    bool Open;                                                                        // 0x027C (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_Door_Logic_2(int32 EntryPoint);
}; // Size: 0x27D

#endif
