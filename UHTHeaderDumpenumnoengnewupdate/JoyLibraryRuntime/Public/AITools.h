#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AITools.generated.h"

class AAIController;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UAITools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAITools();
    UFUNCTION(BlueprintPure)
    static FString GetActiveBehaviorTreeTaskName(AAIController* _aiController);
    
};

