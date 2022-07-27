#ifndef UE4SS_SDK_BP_CineZurg_HPP
#define UE4SS_SDK_BP_CineZurg_HPP

class ABP_CineZurg_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0290 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0298 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawnMovement;                                // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* SKM_Zurg;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    class AActor* Trigger;                                                            // 0x02B8 (size: 0x8)
    class AActor* GoToTarget;                                                         // 0x02C0 (size: 0x8)
    bool IsMoving?;                                                                   // 0x02C8 (size: 0x1)
    float MaxSpeed;                                                                   // 0x02CC (size: 0x4)
    float FOV Init;                                                                   // 0x02D0 (size: 0x4)
    bool CamFollow;                                                                   // 0x02D4 (size: 0x1)
    float FOV;                                                                        // 0x02D8 (size: 0x4)
    float Time on Target;                                                             // 0x02DC (size: 0x4)
    FRotator BaseRotation;                                                            // 0x02E0 (size: 0xC)
    float StartDelay;                                                                 // 0x02EC (size: 0x4)
    bool CatDetected?;                                                                // 0x02F0 (size: 0x1)
    bool EndCam;                                                                      // 0x02F1 (size: 0x1)
    int32 RandomSoundIndex;                                                           // 0x02F4 (size: 0x4)
    FName sfx playable to start;                                                      // 0x02F8 (size: 0x8)
    float Destroy Distance;                                                           // 0x0300 (size: 0x4)
    TArray<class AActor*> ActorToTrigger;                                             // 0x0308 (size: 0x10)
    class USoundBase* sfx to spawn attached;                                          // 0x0318 (size: 0x8)
    float sfx volume;                                                                 // 0x0320 (size: 0x4)
    float sfx delay before flee;                                                      // 0x0324 (size: 0x4)
    FTransform DestroyTransform;                                                      // 0x0330 (size: 0x30)

    void Complete_578069E64FB8DCA8E1905FB70C951900();
    void Tick_578069E64FB8DCA8E1905FB70C951900(float Ratio);
    void Complete_6246EF4646E19036986D72BAE2B92F92();
    void Tick_6246EF4646E19036986D72BAE2B92F92(float Ratio);
    void Complete_578069E64FB8DCA8E1905FB79A715B70();
    void Tick_578069E64FB8DCA8E1905FB79A715B70(float Ratio);
    void Complete_6246EF4646E19036986D72BA4EFEEF73();
    void Tick_6246EF4646E19036986D72BA4EFEEF73(float Ratio);
    void ReceiveTick(float DeltaSeconds);
    void OnActorBeginOverlap_Event_0(class AActor* OverlappedActor, class AActor* OtherActor);
    void ReceiveBeginPlay();
    void Flee();
    void ExecuteUbergraph_BP_CineZurg(int32 EntryPoint);
}; // Size: 0x360

#endif
