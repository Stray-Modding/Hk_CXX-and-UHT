#pragma once
#include "CoreMinimal.h"
#include "ECollisionEnabled.h"
#include "ResponseChannel.h"
#include "CollisionResponseTemplate.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCollisionResponseTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY()
    bool bCanModify;
    
    UPROPERTY()
    FName ObjectTypeName;
    
    UPROPERTY()
    TArray<FResponseChannel> CustomResponses;
    
    FCollisionResponseTemplate();
};

