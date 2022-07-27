#pragma once
#include "CoreMinimal.h"
#include "ESoundGroup.h"
#include "SoundGroup.generated.h"

USTRUCT(BlueprintType)
struct FSoundGroup {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TEnumAsByte<ESoundGroup> SoundGroup;
    
    UPROPERTY(Config)
    FString DisplayName;
    
    UPROPERTY(Config)
    uint8 bAlwaysDecompressOnLoad: 1;
    
    UPROPERTY(Config)
    float DecompressedDuration;
    
    ENGINE_API FSoundGroup();
};

