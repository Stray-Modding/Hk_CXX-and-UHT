#pragma once
#include "CoreMinimal.h"
#include "Typeface.h"
#include "CompositeFallbackFont.h"
#include "CompositeSubFont.h"
#include "CompositeFont.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FCompositeFont {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTypeface DefaultTypeface;
    
    UPROPERTY()
    FCompositeFallbackFont FallbackTypeface;
    
    UPROPERTY()
    TArray<FCompositeSubFont> SubTypefaces;
    
    FCompositeFont();
};

