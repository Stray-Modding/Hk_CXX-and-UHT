#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Interface_PreviewMeshProvider.h"
#include "SolverIterations.h"
#include "EPhysicsAssetSolverType.h"
#include "PhysicsAsset.generated.h"

class UBodySetup;
class UPhysicsConstraintTemplate;
class USkeletalBodySetup;
class UThumbnailInfo;

UCLASS(MinimalAPI)
class UPhysicsAsset : public UObject, public IInterface_PreviewMeshProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> BoundsBodies;
    
    UPROPERTY(Export)
    TArray<USkeletalBodySetup*> SkeletalBodySetups;
    
    UPROPERTY(Export)
    TArray<UPhysicsConstraintTemplate*> ConstraintSetup;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FSolverIterations SolverIterations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EPhysicsAssetSolverType SolverType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bNotForDedicatedServer: 1;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UThumbnailInfo* ThumbnailInfo;
    
private:
    UPROPERTY(Export)
    TArray<UBodySetup*> BodySetup;
    
public:
    UPhysicsAsset();
    
    // Fix for true pure virtual functions not being implemented
};

