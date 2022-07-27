#pragma once
#include "CoreMinimal.h"
#include "ECustomMaterialOutputType.h"
#include "CustomOutput.generated.h"

USTRUCT(BlueprintType)
struct FCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OutputName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECustomMaterialOutputType> OutputType;
    
    ENGINE_API FCustomOutput();
};

