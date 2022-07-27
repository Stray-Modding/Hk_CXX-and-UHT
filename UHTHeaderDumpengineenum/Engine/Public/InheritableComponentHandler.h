#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComponentOverrideRecord.h"
#include "InheritableComponentHandler.generated.h"

class UActorComponent;

UCLASS()
class ENGINE_API UInheritableComponentHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FComponentOverrideRecord> Records;
    
    UPROPERTY(Export, Transient)
    TArray<UActorComponent*> UnnecessaryComponents;
    
public:
    UInheritableComponentHandler();
};

