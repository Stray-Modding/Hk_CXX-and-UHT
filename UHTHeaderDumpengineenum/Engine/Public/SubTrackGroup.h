#pragma once
#include "CoreMinimal.h"
#include "SubTrackGroup.generated.h"

USTRUCT()
struct FSubTrackGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString GroupName;
    
    UPROPERTY()
    TArray<int32> TrackIndices;
    
    UPROPERTY()
    uint8 bIsCollapsed: 1;
    
    UPROPERTY(Transient)
    uint8 bIsSelected: 1;
    
    ENGINE_API FSubTrackGroup();
};

