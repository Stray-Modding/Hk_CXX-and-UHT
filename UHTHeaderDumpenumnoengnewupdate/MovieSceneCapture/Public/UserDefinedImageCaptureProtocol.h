#pragma once
#include "CoreMinimal.h"
#include "CapturedPixelsID.h"
#include "UserDefinedCaptureProtocol.h"
#include "CapturedPixels.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ImageWriteQueue -ObjectName=EDesiredImageFormat -FallbackName=EDesiredImageFormat
#include "FrameMetrics.h"
#include "UserDefinedImageCaptureProtocol.generated.h"

class UTexture;

UCLASS(Abstract)
class MOVIESCENECAPTURE_API UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EDesiredImageFormat Format;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableCompression;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 CompressionQuality;
    
    UUserDefinedImageCaptureProtocol();
    UFUNCTION(BlueprintCallable)
    void WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData);
    
    UFUNCTION(BlueprintCallable)
    FString GenerateFilenameForCurrentFrame();
    
    UFUNCTION(BlueprintCallable)
    FString GenerateFilenameForBuffer(UTexture* Buffer, const FCapturedPixelsID& StreamID);
    
};

