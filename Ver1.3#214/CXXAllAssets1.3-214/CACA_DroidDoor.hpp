#ifndef UE4SS_SDK_CACA_DroidDoor_HPP
#define UE4SS_SDK_CACA_DroidDoor_HPP

class ACACA_DroidDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Door04_rotate_Door04_rotate;                          // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Timeline_0_NewTrack_0_C82E050D4FB0EF797E2E7880D6D6ED98;                     // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C82E050D4FB0EF797E2E7880D6D6ED98; // 0x0244 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0248 (size: 0x8)
    FRotator Rotation;                                                                // 0x0250 (size: 0xC)
    FRotator Base_Rotation;                                                           // 0x025C (size: 0xC)
    FRotator Rotation_Current;                                                        // 0x0268 (size: 0xC)
    bool Open;                                                                        // 0x0274 (size: 0x1)
    class ABP_Droid_C* Droid;                                                         // 0x0278 (size: 0x8)
    class AActor* Pos;                                                                // 0x0280 (size: 0x8)
    class AActor* Pos2;                                                               // 0x0288 (size: 0x8)
    FVector FeedbackPos;                                                              // 0x0290 (size: 0xC)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ExecuteUbergraph_CACA_DroidDoor(int32 EntryPoint);
}; // Size: 0x29C

#endif
