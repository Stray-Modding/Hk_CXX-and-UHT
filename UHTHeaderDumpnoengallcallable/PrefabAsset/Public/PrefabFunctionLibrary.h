#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
#include "PrefabFunctionLibrary.generated.h"

class APrefabActor;
class UObject;
class AActor;
class UPrefabAsset;

UCLASS(Blueprintable)
class PREFABASSET_API UPrefabFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPrefabFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static APrefabActor* SpawnPrefab(const UObject* WorldContextObject, UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
};

