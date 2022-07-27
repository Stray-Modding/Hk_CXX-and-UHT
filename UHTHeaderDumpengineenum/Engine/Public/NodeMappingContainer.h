#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NodeItem.h"
#include "NodeMappingContainer.generated.h"

UCLASS()
class ENGINE_API UNodeMappingContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FNodeItem> SourceItems;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FNodeItem> TargetItems;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> SourceToTarget;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> SourceAsset;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> TargetAsset;
    
public:
    UNodeMappingContainer();
};

