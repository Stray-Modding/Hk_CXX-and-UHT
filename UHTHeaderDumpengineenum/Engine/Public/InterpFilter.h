#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterpFilter.generated.h"

UCLASS()
class UInterpFilter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Caption;
    
    UInterpFilter();
};

