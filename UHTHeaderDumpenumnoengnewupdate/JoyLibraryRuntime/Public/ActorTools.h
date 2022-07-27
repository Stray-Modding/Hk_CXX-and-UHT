#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ActorTools.generated.h"

class AActor;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UActorTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorTools();
    UFUNCTION(BlueprintCallable)
    static void SetActorActive(AActor* _actor, bool _active);
    
    UFUNCTION(BlueprintPure)
    static bool IsActorActive(AActor* _actor);
    
    UFUNCTION(BlueprintCallable)
    static void InternalSetActorActive(AActor* _actor, bool _active);
    
};

