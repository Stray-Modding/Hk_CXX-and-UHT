#pragma once
#include "CoreMinimal.h"
#include "AssetUserData.h"
#include "TextureMipDataProviderFactory.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API UTextureMipDataProviderFactory : public UAssetUserData {
    GENERATED_BODY()
public:
    UTextureMipDataProviderFactory();
};

