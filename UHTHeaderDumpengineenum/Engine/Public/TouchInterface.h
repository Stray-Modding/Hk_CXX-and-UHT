#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TouchInputControl.h"
#include "TouchInterface.generated.h"

UCLASS()
class ENGINE_API UTouchInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTouchInputControl> Controls;
    
    UPROPERTY(EditAnywhere)
    float ActiveOpacity;
    
    UPROPERTY(EditAnywhere)
    float InactiveOpacity;
    
    UPROPERTY(EditAnywhere)
    float TimeUntilDeactive;
    
    UPROPERTY(EditAnywhere)
    float TimeUntilReset;
    
    UPROPERTY(EditAnywhere)
    float ActivationDelay;
    
    UPROPERTY(EditAnywhere)
    bool bPreventRecenter;
    
    UPROPERTY(EditAnywhere)
    float StartupDelay;
    
    UTouchInterface();
};

