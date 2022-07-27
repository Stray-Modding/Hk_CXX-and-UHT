#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ForceFeedbackChannelDetails.h"
#include "ForceFeedbackEffect.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UForceFeedbackEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, VisibleAnywhere)
    float Duration;
    
    UForceFeedbackEffect();
};

