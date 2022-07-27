#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BlueprintCore.generated.h"

UCLASS()
class ENGINE_API UBlueprintCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(NonTransactional, Transient)
    UClass* SkeletonGeneratedClass;
    
    UPROPERTY(NonTransactional)
    UClass* GeneratedClass;
    
    UPROPERTY()
    bool bLegacyNeedToPurgeSkelRefs;
    
private:
    UPROPERTY()
    FGuid BlueprintGuid;
    
public:
    UBlueprintCore();
};

