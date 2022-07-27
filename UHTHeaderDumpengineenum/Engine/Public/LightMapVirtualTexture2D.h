#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "LightMapVirtualTexture2D.generated.h"

UCLASS()
class ENGINE_API ULightMapVirtualTexture2D : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int8> TypeToLayer;
    
    ULightMapVirtualTexture2D();
};

