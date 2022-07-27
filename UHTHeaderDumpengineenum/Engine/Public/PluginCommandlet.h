#pragma once
#include "CoreMinimal.h"
#include "Commandlet.h"
#include "PluginCommandlet.generated.h"

UCLASS(NonTransient)
class UPluginCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPluginCommandlet();
};

