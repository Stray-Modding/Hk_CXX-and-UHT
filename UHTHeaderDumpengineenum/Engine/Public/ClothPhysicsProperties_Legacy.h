#pragma once
#include "CoreMinimal.h"
#include "ClothPhysicsProperties_Legacy.generated.h"

USTRUCT(BlueprintType)
struct FClothPhysicsProperties_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY()
    float VerticalResistance;
    
    UPROPERTY()
    float HorizontalResistance;
    
    UPROPERTY()
    float BendResistance;
    
    UPROPERTY()
    float ShearResistance;
    
    UPROPERTY()
    float Friction;
    
    UPROPERTY()
    float Damping;
    
    UPROPERTY()
    float TetherStiffness;
    
    UPROPERTY()
    float TetherLimit;
    
    UPROPERTY()
    float Drag;
    
    UPROPERTY()
    float StiffnessFrequency;
    
    UPROPERTY()
    float GravityScale;
    
    UPROPERTY()
    float MassScale;
    
    UPROPERTY()
    float InertiaBlend;
    
    UPROPERTY()
    float SelfCollisionThickness;
    
    UPROPERTY()
    float SelfCollisionSquashScale;
    
    UPROPERTY()
    float SelfCollisionStiffness;
    
    UPROPERTY()
    float SolverFrequency;
    
    UPROPERTY()
    float FiberCompression;
    
    UPROPERTY()
    float FiberExpansion;
    
    UPROPERTY()
    float FiberResistance;
    
    ENGINE_API FClothPhysicsProperties_Legacy();
};

