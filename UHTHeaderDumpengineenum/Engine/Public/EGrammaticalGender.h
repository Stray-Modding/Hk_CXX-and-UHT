#pragma once
#include "CoreMinimal.h"
#include "EGrammaticalGender.generated.h"

UENUM(BlueprintType)
namespace EGrammaticalGender {
    enum Type {
        Neuter,
        Masculine,
        Feminine,
        Mixed,
    };
}

