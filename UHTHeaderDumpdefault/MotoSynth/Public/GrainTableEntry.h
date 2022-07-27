#pragma once
#include "CoreMinimal.h"
#include "GrainTableEntry.generated.h"

USTRUCT(BlueprintType)
struct FGrainTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SampleIndex;
    
    UPROPERTY()
    float RPM;
    
    MOTOSYNTH_API FGrainTableEntry();
};

