#pragma once
#include "CoreMinimal.h"
#include "EditorElement.h"
#include "GridBlendSample.generated.h"

USTRUCT()
struct FGridBlendSample {
    GENERATED_BODY()
public:
    UPROPERTY()
    FEditorElement GridElement;
    
    UPROPERTY()
    float BlendWeight;
    
    ENGINE_API FGridBlendSample();
};

