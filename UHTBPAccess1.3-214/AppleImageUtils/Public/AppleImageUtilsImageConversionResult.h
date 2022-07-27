#pragma once
#include "CoreMinimal.h"
#include "AppleImageUtilsImageConversionResult.generated.h"

USTRUCT(BlueprintType)
struct FAppleImageUtilsImageConversionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ImageData;
    
    APPLEIMAGEUTILS_API FAppleImageUtilsImageConversionResult();
};

