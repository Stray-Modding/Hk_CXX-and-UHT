#ifndef UE4SS_SDK_BP_TriggerBlendCinematic_Sewers_HPP
#define UE4SS_SDK_BP_TriggerBlendCinematic_Sewers_HPP

class ABP_TriggerBlendCinematic_Sewers_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Shake_VIBE;                                                // 0x0230 (size: 0x8)
    class UAudioComponent* DroneTorchlight_VIBE;                                      // 0x0238 (size: 0x8)
    class UAudioComponent* DroneExplode_VIBE;                                         // 0x0240 (size: 0x8)
    class UAudioComponent* BigEye_VIBE;                                               // 0x0248 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0250 (size: 0x8)
    class UStreamingComponent* Streaming;                                             // 0x0258 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    FMovieSceneObjectBindingID Sequence Binding;                                      // 0x0270 (size: 0x18)
    class ALevelSequenceActor* Level Sequence;                                        // 0x0288 (size: 0x8)
    class ACameraActor* Camera Start;                                                 // 0x0290 (size: 0x8)
    class ACameraActor* Camera End;                                                   // 0x0298 (size: 0x8)
    float End Blend Speed;                                                            // 0x02A0 (size: 0x4)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x02A8 (size: 0x10)
    class ABP_HKPlayerCameraManager_C* Camera Manager;                                // 0x02B8 (size: 0x8)
    class ABP_CatPawn_C* cat;                                                         // 0x02C0 (size: 0x8)
    TArray<class ABP_ZurgBoss_Eye_C*> Boss Eyes;                                      // 0x02C8 (size: 0x10)
    class AActor* CatPosBridge;                                                       // 0x02D8 (size: 0x8)
    FVector Dest Location;                                                            // 0x02E0 (size: 0xC)
    FVector Dest Location_0;                                                          // 0x02EC (size: 0xC)
    class AActor* FakeDrone;                                                          // 0x02F8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalDrone;                                      // 0x0300 (size: 0x8)
    bool DroneIsAttachedOnTheCat;                                                     // 0x0308 (size: 0x1)
    class UObject* SEQ_HideDrone;                                                     // 0x0310 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__BP_TriggerBlendCinematic_Sewers_Streaming_K2Node_ComponentBoundEvent_0_StreamingComponentDelegate__DelegateSignature(class UStreamingComponent* _component);
    void ExecuteUbergraph_BP_TriggerBlendCinematic_Sewers(int32 EntryPoint);
}; // Size: 0x318

#endif
