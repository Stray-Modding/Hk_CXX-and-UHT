#pragma once
#include "CoreMinimal.h"
#include "EHangingTestResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "RailHangingTestResult.generated.h"

USTRUCT(BlueprintType)
struct FRailHangingTestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EHangingTestResult> Result;
    
    UPROPERTY(BlueprintReadWrite)
    FVector BaseLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat BaseRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector HangingLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FQuat HangingRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FPlane HangingPlane;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentQuadrantId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 IdealQuadrantId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TargetQuadrantId;
    
    UPROPERTY(BlueprintReadWrite)
    float WallRatio;
    
    UPROPERTY(BlueprintReadWrite)
    bool isWall;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPointHanging;
    
    HK_PROJECT_API FRailHangingTestResult();
};

