#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescriptionEx.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Axis.h"
#include "AimConstraintDescription.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FAimConstraintDescription : public FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAxis LookAt_Axis;
    
    UPROPERTY(EditAnywhere)
    FAxis LookUp_Axis;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookUp;
    
    UPROPERTY(EditAnywhere)
    FVector LookUpTarget;
    
    FAimConstraintDescription();
};

