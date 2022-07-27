#pragma once
#include "CoreMinimal.h"
#include "CharacterNetworkSerializationPackedBits.h"
#include "CharacterServerMovePackedBits.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCharacterServerMovePackedBits : public FCharacterNetworkSerializationPackedBits {
    GENERATED_BODY()
public:
    FCharacterServerMovePackedBits();
};

