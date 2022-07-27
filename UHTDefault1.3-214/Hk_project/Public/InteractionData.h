#pragma once
#include "CoreMinimal.h"
#include "InteractionData.generated.h"

class UPrimitiveComponent;
class UCatUsableComponentBase;
class AInteractionFeedback;

USTRUCT(BlueprintType)
struct FInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UCatUsableComponentBase* Usable;
    
    UPROPERTY()
    AInteractionFeedback* Feedback;
    
    UPROPERTY(Export)
    UPrimitiveComponent* VisibilityOccluder;
    
    UPROPERTY(Export)
    UPrimitiveComponent* InteractionOccluder;
    
    HK_PROJECT_API FInteractionData();
};

