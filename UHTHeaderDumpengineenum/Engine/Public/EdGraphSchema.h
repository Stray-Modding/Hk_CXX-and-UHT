#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EdGraphSchema.generated.h"

UCLASS(Abstract)
class ENGINE_API UEdGraphSchema : public UObject {
    GENERATED_BODY()
public:
    UEdGraphSchema();
};

