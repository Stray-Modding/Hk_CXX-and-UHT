#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerTextureSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "NiagaraBakerTextureSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNiagaraBakerTextureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OutputName;
    
    UPROPERTY(EditAnywhere)
    FNiagaraBakerTextureSource SourceBinding;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseFrameSize: 1;
    
    UPROPERTY(EditAnywhere)
    FIntPoint FrameSize;
    
    UPROPERTY(EditAnywhere)
    FIntPoint TextureSize;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* GeneratedTexture;
    
    NIAGARA_API FNiagaraBakerTextureSettings();
};

