#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Selection.generated.h"

UCLASS(Transient)
class ENGINE_API USelection : public UObject {
    GENERATED_BODY()
public:
    USelection();
};

