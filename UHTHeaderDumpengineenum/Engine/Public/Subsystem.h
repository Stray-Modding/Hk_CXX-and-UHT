#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Subsystem.generated.h"

UCLASS(Abstract)
class ENGINE_API USubsystem : public UObject {
    GENERATED_BODY()
public:
    USubsystem();
};

