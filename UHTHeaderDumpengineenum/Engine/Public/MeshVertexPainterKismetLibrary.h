#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "EVertexPaintAxis.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MeshVertexPainterKismetLibrary.generated.h"

class UStaticMeshComponent;

UCLASS(BlueprintType, MinimalAPI)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMeshVertexPainterKismetLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& FillColor, bool bConvertToSRGB);
    
    UFUNCTION(BlueprintCallable)
    static void PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& StartColor, const FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
    
};

