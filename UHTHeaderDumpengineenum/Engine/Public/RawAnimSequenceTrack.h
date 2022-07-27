#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RawAnimSequenceTrack.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FRawAnimSequenceTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> PosKeys;
    
    UPROPERTY()
    TArray<FQuat> RotKeys;
    
    UPROPERTY()
    TArray<FVector> ScaleKeys;
    
    FRawAnimSequenceTrack();
};

