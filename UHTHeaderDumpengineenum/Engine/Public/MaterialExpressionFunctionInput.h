#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "ExpressionInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EFunctionInputType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "MaterialExpressionFunctionInput.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UMaterialExpressionFunctionInput : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    FExpressionInput Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InputName;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY()
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFunctionInputType> InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 PreviewValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUsePreviewValueAsDefault: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(Transient)
    uint8 bCompilingFunctionPreview: 1;
    
    UMaterialExpressionFunctionInput();
};

