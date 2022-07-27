#pragma once
#include "CoreMinimal.h"
#include "TextureSourceBlock.generated.h"

USTRUCT()
struct FTextureSourceBlock {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 BlockX;
    
    UPROPERTY(VisibleAnywhere)
    int32 BlockY;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeX;
    
    UPROPERTY(VisibleAnywhere)
    int32 SizeY;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumSlices;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumMips;
    
    ENGINE_API FTextureSourceBlock();
};

