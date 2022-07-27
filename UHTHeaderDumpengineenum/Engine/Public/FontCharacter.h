#pragma once
#include "CoreMinimal.h"
#include "FontCharacter.generated.h"

USTRUCT(BlueprintType)
struct FFontCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 StartU;
    
    UPROPERTY(EditAnywhere)
    int32 StartV;
    
    UPROPERTY(EditAnywhere)
    int32 USize;
    
    UPROPERTY(EditAnywhere)
    int32 VSize;
    
    UPROPERTY(EditAnywhere)
    uint8 TextureIndex;
    
    UPROPERTY(EditAnywhere)
    int32 VerticalOffset;
    
    ENGINE_API FFontCharacter();
};

