#pragma once
#include "CoreMinimal.h"
#include "MaterialAttributesInput.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialLayersFunctions.h"
#include "MaterialExpressionMaterialAttributeLayers.generated.h"

class UMaterialExpressionMaterialFunctionCall;

UCLASS(MinimalAPI)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY()
    FGuid ExpressionGUID;
    
    UPROPERTY()
    FMaterialAttributesInput Input;
    
    UPROPERTY(EditAnywhere)
    FMaterialLayersFunctions DefaultLayers;
    
    UPROPERTY(Transient)
    TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers;
    
    UPROPERTY(Transient)
    int32 NumActiveLayerCallers;
    
    UPROPERTY(Transient)
    TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers;
    
    UPROPERTY(Transient)
    int32 NumActiveBlendCallers;
    
    UPROPERTY(Transient)
    bool bIsLayerGraphBuilt;
    
    UMaterialExpressionMaterialAttributeLayers();
};

