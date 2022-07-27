#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextPropertyTestObject.generated.h"

UCLASS()
class UTextPropertyTestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText DefaultedText;
    
    UPROPERTY()
    FText UndefaultedText;
    
    UPROPERTY()
    FText TransientText;
    
    UTextPropertyTestObject();
};

