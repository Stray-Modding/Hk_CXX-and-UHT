#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SaveGame.generated.h"

UCLASS(Abstract)
class ENGINE_API USaveGame : public UObject {
    GENERATED_BODY()
public:
    USaveGame();
};

