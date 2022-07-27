#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimationStateEntry.h"
#include "PerSkeletonAnimationSharingSetup.generated.h"

class USkeleton;
class UAnimSharingTransitionInstance;
class USkeletalMesh;
class UAnimSharingAdditiveInstance;
class UAnimationSharingStateProcessor;

USTRUCT(BlueprintType)
struct FPerSkeletonAnimationSharingSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeleton* Skeleton;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimSharingTransitionInstance> BlendAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimationSharingStateProcessor> StateProcessorClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FAnimationStateEntry> AnimationStates;
    
    ANIMATIONSHARING_API FPerSkeletonAnimationSharingSetup();
};

