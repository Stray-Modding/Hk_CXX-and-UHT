#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SoundDebugEntry.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FSoundDebugEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FName DebugName;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath Sound;
    
    FSoundDebugEntry();
};

