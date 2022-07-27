#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimNode_CustomProperty.h"
#include "PoseLink.h"
#include "AnimNode_LinkedAnimGraph.generated.h"

class UAnimInstance;

USTRUCT()
struct ENGINE_API FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPoseLink> InputPoses;
    
    UPROPERTY()
    TArray<FName> InputPoseNames;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> InstanceClass;
    
    UPROPERTY(EditAnywhere)
    FName Tag;
    
    UPROPERTY(EditAnywhere)
    uint8 bReceiveNotifiesFromLinkedInstances: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPropagateNotifiesToLinkedInstances: 1;
    
    FAnimNode_LinkedAnimGraph();
};

