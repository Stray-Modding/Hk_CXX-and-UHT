#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SmootherVectorByComponent.generated.h"

USTRUCT(BlueprintType)
struct JOYLIBRARYRUNTIME_API FSmootherVectorByComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90PercentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90PercentY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeTo90PercentZ;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Velocity;
    
    FSmootherVectorByComponent();
};

