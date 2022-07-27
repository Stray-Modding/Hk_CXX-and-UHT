#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TransformProxy.generated.h"

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UTransformProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bRotatePerObject;
    
    UPROPERTY()
    bool bSetPivotMode;
    
protected:
    UPROPERTY()
    FTransform SharedTransform;
    
    UPROPERTY()
    FTransform InitialSharedTransform;
    
public:
    UTransformProxy();
};

