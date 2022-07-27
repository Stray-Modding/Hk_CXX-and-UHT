#pragma once
#include "CoreMinimal.h"
#include "TextureCompressionSettings.generated.h"

UENUM(BlueprintType)
enum TextureCompressionSettings {
    TC_Default,
    TC_Normalmap,
    TC_Masks,
    TC_Grayscale,
    TC_Displacementmap,
    TC_VectorDisplacementmap,
    TC_HDR,
    TC_EditorIcon,
    TC_Alpha,
    TC_DistanceFieldFont,
    TC_HDR_Compressed,
    TC_BC7,
    TC_HalfFloat,
    TC_EncodedReflectionCapture,
    TC_MAX UMETA(Hidden),
};

