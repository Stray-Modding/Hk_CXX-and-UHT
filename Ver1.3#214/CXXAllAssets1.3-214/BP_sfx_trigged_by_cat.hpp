#ifndef UE4SS_SDK_BP_sfx_trigged_by_cat_HPP
#define UE4SS_SDK_BP_sfx_trigged_by_cat_HPP

class ABP_sfx_trigged_by_cat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class USoundBase* Sfx;                                                            // 0x0240 (size: 0x8)
    bool only once;                                                                   // 0x0248 (size: 0x1)
    float Volume;                                                                     // 0x024C (size: 0x4)
    float Pitch;                                                                      // 0x0250 (size: 0x4)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_sfx_trigged_by_cat(int32 EntryPoint);
}; // Size: 0x254

#endif
