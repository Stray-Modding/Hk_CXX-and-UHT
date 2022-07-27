#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AssetUserData.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class ENGINE_API UAssetUserData : public UObject {
    GENERATED_BODY()
public:
    UAssetUserData();
};

