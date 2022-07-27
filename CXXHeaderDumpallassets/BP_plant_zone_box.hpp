#ifndef UE4SS_SDK_BP_plant_zone_box_HPP
#define UE4SS_SDK_BP_plant_zone_box_HPP

class ABP_plant_zone_box_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UBoxComponent* Zone;                                                        // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float zone size;                                                                  // 0x0248 (size: 0x4)
    float base pitch;                                                                 // 0x024C (size: 0x4)
    bool random offset;                                                               // 0x0250 (size: 0x1)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_plant_zone_box(int32 EntryPoint);
}; // Size: 0x251

#endif
