#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EFrictionCombineMode.h"
#include "EPhysicalSurface.h"
#include "PhysicalMaterial.generated.h"

class UDEPRECATED_PhysicalMaterialPropertyBase;

UCLASS(BlueprintType, CollapseCategories)
class PHYSICSCORE_API UPhysicalMaterial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Friction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StaticFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideFrictionCombineMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Restitution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideRestitutionCombineMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SleepLinearVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SleepAngularVelocityThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SleepCounterThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RaiseMassToPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DestructibleDamageThresholdScale;
    
    UPROPERTY()
    UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPhysicalMaterial();
};

