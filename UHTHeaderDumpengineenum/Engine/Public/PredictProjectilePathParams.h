#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ECollisionChannel.h"
#include "EObjectTypeQuery.h"
#include "EDrawDebugTrace.h"
#include "PredictProjectilePathParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPredictProjectilePathParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceWithCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProjectileRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceWithChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float SimFrequency;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float OverrideGravityZ;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DrawDebugTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bTraceComplex;
    
    ENGINE_API FPredictProjectilePathParams();
};

