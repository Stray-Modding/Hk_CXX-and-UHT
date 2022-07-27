#ifndef UE4SS_SDK_BP_spawn_Rats_HPP
#define UE4SS_SDK_BP_spawn_Rats_HPP

class ABP_spawn_Rats_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 nb_of_rats;                                                                 // 0x0240 (size: 0x4)
    bool On / Off;                                                                    // 0x0244 (size: 0x1)

    void ReceiveBeginPlay();
    void Spawn();
    void ExecuteUbergraph_BP_spawn_Rats(int32 EntryPoint);
}; // Size: 0x245

#endif
