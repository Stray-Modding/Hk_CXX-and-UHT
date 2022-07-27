#pragma once
#include "CoreMinimal.h"
#include "ECustomMaterialOutputType.h"
#include "MaterialExpression.h"
#include "CustomInput.h"
#include "CustomDefine.h"
#include "CustomOutput.h"
#include "MaterialExpressionCustom.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UMaterialExpressionCustom : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Code;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECustomMaterialOutputType> OutputType;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomInput> Inputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomOutput> AdditionalOutputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomDefine> AdditionalDefines;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> IncludeFilePaths;
    
    UMaterialExpressionCustom();
};

