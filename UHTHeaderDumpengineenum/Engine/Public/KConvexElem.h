#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "KConvexElem.generated.h"

USTRUCT(BlueprintType)
struct FKConvexElem : public FKShapeElem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> VertexData;
    
    UPROPERTY()
    TArray<int32> IndexData;
    
    UPROPERTY()
    FBox ElemBox;
    
private:
    UPROPERTY()
    FTransform Transform;
    
public:
    ENGINE_API FKConvexElem();
};

