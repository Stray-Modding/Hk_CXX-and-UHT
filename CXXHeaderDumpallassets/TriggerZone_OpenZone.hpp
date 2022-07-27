#ifndef UE4SS_SDK_TriggerZone_OpenZone_HPP
#define UE4SS_SDK_TriggerZone_OpenZone_HPP

class ATriggerZone_OpenZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0240 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0248 (size: 0x8)
    bool Active;                                                                      // 0x0250 (size: 0x1)
    TSoftObjectPtr<UWorld> Zone;                                                      // 0x0258 (size: 0x28)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_TriggerZone_OpenZone(int32 EntryPoint);
}; // Size: 0x280

#endif
