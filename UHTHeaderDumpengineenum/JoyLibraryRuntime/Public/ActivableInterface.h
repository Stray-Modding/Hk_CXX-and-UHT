#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ActivableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UActivableInterface : public UInterface {
    GENERATED_BODY()
};

class IActivableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsActive() const;
    
};

