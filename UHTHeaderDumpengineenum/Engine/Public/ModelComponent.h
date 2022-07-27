#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponent.h"
#include "Interface_CollisionDataProvider.h"
#include "ModelComponent.generated.h"

class UBodySetup;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UModelComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBodySetup* ModelBodySetup;
    
    UModelComponent();
    
    // Fix for true pure virtual functions not being implemented
};

