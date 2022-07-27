#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ELookAtType.h"
#include "LookAtData.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FLookAtData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ELookAtType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentSocket;
    
    HK_PROJECT_API FLookAtData();
};

