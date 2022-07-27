#pragma once
#include "CoreMinimal.h"
#include "PoseLinkBase.generated.h"

USTRUCT()
struct ENGINE_API FPoseLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 LinkID;
    
    FPoseLinkBase();
};

