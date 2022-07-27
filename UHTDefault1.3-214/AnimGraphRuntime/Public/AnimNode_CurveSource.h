#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_CurveSource.generated.h"

class UCurveSourceInterface;
class ICurveSourceInterface;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CurveSource : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(Transient)
    TScriptInterface<ICurveSourceInterface> CurveSource;
    
    FAnimNode_CurveSource();
};

