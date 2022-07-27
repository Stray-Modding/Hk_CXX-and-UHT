#include "PrefabFunctionLibrary.h"

class APrefabActor;
class UObject;
class UPrefabAsset;
class AActor;

APrefabActor* UPrefabFunctionLibrary::SpawnPrefab(const UObject* WorldContextObject, UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner) {
    return NULL;
}

UPrefabFunctionLibrary::UPrefabFunctionLibrary() {
}

