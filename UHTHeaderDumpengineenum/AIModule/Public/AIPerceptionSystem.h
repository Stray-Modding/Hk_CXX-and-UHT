#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "AISubsystem.h"
#include "AIStimulus.h"
#include "AIPerceptionSystem.generated.h"

class UObject;
class UAISense;
class UAISenseEvent;
class AActor;

UCLASS(BlueprintType, Config=Game)
class AIMODULE_API UAIPerceptionSystem : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UAISense*> Senses;
    
    UPROPERTY(Config, EditAnywhere)
    float PerceptionAgingRate;
    
public:
    UAIPerceptionSystem();
    UFUNCTION(BlueprintCallable)
    static void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);
    
    UFUNCTION(BlueprintCallable)
    void ReportEvent(UAISenseEvent* PerceptionEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> Sense, AActor* Target);
    
protected:
    UFUNCTION()
    void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UAISense> GetSenseClassForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus);
    
};

