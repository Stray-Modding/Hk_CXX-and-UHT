#pragma once
#include "CoreMinimal.h"
#include "Vector_NetQuantize100.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RepAttachment.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FRepAttachment {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* AttachParent;
    
    UPROPERTY()
    FVector_NetQuantize100 LocationOffset;
    
    UPROPERTY()
    FVector_NetQuantize100 RelativeScale3D;
    
    UPROPERTY()
    FRotator RotationOffset;
    
    UPROPERTY()
    FName AttachSocket;
    
    UPROPERTY(Export)
    USceneComponent* AttachComponent;
    
    ENGINE_API FRepAttachment();
};

