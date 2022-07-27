#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LookAtInterface.generated.h"

UINTERFACE(Blueprintable)
class HK_PROJECT_API ULookAtInterface : public UInterface {
    GENERATED_BODY()
};

class HK_PROJECT_API ILookAtInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetLookAtOffset() const;
    
};

