#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EnvQueryGenerator.h"
#include "EnvQueryGenerator_BlueprintBase.generated.h"

class AActor;
class UEnvQueryContext;
class UObject;
class UEnvQueryItemType;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GeneratorsActionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> GeneratedItemType;
    
    UEnvQueryGenerator_BlueprintBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetQuerier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoItemGeneration(const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedVector(FVector GeneratedVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedActor(AActor* GeneratedActor) const;
    
};

