#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantizeNormal.h"
#include "Vector_NetQuantize.h"
#include "HitResult.generated.h"

class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct ENGINE_API FHitResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 FaceIndex;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float Distance;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY()
    FVector_NetQuantize ImpactPoint;
    
    UPROPERTY()
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY()
    FVector_NetQuantizeNormal ImpactNormal;
    
    UPROPERTY()
    FVector_NetQuantize TraceStart;
    
    UPROPERTY()
    FVector_NetQuantize TraceEnd;
    
    UPROPERTY()
    float PenetrationDepth;
    
    UPROPERTY()
    int32 Item;
    
    UPROPERTY()
    uint8 ElementIndex;
    
    UPROPERTY()
    uint8 bBlockingHit: 1;
    
    UPROPERTY()
    uint8 bStartPenetrating: 1;
    
    UPROPERTY()
    TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY()
    FName BoneName;
    
    UPROPERTY()
    FName MyBoneName;
    
    FHitResult();
};

