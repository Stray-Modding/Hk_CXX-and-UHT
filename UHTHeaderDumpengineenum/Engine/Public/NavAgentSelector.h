#pragma once
#include "CoreMinimal.h"
#include "NavAgentSelector.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FNavAgentSelector {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent0: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent1: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent2: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent3: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent4: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent5: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent6: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent7: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent8: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent9: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent10: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent11: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent12: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent13: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent14: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSupportsAgent15: 1;
    
    FNavAgentSelector();
};

