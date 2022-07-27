#ifndef UE4SS_SDK_CACA_ZurgSlime_HPP
#define UE4SS_SDK_CACA_ZurgSlime_HPP

class ACACA_ZurgSlime_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    float Life;                                                                       // 0x0250 (size: 0x4)
    bool HasExploded;                                                                 // 0x0254 (size: 0x1)
    float TimeLeft;                                                                   // 0x0258 (size: 0x4)
    class AActor* ActorToPhysycate;                                                   // 0x0260 (size: 0x8)
    class AActor* ActorToLogcActivate;                                                // 0x0268 (size: 0x8)

    void Explode();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CACA_ZurgSlime(int32 EntryPoint);
}; // Size: 0x270

#endif
