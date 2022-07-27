#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VirtualTextureSpacePoolConfig.h"
#include "VirtualTexturePoolConfig.generated.h"

UCLASS(Transient)
class ENGINE_API UVirtualTexturePoolConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 DefaultSizeInMegabyte;
    
    UPROPERTY(Config)
    TArray<FVirtualTextureSpacePoolConfig> Pools;
    
    UVirtualTexturePoolConfig();
};

