#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "NamedColor.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNamedColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    FNamedColor();
};

