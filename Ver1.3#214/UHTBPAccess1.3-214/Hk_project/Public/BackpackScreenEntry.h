#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BackpackScreenEntry.generated.h"

class UBackpackScreenUserWidget;

USTRUCT(BlueprintType)
struct FBackpackScreenEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBackpackScreenUserWidget> Class;
    
    HK_PROJECT_API FBackpackScreenEntry();
};

