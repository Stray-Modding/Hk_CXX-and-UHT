#ifndef UE4SS_SDK_BP_Sign_FollowLight_HPP
#define UE4SS_SDK_BP_Sign_FollowLight_HPP

class ABP_Sign_FollowLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0238 (size: 0x8)
    class UMeowableComponent* Meowable;                                               // 0x0240 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0248 (size: 0x8)
    class USceneComponent* FX_Spawn_location;                                         // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    class UB12_hack_sfx_C* B12_hack_sfx;                                              // 0x0260 (size: 0x8)
    class URectLightComponent* RectLight_Self;                                        // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Dummy;                                                // 0x0270 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Neon_Mesh;                                            // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    float Timeline_2_NewTrack_0_F8D653F943A69B320A94B5AAB8A2419D;                     // 0x0290 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_F8D653F943A69B320A94B5AAB8A2419D; // 0x0294 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0298 (size: 0x8)
    float Timeline_1_NewTrack_0_16049E68465C2F8FA62F668885EBC626;                     // 0x02A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_16049E68465C2F8FA62F668885EBC626; // 0x02A4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x02A8 (size: 0x8)
    float Timeline_0_NewTrack_0_4C73B6C14C2D4CEEE8D1B2B82C22F4D0;                     // 0x02B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4C73B6C14C2D4CEEE8D1B2B82C22F4D0; // 0x02B4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02B8 (size: 0x8)
    class UMaterialInstanceDynamic* Mat Neon;                                         // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* Mat Light;                                        // 0x02C8 (size: 0x8)
    FLinearColor Neon Color;                                                          // 0x02D0 (size: 0x10)
    float Neon Intensity;                                                             // 0x02E0 (size: 0x4)
    bool On/Off;                                                                      // 0x02E4 (size: 0x1)
    FName sfx to play;                                                                // 0x02E8 (size: 0x8)
    bool Box_Coll_On/Off;                                                             // 0x02F0 (size: 0x1)
    bool flashed;                                                                     // 0x02F1 (size: 0x1)
    bool Fx ?;                                                                        // 0x02F2 (size: 0x1)
    FVector sfx metal struction offset;                                               // 0x02F4 (size: 0xC)

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
    void BndEvt__BP_Sign_FollowLight_Meowable_K2Node_ComponentBoundEvent_0_NoiseDelegate__DelegateSignature(class UNoisableComponent* _noisableComponent, FVector _location, class AActor* _emitter);
    void Instant Neon On();
    void BndEvt__BP_Sign_FollowLight_Streaming_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_Sign_FollowLight(int32 EntryPoint);
}; // Size: 0x300

#endif
