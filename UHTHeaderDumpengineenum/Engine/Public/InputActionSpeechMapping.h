#pragma once
#include "CoreMinimal.h"
#include "InputActionSpeechMapping.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FInputActionSpeechMapping {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName ActionName;
    
    UPROPERTY(EditAnywhere)
    FName SpeechKeyword;
    
public:
    FInputActionSpeechMapping();
};

