#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "HoudiniEngineCopyPropertiesInterface.h"
#include "EHoudiniCurveMethod.h"
#include "EHoudiniCurveType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EHoudiniCurveBreakpointParameterization.h"
#include "HoudiniSplineComponent.generated.h"

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniSplineComponent : public USceneComponent, public IHoudiniEngineCopyPropertiesInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> CurvePoints;
    
    UPROPERTY()
    TArray<FVector> DisplayPoints;
    
    UPROPERTY()
    TArray<int32> DisplayPointIndexDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString HoudiniSplineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurveOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHoudiniSplineVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHoudiniCurveType CurveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHoudiniCurveMethod CurveMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;
    
    UPROPERTY()
    bool bIsOutputCurve;
    
    UPROPERTY()
    bool bCookOnCurveChanged;
    
    UPROPERTY()
    bool bIsLegacyInputCurve;
    
private:
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasChanged;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY()
    bool bIsInputCurve;
    
    UPROPERTY()
    bool bIsEditableOutputCurve;
    
    UPROPERTY(DuplicateTransient, Transient)
    int32 NodeId;
    
    UPROPERTY()
    FString PartName;
    
public:
    UHoudiniSplineComponent();
    
    // Fix for true pure virtual functions not being implemented
};
