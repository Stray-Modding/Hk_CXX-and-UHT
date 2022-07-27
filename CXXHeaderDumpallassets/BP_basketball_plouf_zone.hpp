#ifndef UE4SS_SDK_BP_basketball_plouf_zone_HPP
#define UE4SS_SDK_BP_basketball_plouf_zone_HPP

class ABP_basketball_plouf_zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_basketball_plouf_zone(int32 EntryPoint);
}; // Size: 0x240

#endif
