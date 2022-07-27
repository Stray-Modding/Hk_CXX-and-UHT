#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TranslationTrack.generated.h"

USTRUCT()
struct ENGINE_API FTranslationTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> PosKeys;
    
    UPROPERTY()
    TArray<float> Times;
    
    FTranslationTrack();
};

