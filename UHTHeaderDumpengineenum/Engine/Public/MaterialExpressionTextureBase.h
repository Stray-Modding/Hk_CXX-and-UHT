#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureBase.generated.h"

class UTexture;

UCLASS(Abstract, BlueprintType)
class ENGINE_API UMaterialExpressionTextureBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* Texture;
    
    UMaterialExpressionTextureBase();
};

