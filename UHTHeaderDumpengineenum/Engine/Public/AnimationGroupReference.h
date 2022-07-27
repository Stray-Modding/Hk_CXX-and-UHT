#pragma once
#include "CoreMinimal.h"
#include "EAnimSyncGroupScope.h"
#include "EAnimGroupRole.h"
#include "AnimationGroupReference.generated.h"

USTRUCT()
struct FAnimationGroupReference {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    
    UPROPERTY(EditAnywhere)
    EAnimSyncGroupScope GroupScope;
    
    ENGINE_API FAnimationGroupReference();
};

