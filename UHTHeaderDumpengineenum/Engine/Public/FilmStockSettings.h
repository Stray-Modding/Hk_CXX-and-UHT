#pragma once
#include "CoreMinimal.h"
#include "FilmStockSettings.generated.h"

USTRUCT(BlueprintType)
struct FFilmStockSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float slope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Toe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Shoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BlackClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WhiteClip;
    
    ENGINE_API FFilmStockSettings();
};

