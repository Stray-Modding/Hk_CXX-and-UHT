#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MaterialExpressionFunctionOutput.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UMaterialExpressionFunctionOutput : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OutputName;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY()
    FExpressionInput A;
    
    UPROPERTY()
    uint8 bLastPreviewed: 1;
    
    UPROPERTY()
    FGuid ID;
    
    UMaterialExpressionFunctionOutput();
};

