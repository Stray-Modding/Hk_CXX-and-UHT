#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimMetaData.generated.h"

UCLASS(Abstract, CollapseCategories, Const, EditInlineNew)
class ENGINE_API UAnimMetaData : public UObject {
    GENERATED_BODY()
public:
    UAnimMetaData();
};

