#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NetViewer.generated.h"

class UNetConnection;
class AActor;

USTRUCT(BlueprintType)
struct ENGINE_API FNetViewer {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* Connection;
    
    UPROPERTY()
    AActor* InViewer;
    
    UPROPERTY()
    AActor* ViewTarget;
    
    UPROPERTY()
    FVector ViewLocation;
    
    UPROPERTY()
    FVector ViewDir;
    
    FNetViewer();
};

