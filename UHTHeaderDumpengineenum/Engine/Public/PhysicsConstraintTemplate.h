#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintProfileProperties.h"
#include "ConstraintInstance.h"
#include "PhysicsConstraintProfileHandle.h"
#include "PhysicsConstraintTemplate.generated.h"

UCLASS(MinimalAPI)
class UPhysicsConstraintTemplate : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FConstraintInstance DefaultInstance;
    
    UPROPERTY()
    TArray<FPhysicsConstraintProfileHandle> ProfileHandles;
    
private:
    UPROPERTY(Transient)
    FConstraintProfileProperties DefaultProfile;
    
public:
    UPhysicsConstraintTemplate();
};

