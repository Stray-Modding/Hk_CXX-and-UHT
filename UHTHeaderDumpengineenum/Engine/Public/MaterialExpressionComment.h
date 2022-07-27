#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialExpressionComment.generated.h"

UCLASS(MinimalAPI)
class UMaterialExpressionComment : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SizeX;
    
    UPROPERTY()
    int32 SizeY;
    
    UPROPERTY(EditAnywhere)
    FString Text;
    
    UPROPERTY(EditAnywhere)
    FLinearColor CommentColor;
    
    UPROPERTY(EditAnywhere)
    int32 FontSize;
    
    UMaterialExpressionComment();
};

