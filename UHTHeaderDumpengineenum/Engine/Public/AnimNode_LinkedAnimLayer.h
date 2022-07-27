#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimNode_LinkedAnimGraph.h"
#include "AnimNode_LinkedAnimLayer.generated.h"

class UAnimLayerInterface;
class IAnimLayerInterface;

USTRUCT()
struct ENGINE_API FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UAnimLayerInterface> Interface;
    
    UPROPERTY(EditAnywhere)
    FName Layer;
    
    FAnimNode_LinkedAnimLayer();
};

