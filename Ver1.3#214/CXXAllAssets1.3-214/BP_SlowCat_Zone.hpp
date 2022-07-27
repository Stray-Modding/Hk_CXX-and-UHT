#ifndef UE4SS_SDK_BP_SlowCat_Zone_HPP
#define UE4SS_SDK_BP_SlowCat_Zone_HPP

class ABP_SlowCat_Zone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USaveComponent* Save;                                                       // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float SlowRatio;                                                                  // 0x0248 (size: 0x4)
    bool OnlyOnce;                                                                    // 0x024C (size: 0x1)
    bool Smooth;                                                                      // 0x024D (size: 0x1)
    float SmoothTime;                                                                 // 0x0250 (size: 0x4)
    bool Main;                                                                        // 0x0254 (size: 0x1)
    bool Last;                                                                        // 0x0255 (size: 0x1)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_SlowCat_Zone(int32 EntryPoint);
}; // Size: 0x256

#endif
