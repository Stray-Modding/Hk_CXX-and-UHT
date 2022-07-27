#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NavigationDataChunk.generated.h"

UCLASS(Abstract)
class ENGINE_API UNavigationDataChunk : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName NavigationDataName;
    
    UNavigationDataChunk();
};

