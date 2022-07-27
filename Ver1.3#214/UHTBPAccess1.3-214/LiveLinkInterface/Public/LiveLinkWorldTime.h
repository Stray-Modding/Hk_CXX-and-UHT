#pragma once
#include "CoreMinimal.h"
#include "LiveLinkWorldTime.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkWorldTime {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    double Time;
    
    UPROPERTY(EditAnywhere)
    double Offset;
    
public:
    LIVELINKINTERFACE_API FLiveLinkWorldTime();
};

