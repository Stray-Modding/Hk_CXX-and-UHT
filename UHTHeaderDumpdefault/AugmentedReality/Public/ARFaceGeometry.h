#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EARFaceBlendShape.h"
#include "EAREye.h"
#include "ARFaceGeometry.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARFaceGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector LookAtTarget;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTracked;
    
private:
    UPROPERTY()
    TMap<EARFaceBlendShape, float> BlendShapes;
    
    UPROPERTY()
    FTransform LeftEyeTransform;
    
    UPROPERTY()
    FTransform RightEyeTransform;
    
public:
    UARFaceGeometry();
    UFUNCTION(BlueprintPure)
    FTransform GetWorldSpaceEyeTransform(EAREye Eye) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalSpaceEyeTransform(EAREye Eye) const;
    
    UFUNCTION(BlueprintPure)
    float GetBlendShapeValue(EARFaceBlendShape BlendShape) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EARFaceBlendShape, float> GetBlendShapes() const;
    
};

