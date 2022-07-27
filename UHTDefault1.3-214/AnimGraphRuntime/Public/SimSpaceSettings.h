#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SimSpaceSettings.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FSimSpaceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MasterAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VelocityScaleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLinearAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularAcceleration;
    
    UPROPERTY()
    float ExternalLinearDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ExternalLinearDragV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ExternalLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ExternalAngularVelocity;
    
    FSimSpaceSettings();
};

