#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BookmarkBase.generated.h"

UCLASS(Abstract)
class ENGINE_API UBookmarkBase : public UObject {
    GENERATED_BODY()
public:
    UBookmarkBase();
};

