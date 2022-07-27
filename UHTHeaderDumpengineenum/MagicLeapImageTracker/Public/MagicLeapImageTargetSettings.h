#pragma once
#include "CoreMinimal.h"
#include "MagicLeapImageTargetSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct MAGICLEAPIMAGETRACKER_API FMagicLeapImageTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* ImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LongerDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabled;
    
    FMagicLeapImageTargetSettings();
};

