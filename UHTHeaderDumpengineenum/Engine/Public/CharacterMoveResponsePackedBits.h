#pragma once
#include "CoreMinimal.h"
#include "CharacterNetworkSerializationPackedBits.h"
#include "CharacterMoveResponsePackedBits.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCharacterMoveResponsePackedBits : public FCharacterNetworkSerializationPackedBits {
    GENERATED_BODY()
public:
    FCharacterMoveResponsePackedBits();
};

