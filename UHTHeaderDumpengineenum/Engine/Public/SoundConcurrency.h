#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundConcurrencySettings.h"
#include "SoundConcurrency.generated.h"

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class USoundConcurrency : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoundConcurrencySettings Concurrency;
    
    USoundConcurrency();
};

