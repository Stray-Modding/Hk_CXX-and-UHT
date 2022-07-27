#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AIPredictionEvent.h"
#include "AISense_Prediction.generated.h"

class APawn;
class AAIController;
class AActor;

UCLASS()
class AIMODULE_API UAISense_Prediction : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIPredictionEvent> RegisteredEvents;
    
    UAISense_Prediction();
    UFUNCTION(BlueprintCallable)
    static void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);
    
    UFUNCTION(BlueprintCallable)
    static void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);
    
};

