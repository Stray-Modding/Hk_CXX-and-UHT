#pragma once
#include "CoreMinimal.h"
#include "EFunctionInputType.generated.h"

UENUM(BlueprintType)
enum EFunctionInputType {
    FunctionInput_Scalar,
    FunctionInput_Vector2,
    FunctionInput_Vector3,
    FunctionInput_Vector4,
    FunctionInput_Texture2D,
    FunctionInput_TextureCube,
    FunctionInput_Texture2DArray,
    FunctionInput_VolumeTexture,
    FunctionInput_StaticBool,
    FunctionInput_MaterialAttributes,
    FunctionInput_TextureExternal,
    FunctionInput_MAX UMETA(Hidden),
};

