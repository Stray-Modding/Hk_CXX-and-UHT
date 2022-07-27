#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HoudiniInputLandscape.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedInputLandscapeTraqnsform;
    
    UHoudiniInputLandscape();
};

