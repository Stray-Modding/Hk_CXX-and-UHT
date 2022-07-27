#pragma once
#include "CoreMinimal.h"
#include "ProcMeshVertex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ProcMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FProcMeshSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FProcMeshVertex> ProcVertexBuffer;
    
    UPROPERTY()
    TArray<uint32> ProcIndexBuffer;
    
    UPROPERTY()
    FBox SectionLocalBox;
    
    UPROPERTY()
    bool bEnableCollision;
    
    UPROPERTY()
    bool bSectionVisible;
    
    PROCEDURALMESHCOMPONENT_API FProcMeshSection();
};

