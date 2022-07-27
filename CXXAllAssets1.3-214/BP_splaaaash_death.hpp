#ifndef UE4SS_SDK_BP_splaaaash_death_HPP
#define UE4SS_SDK_BP_splaaaash_death_HPP

class ABP_splaaaash_death_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float force1;                                                                     // 0x0240 (size: 0x4)
    float bloodtracedistance;                                                         // 0x0244 (size: 0x4)
    class UMaterialInstanceDynamic* dynamat;                                          // 0x0248 (size: 0x8)
    bool Spawned ?;                                                                   // 0x0250 (size: 0x1)
    int32 Boyocable Number;                                                           // 0x0254 (size: 0x4)

    void UserConstructionScript();
    void Force Splash();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_splaaaash_death(int32 EntryPoint);
}; // Size: 0x258

#endif
