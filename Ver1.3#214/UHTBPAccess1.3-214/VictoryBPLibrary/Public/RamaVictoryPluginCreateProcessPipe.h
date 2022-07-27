#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RamaVictoryPluginCreateProcessPipe.generated.h"

UCLASS(Blueprintable)
class URamaVictoryPluginCreateProcessPipe : public UObject {
    GENERATED_BODY()
public:
    URamaVictoryPluginCreateProcessPipe();
    UFUNCTION(BlueprintCallable)
    bool ReadFromPipe(FString& PipeContents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PipeIsValid();
    
    UFUNCTION(BlueprintCallable)
    bool CreatePipe();
    
    UFUNCTION(BlueprintCallable)
    void ClosePipe();
    
};

