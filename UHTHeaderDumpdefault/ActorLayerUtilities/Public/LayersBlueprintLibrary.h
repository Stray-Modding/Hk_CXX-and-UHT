#pragma once
#include "CoreMinimal.h"
#include "ActorLayer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LayersBlueprintLibrary.generated.h"

class UObject;
class AActor;

UCLASS(BlueprintType)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULayersBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemoveActorFromLayer(AActor* InActor, const FActorLayer& Layer);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActors(UObject* WorldContextObject, const FActorLayer& ActorLayer);
    
    UFUNCTION(BlueprintCallable)
    static void AddActorToLayer(AActor* InActor, const FActorLayer& Layer);
    
};

