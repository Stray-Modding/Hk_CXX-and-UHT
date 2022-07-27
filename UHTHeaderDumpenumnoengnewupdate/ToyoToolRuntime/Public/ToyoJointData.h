#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ToyoJointData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct TOYOTOOLRUNTIME_API FToyoJointData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    FToyoJointData();
};

