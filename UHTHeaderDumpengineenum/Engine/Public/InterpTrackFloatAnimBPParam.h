#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InterpTrackFloatBase.h"
#include "InterpTrackFloatAnimBPParam.generated.h"

class UAnimInstance;

UCLASS(CollapseCategories)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UClass* AnimBlueprintClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UInterpTrackFloatAnimBPParam();
};

