#ifndef UE4SS_SDK_ACH_014_ReachMidtown_HPP
#define UE4SS_SDK_ACH_014_ReachMidtown_HPP

class AACH_014_ReachMidtown_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* ColliderBox;                                                 // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_ACH_014_ReachMidtown(int32 EntryPoint);
}; // Size: 0x240

#endif
