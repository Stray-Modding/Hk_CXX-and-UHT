#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Manager.generated.h"

UCLASS(Abstract, Blueprintable)
class JOYLIBRARYRUNTIME_API AManager : public AActor {
    GENERATED_BODY()
public:
    AManager();
};

