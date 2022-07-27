#pragma once
#include "CoreMinimal.h"
#include "SmartName.h"
#include "AnimCurveBase.generated.h"

USTRUCT()
struct ENGINE_API FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName LastObservedName;
    
    UPROPERTY()
    FSmartName Name;
    
private:
    UPROPERTY()
    int32 CurveTypeFlags;
    
public:
    FAnimCurveBase();
};

