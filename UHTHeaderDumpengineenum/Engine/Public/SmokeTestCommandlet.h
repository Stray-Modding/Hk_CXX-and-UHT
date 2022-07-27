#pragma once
#include "CoreMinimal.h"
#include "Commandlet.h"
#include "SmokeTestCommandlet.generated.h"

UCLASS(NonTransient)
class USmokeTestCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    USmokeTestCommandlet();
};

