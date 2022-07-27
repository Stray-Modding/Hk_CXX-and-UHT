#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavAgentProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavDataConfig.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FNavDataConfig : public FNavAgentProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector DefaultQueryExtent;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> NavigationDataClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> NavDataClass;
    
public:
    FNavDataConfig();
};

