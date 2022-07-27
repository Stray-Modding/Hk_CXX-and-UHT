#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SubdividedQuadVertex.generated.h"

USTRUCT(BlueprintType)
struct FSubdividedQuadVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 VertexPositionIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D TextureCoordinate0;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D TextureCoordinate1;
    
    UPROPERTY(BlueprintReadWrite)
    FColor VertexColor;
    
    UPROPERTY(BlueprintReadWrite)
    FVector VertexNormal;
    
    UPROPERTY(BlueprintReadWrite)
    FVector VertexTangent;
    
    UPROPERTY(BlueprintReadWrite)
    float VertexBinormalSign;
    
    EDITABLEMESH_API FSubdividedQuadVertex();
};

