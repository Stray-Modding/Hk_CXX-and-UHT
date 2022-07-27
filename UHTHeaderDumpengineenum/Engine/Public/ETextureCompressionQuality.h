#pragma once
#include "CoreMinimal.h"
#include "ETextureCompressionQuality.generated.h"

UENUM(BlueprintType)
enum ETextureCompressionQuality {
    TCQ_Default,
    TCQ_Lowest,
    TCQ_Low,
    TCQ_Medium,
    TCQ_High,
    TCQ_Highest,
    TCQ_MAX UMETA(Hidden),
};

