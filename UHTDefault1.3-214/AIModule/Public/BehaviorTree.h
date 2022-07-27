#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorLogic.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlackboardAssetProvider.h"
#include "BehaviorTree.generated.h"

class UBTDecorator;
class UBTCompositeNode;
class UBlackboardData;

UCLASS()
class AIMODULE_API UBehaviorTree : public UObject, public IBlackboardAssetProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBTCompositeNode* RootNode;
    
    UPROPERTY()
    UBlackboardData* BlackboardAsset;
    
    UPROPERTY()
    TArray<UBTDecorator*> RootDecorators;
    
    UPROPERTY()
    TArray<FBTDecoratorLogic> RootDecoratorOps;
    
    UBehaviorTree();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UBlackboardData* GetBlackboardAsset() const override PURE_VIRTUAL(GetBlackboardAsset, return NULL;);
    
};

