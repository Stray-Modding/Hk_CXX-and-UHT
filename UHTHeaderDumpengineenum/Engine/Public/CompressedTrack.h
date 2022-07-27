#pragma once
#include "CoreMinimal.h"
#include "CompressedTrack.generated.h"

USTRUCT()
struct ENGINE_API FCompressedTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ByteStream;
    
    UPROPERTY()
    TArray<float> Times;
    
    UPROPERTY()
    float Mins[3];
    
    UPROPERTY()
    float Ranges[3];
    
    FCompressedTrack();
};

