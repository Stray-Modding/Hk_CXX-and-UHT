#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "AnimGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnimGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FLinearColor Color;
    
    ENGINE_API FAnimGroupInfo();
};

