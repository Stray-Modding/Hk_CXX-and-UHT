#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentSpacePoseLink -FallbackName=ComponentSpacePoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAlphaBoolBlend -FallbackName=InputAlphaBoolBlend
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimAlphaInputType -FallbackName=EAnimAlphaInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBias -FallbackName=InputScaleBias
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
#include "AnimNode_SkeletalControlBase.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SkeletalControlBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink ComponentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(Transient)
    float ActualAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlphaBoolEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    FAnimNode_SkeletalControlBase();
};

