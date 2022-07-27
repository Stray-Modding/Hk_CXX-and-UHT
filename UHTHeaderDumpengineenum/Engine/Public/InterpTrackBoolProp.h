#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "BoolTrackKey.h"
#include "InterpTrackBoolProp.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackBoolProp : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBoolTrackKey> BoolTrack;
    
    UPROPERTY(VisibleAnywhere)
    FName PropertyName;
    
    UInterpTrackBoolProp();
};

