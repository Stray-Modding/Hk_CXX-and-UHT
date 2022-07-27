#pragma once
#include "CoreMinimal.h"
#include "InterpTrackInstProperty.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterpTrackInstVectorProp.generated.h"

UCLASS()
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector ResetVector;
    
    UInterpTrackInstVectorProp();
};

