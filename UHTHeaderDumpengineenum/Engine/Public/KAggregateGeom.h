#pragma once
#include "CoreMinimal.h"
#include "KSphereElem.h"
#include "KSphylElem.h"
#include "KBoxElem.h"
#include "KConvexElem.h"
#include "KTaperedCapsuleElem.h"
#include "KAggregateGeom.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FKAggregateGeom {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FKSphereElem> SphereElems;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FKBoxElem> BoxElems;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FKSphylElem> SphylElems;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FKConvexElem> ConvexElems;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FKTaperedCapsuleElem> TaperedCapsuleElems;
    
    FKAggregateGeom();
};

