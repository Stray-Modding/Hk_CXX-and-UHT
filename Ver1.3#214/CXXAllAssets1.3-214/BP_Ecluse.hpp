#ifndef UE4SS_SDK_BP_Ecluse_HPP
#define UE4SS_SDK_BP_Ecluse_HPP

class ABP_Ecluse_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* sfxBox;                                                      // 0x0230 (size: 0x8)
    class UCOMP_wanderer_C* COMP_wanderer;                                            // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float Timeline_1_NewTrack_0_4288AEC34EF3F9C9851B13BDF382F4FB;                     // 0x0250 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4288AEC34EF3F9C9851B13BDF382F4FB; // 0x0254 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0258 (size: 0x8)
    float Timeline_0_NewTrack_0_589684094F053BCF6CDD30874BA96CDB;                     // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_589684094F053BCF6CDD30874BA96CDB; // 0x0264 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0268 (size: 0x8)
    bool Open;                                                                        // 0x0270 (size: 0x1)
    FTransform BaseTransform;                                                         // 0x0280 (size: 0x30)
    FTransform CurrentTransform;                                                      // 0x02B0 (size: 0x30)
    FTransform Offset;                                                                // 0x02E0 (size: 0x30)
    class ANavModifierVolume* NavVolume;                                              // 0x0310 (size: 0x8)
    float OpeningTime;                                                                // 0x0318 (size: 0x4)
    class ABP_sfx_Play_Loop_Sequence_C* sfx_move_loop;                                // 0x0320 (size: 0x8)
    bool Enable;                                                                      // 0x0328 (size: 0x1)
    bool IsClosed;                                                                    // 0x0329 (size: 0x1)
    float TimeBeforeOpen;                                                             // 0x032C (size: 0x4)
    float Timer;                                                                      // 0x0330 (size: 0x4)
    bool EmitGameplySound;                                                            // 0x0334 (size: 0x1)
    float ClosingTime;                                                                // 0x0338 (size: 0x4)
    bool Debug;                                                                       // 0x033C (size: 0x1)
    float NoiseDistance;                                                              // 0x0340 (size: 0x4)

    void SetEnable(bool Enable);
    void IsOpen(bool& Open);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void LogicTrigger();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Ecluse(int32 EntryPoint);
}; // Size: 0x344

#endif
