#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapRaycastQueryParams.generated.h"

USTRUCT(BlueprintType)
struct MAGICLEAP_API FMagicLeapRaycastQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector UpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HorizontalFovDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CollideWithUnobserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UserData;
    
    FMagicLeapRaycastQueryParams();
};

