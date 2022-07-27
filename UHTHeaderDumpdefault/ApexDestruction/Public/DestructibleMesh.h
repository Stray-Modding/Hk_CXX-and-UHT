#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMesh -FallbackName=SkeletalMesh
#include "DestructibleParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FractureEffect -FallbackName=FractureEffect
#include "DestructibleMesh.generated.h"

UCLASS(MinimalAPI)
class UDestructibleMesh : public USkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDestructibleParameters DefaultDestructibleParameters;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FFractureEffect> FractureEffects;
    
    UDestructibleMesh();
};

