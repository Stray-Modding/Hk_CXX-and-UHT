#ifndef UE4SS_SDK_BP_TriggerBlendCinematic_DeadcityZurkPursuit_HPP
#define UE4SS_SDK_BP_TriggerBlendCinematic_DeadcityZurkPursuit_HPP

class ABP_TriggerBlendCinematic_DeadcityZurkPursuit_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FMovieSceneObjectBindingID Sequence Binding;                                      // 0x0240 (size: 0x18)
    class ALevelSequenceActor* Level Sequence;                                        // 0x0258 (size: 0x8)
    class ACameraActor* Camera Start;                                                 // 0x0260 (size: 0x8)
    class ACameraActor* Camera End;                                                   // 0x0268 (size: 0x8)
    float End Blend Speed;                                                            // 0x0270 (size: 0x4)
    TArray<class AActor*> ActorsToTrigger;                                            // 0x0278 (size: 0x10)
    class ABP_CatPawn_C* cat;                                                         // 0x0288 (size: 0x8)
    class ABP_HKPlayerCameraManager_C* Camera Manager;                                // 0x0290 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TriggerBlendCinematic_DeadcityZurkPursuit(int32 EntryPoint);
}; // Size: 0x298

#endif
