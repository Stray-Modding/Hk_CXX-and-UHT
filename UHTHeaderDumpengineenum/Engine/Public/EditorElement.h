#pragma once
#include "CoreMinimal.h"
#include "EditorElement.generated.h"

USTRUCT(BlueprintType)
struct FEditorElement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Indices[3];
    
    UPROPERTY(EditAnywhere)
    float Weights[3];
    
    ENGINE_API FEditorElement();
};

