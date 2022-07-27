#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureCube -FallbackName=TextureCube
#include "EARTextureType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "AREnvironmentCaptureProbeTexture.generated.h"

UCLASS(Abstract)
class AUGMENTEDREALITY_API UAREnvironmentCaptureProbeTexture : public UTextureCube {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EARTextureType TextureType;
    
    UPROPERTY(BlueprintReadOnly)
    float Timestamp;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ExternalTextureGuid;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D Size;
    
    UAREnvironmentCaptureProbeTexture();
};

