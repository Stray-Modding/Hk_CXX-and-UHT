#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnlineEngineInterface.generated.h"

UCLASS()
class ENGINE_API UOnlineEngineInterface : public UObject {
    GENERATED_BODY()
public:
    UOnlineEngineInterface();
};

