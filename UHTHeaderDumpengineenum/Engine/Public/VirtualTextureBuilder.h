#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VirtualTextureBuilder.generated.h"

class UVirtualTexture2D;

UCLASS(BlueprintType)
class ENGINE_API UVirtualTextureBuilder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UVirtualTexture2D* Texture;
    
    UPROPERTY()
    uint64 BuildHash;
    
    UVirtualTextureBuilder();
};

