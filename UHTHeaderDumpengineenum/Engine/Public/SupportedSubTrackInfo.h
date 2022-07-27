#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SupportedSubTrackInfo.generated.h"

class UInterpTrack;

USTRUCT()
struct FSupportedSubTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UInterpTrack> SupportedClass;
    
    UPROPERTY()
    FString SubTrackName;
    
    UPROPERTY()
    int32 GroupIndex;
    
    ENGINE_API FSupportedSubTrackInfo();
};

