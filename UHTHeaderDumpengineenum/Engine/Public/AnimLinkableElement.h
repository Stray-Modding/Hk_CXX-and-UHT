#pragma once
#include "CoreMinimal.h"
#include "EAnimLinkMethod.h"
#include "AnimLinkableElement.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

USTRUCT()
struct FAnimLinkableElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAnimMontage* LinkedMontage;
    
    UPROPERTY(EditAnywhere)
    int32 SlotIndex;
    
    UPROPERTY()
    int32 SegmentIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAnimLinkMethod::Type> LinkMethod;
    
    UPROPERTY()
    TEnumAsByte<EAnimLinkMethod::Type> CachedLinkMethod;
    
    UPROPERTY()
    float SegmentBeginTime;
    
    UPROPERTY()
    float SegmentLength;
    
    UPROPERTY()
    float LinkValue;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    UAnimSequenceBase* LinkedSequence;
    
public:
    ENGINE_API FAnimLinkableElement();
};

