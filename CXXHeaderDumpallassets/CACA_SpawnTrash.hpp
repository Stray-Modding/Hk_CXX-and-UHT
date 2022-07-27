#ifndef UE4SS_SDK_CACA_SpawnTrash_HPP
#define UE4SS_SDK_CACA_SpawnTrash_HPP

class ACACA_SpawnTrash_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    int32 NbOfTrash;                                                                  // 0x0248 (size: 0x4)
    TArray<class AActor*> ActorsToSpawn;                                              // 0x0250 (size: 0x10)
    bool SpawnSpecificActor;                                                          // 0x0260 (size: 0x1)
    class AActor* Wheretospawnspecificactor;                                          // 0x0268 (size: 0x8)
    TSubclassOf<class AActor> ActorToSpawn;                                           // 0x0270 (size: 0x8)
    bool Spawned;                                                                     // 0x0278 (size: 0x1)

    void LogicTrigger();
    void ExecuteUbergraph_CACA_SpawnTrash(int32 EntryPoint);
}; // Size: 0x279

#endif
