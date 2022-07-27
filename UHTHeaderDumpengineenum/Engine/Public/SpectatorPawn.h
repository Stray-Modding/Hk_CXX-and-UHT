#pragma once
#include "CoreMinimal.h"
#include "DefaultPawn.h"
#include "SpectatorPawn.generated.h"

UCLASS(NotPlaceable)
class ENGINE_API ASpectatorPawn : public ADefaultPawn {
    GENERATED_BODY()
public:
    ASpectatorPawn();
};

