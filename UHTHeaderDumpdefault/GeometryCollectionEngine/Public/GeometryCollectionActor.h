#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GeometryCollectionActor.generated.h"

class UGeometryCollectionComponent;
class UGeometryCollectionDebugDrawComponent;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGeometryCollectionComponent* GeometryCollectionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;
    
    AGeometryCollectionActor();
    UFUNCTION(BlueprintPure)
    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const;
    
};

