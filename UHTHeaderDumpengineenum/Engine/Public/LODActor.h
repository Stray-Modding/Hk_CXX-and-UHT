#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "HLODInstancingKey.h"
#include "LODActor.generated.h"

class UStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UHLODProxy;

UCLASS(NotPlaceable)
class ENGINE_API ALODActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(Export, Transient)
    TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*> InstancedStaticMeshComponents;
    
    UPROPERTY(VisibleAnywhere)
    UHLODProxy* Proxy;
    
    UPROPERTY(VisibleAnywhere)
    FName Key;
    
    UPROPERTY(VisibleAnywhere)
    float LODDrawDistance;
    
public:
    UPROPERTY(VisibleAnywhere)
    int32 LODLevel;
    
    UPROPERTY(VisibleAnywhere)
    TArray<AActor*> SubActors;
    
    UPROPERTY()
    uint8 CachedNumHLODLevels;
    
    ALODActor();
};

