#ifndef UE4SS_SDK_BP_Door_Logic_HPP
#define UE4SS_SDK_BP_Door_Logic_HPP

class ABP_Door_Logic_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Door04_rotate_Door04_rotate;                          // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Timeline_0_NewTrack_0_D90157204C060F3699EAEF8E4814D1CE;                     // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D90157204C060F3699EAEF8E4814D1CE; // 0x0244 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0248 (size: 0x8)
    FRotator Rotation;                                                                // 0x0250 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x025C (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x0268 (size: 0xC)
    bool Open;                                                                        // 0x0274 (size: 0x1)
    bool StartOpen;                                                                   // 0x0275 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_BP_Door_Logic(int32 EntryPoint);
}; // Size: 0x276

#endif
