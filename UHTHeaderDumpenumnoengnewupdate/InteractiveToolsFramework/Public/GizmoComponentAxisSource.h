#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoAxisSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoComponentAxisSource.generated.h"

class USceneComponent;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentAxisSource : public UObject, public IGizmoAxisSource {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    UPROPERTY()
    int32 AxisIndex;
    
    UPROPERTY()
    bool bLocalAxes;
    
    UGizmoComponentAxisSource();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool HasTangentVectors() const override PURE_VIRTUAL(HasTangentVectors, return false;);
    
    UFUNCTION()
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut) const override PURE_VIRTUAL(GetTangentVectors,);
    
    UFUNCTION()
    FVector GetOrigin() const override PURE_VIRTUAL(GetOrigin, return FVector{};);
    
    UFUNCTION()
    FVector GetDirection() const override PURE_VIRTUAL(GetDirection, return FVector{};);
    
};

