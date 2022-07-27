#pragma once
#include "CoreMinimal.h"
#include "EDesiredImageFormat.h"
#include "OnImageWriteCompleteDelegate.h"
#include "ImageWriteOptions.generated.h"

USTRUCT(BlueprintType)
struct FImageWriteOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDesiredImageFormat Format;
    
    UPROPERTY(BlueprintReadWrite)
    FOnImageWriteComplete OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CompressionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverwriteFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAsync;
    
    IMAGEWRITEQUEUE_API FImageWriteOptions();
};

