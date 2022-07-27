#ifndef UE4SS_SDK_BP_sfx_pipeSpawner_01_HPP
#define UE4SS_SDK_BP_sfx_pipeSpawner_01_HPP

class ABP_sfx_pipeSpawner_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 CurrentIndex;                                                               // 0x0240 (size: 0x4)
    TArray<class ABP_ToyoActorBase_C*> allToyos;                                      // 0x0248 (size: 0x10)
    class UAudioComponent* Audio;                                                     // 0x0258 (size: 0x8)
    bool toyoSearchDone;                                                              // 0x0260 (size: 0x1)
    bool Inside;                                                                      // 0x0261 (size: 0x1)
    class USoundBase* Base;                                                           // 0x0268 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_sfx_pipeSpawner_01(int32 EntryPoint);
}; // Size: 0x270

#endif
