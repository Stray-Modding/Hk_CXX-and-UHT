#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "EAnimSyncGroupScope.h"
#include "EAnimGroupRole.h"
#include "AnimNode_AssetPlayerBase.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_AssetPlayerBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName GroupName;
    
    UPROPERTY()
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    UPROPERTY()
    EAnimSyncGroupScope GroupScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreForRelevancyTest;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float InternalTimeAccumulator;
    
public:
    FAnimNode_AssetPlayerBase();
};

