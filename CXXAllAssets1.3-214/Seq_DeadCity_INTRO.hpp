#ifndef UE4SS_SDK_Seq_DeadCity_INTRO_HPP
#define UE4SS_SDK_Seq_DeadCity_INTRO_HPP

class ASeq_DeadCity_INTRO_C : public ASequence
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* Cat_Lick_VIBE;                                             // 0x0270 (size: 0x8)
    class UAudioComponent* Cat_Fall_VIBE;                                             // 0x0278 (size: 0x8)
    class UAudioComponent* Cat_InjuredWalk_VIBE;                                      // 0x0280 (size: 0x8)
    class UCOMP_simpleLooper_C* COMP_simpleLooper;                                    // 0x0288 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0290 (size: 0x8)
    class ACineCameraActor* Camera;                                                   // 0x0298 (size: 0x8)
    bool Intro;                                                                       // 0x02A0 (size: 0x1)
    bool SeqDone;                                                                     // 0x02A1 (size: 0x1)
    bool Activate;                                                                    // 0x02A2 (size: 0x1)
    class UCameraShakeBase* CameraShake;                                              // 0x02A8 (size: 0x8)
    TEnumAsByte<Enum_DeadCity_Injured> Sequence;                                      // 0x02B0 (size: 0x1)
    bool catPassout;                                                                  // 0x02B1 (size: 0x1)
    class UAnimSequence* Animation_CatFall;                                           // 0x02B8 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02C0 (size: 0x8)
    float SpeedBlend;                                                                 // 0x02C8 (size: 0x4)
    class ACineCameraActor* Camera_Door;                                              // 0x02D0 (size: 0x8)
    class ACineCameraActor* Camera_Door_2;                                            // 0x02D8 (size: 0x8)
    class ABP_DeadCityBigDoor_C* BigDoor;                                             // 0x02E0 (size: 0x8)
    class ABP_FlickLight_C* AlarmLight;                                               // 0x02E8 (size: 0x8)
    class ABP_CameraThirdPersonModifierZone_C* Camera Zone Modifier;                  // 0x02F0 (size: 0x8)
    class APostProcessVolume* PostProcess;                                            // 0x02F8 (size: 0x8)
    TArray<class ABP_CineZurg_C*> Zurgs;                                              // 0x0300 (size: 0x10)
    class ABP_Trashbag_shake_C* Trashbag;                                             // 0x0310 (size: 0x8)
    float FlickeEyeTime;                                                              // 0x0318 (size: 0x4)
    int32 FlickeEyeCount;                                                             // 0x031C (size: 0x4)
    float PostProcessTimer;                                                           // 0x0320 (size: 0x4)
    class ABP_CameraThirdPersonModifierZone_C* Cam_modifier;                          // 0x0328 (size: 0x8)
    TArray<class AActor*> ElectricBox;                                                // 0x0330 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> DetectColor_Material;                     // 0x0340 (size: 0x10)
    int32 ElectricBoxCount;                                                           // 0x0350 (size: 0x4)
    int32 ElectricBox_Iterator;                                                       // 0x0354 (size: 0x4)
    class UAnimSequence* AnimationInjuredToNormal;                                    // 0x0358 (size: 0x8)
    class ABP_CameraThirdPerson_C* BP Camera Third Person;                            // 0x0360 (size: 0x8)
    bool Init Auto Cam on/ Off;                                                       // 0x0368 (size: 0x1)
    class AActor* TP_Cat;                                                             // 0x0370 (size: 0x8)

    void UserConstructionScript();
    void Complete_6246EF4646E19036986D72BA7D40DF75();
    void Tick_6246EF4646E19036986D72BA7D40DF75(float Ratio);
    void LogicTrigger();
    void OnStartSequence();
    void StartCameraShake(float Scale);
    void StopCameraShake();
    void Change Sequence();
    void BndEvt__Seq_DeadCity_INTRO_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Seq_DeadCity_INTRO_m_streamingComponent_K2Node_ComponentBoundEvent_1_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_Seq_DeadCity_INTRO(int32 EntryPoint);
}; // Size: 0x378

#endif
