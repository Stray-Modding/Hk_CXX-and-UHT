#ifndef UE4SS_SDK_BP_Garbage_blocker_B_01_HPP
#define UE4SS_SDK_BP_Garbage_blocker_B_01_HPP

class ABP_Garbage_blocker_B_01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Garbage_04;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float SlowRatio;                                                                  // 0x0248 (size: 0x4)

    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_Garbage_blocker_B_01(int32 EntryPoint);
}; // Size: 0x24C

#endif
