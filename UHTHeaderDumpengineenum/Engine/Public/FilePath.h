#pragma once
#include "CoreMinimal.h"
#include "FilePath.generated.h"

USTRUCT(BlueprintType)
struct FFilePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FilePath;
    
    ENGINE_API FFilePath();
};

