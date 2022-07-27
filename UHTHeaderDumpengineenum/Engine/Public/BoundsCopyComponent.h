#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ActorComponent.h"
#include "BoundsCopyComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UBoundsCopyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> BoundsSourceActor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseCollidingComponentsForSourceBounds;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bKeepOwnBoundsScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bUseCollidingComponentsForOwnBounds;
    
    UPROPERTY()
    FTransform PostTransform;
    
    UPROPERTY()
    bool bCopyXBounds;
    
    UPROPERTY()
    bool bCopyYBounds;
    
    UPROPERTY()
    bool bCopyZBounds;
    
    UBoundsCopyComponent();
};

