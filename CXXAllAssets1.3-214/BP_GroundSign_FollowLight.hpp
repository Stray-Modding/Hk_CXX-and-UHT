#ifndef UE4SS_SDK_BP_GroundSign_FollowLight_HPP
#define UE4SS_SDK_BP_GroundSign_FollowLight_HPP

class ABP_GroundSign_FollowLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0230 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0238 (size: 0x8)
    class USceneComponent* FX_Spawn_location;                                         // 0x0240 (size: 0x8)
    class UB12_hack_sfx_C* B12_hack_sfx;                                              // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Neon_Mesh;                                            // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    float Timeline_2_NewTrack_0_C8F955F24B9D6397E9D6EBB80CDA15F3;                     // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_C8F955F24B9D6397E9D6EBB80CDA15F3; // 0x0264 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0268 (size: 0x8)
    float Timeline_1_NewTrack_0_D9342EAF4E9A182F2994FF9FB5DD507E;                     // 0x0270 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_D9342EAF4E9A182F2994FF9FB5DD507E; // 0x0274 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0278 (size: 0x8)
    float Timeline_0_NewTrack_0_BB0C30D84368EC76C517E5AF29448F60;                     // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_BB0C30D84368EC76C517E5AF29448F60; // 0x0284 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0288 (size: 0x8)
    class UMaterialInstanceDynamic* Mat Neon;                                         // 0x0290 (size: 0x8)
    FLinearColor Neon Color;                                                          // 0x0298 (size: 0x10)
    float Neon Intensity;                                                             // 0x02A8 (size: 0x4)
    bool On/Off;                                                                      // 0x02AC (size: 0x1)
    FName sfx to play;                                                                // 0x02B0 (size: 0x8)
    bool flashed;                                                                     // 0x02B8 (size: 0x1)
    bool Fx ?;                                                                        // 0x02B9 (size: 0x1)
    bool Seed;                                                                        // 0x02BA (size: 0x1)
    FRandomStream Random_Stream;                                                      // 0x02BC (size: 0x8)
    float Random_0_1;                                                                 // 0x02C4 (size: 0x4)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_1__fx__EventFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Neon On();
    void Neon Off();
    void LogicTrigger();
    void Flash(float mul);
    void footstep(float Velocity);
    void BndEvt__BP_GroundSign_FollowLight_Meowable_K2Node_ComponentBoundEvent_0_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void ExecuteUbergraph_BP_GroundSign_FollowLight(int32 EntryPoint);
}; // Size: 0x2C8

#endif
