#pragma once
#include "CoreMinimal.h"
#include "LiveLinkWorldTime.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkWorldTime {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    double Time;
    
    UPROPERTY()
    double Offset;
    
public:
    LIVELINKINTERFACE_API FLiveLinkWorldTime();
};

