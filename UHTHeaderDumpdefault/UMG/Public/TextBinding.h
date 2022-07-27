#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "TextBinding.generated.h"

UCLASS()
class UMG_API UTextBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UTextBinding();
    UFUNCTION()
    FText GetTextValue() const;
    
    UFUNCTION()
    FString GetStringValue() const;
    
};

