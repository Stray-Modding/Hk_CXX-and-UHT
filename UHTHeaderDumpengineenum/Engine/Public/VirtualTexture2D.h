#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "VirtualTextureBuildSettings.h"
#include "VirtualTexture2D.generated.h"

UCLASS()
class UVirtualTexture2D : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVirtualTextureBuildSettings Settings;
    
    UPROPERTY()
    bool bContinuousUpdate;
    
    UPROPERTY()
    bool bSinglePhysicalSpace;
    
    UVirtualTexture2D();
};

