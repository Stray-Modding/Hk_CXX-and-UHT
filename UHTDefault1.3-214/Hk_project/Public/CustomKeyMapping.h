#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "CustomKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FKey Key;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    bool IsAxis;
    
    UPROPERTY()
    bool IsPad;
    
    UPROPERTY()
    bool IsNegativeScale;
    
    HK_PROJECT_API FCustomKeyMapping();
};

