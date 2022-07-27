#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GeometryCollectionDebugDrawComponent.generated.h"

class AGeometryCollectionDebugDrawActor;
class AGeometryCollectionRenderLevelSetActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;
    
    UGeometryCollectionDebugDrawComponent();
};

