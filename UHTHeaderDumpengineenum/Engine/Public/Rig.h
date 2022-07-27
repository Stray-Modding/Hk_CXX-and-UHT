#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TransformBase.h"
#include "NodeMappingProviderInterface.h"
#include "Node.h"
#include "Rig.generated.h"

UCLASS(MinimalAPI)
class URig : public UObject, public INodeMappingProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTransformBase> TransformBases;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FNode> Nodes;
    
public:
    URig();
    
    // Fix for true pure virtual functions not being implemented
};

