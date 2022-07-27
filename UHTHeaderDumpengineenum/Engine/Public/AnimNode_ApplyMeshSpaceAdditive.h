#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "PoseLink.h"
#include "InputAlphaBoolBlend.h"
#include "EAnimAlphaInputType.h"
#include "InputScaleBias.h"
#include "InputScaleBiasClamp.h"
#include "AnimNode_ApplyMeshSpaceAdditive.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Additive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlphaBoolEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    FAnimNode_ApplyMeshSpaceAdditive();
};

