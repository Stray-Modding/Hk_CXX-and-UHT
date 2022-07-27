#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CheatManagerExtension.generated.h"

UCLASS(Within=CheatManager)
class ENGINE_API UCheatManagerExtension : public UObject {
    GENERATED_BODY()
public:
    UCheatManagerExtension();
};

