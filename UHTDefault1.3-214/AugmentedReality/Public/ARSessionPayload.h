#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FARSessionPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ConfigFlags;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInterface* DefaultMeshMaterial;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInterface* DefaultWireframeMeshMaterial;
    
    AUGMENTEDREALITY_API FARSessionPayload();
};

