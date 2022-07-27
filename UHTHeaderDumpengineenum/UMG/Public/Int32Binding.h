#pragma once
#include "CoreMinimal.h"
#include "PropertyBinding.h"
#include "Int32Binding.generated.h"

UCLASS()
class UMG_API UInt32Binding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UInt32Binding();
    UFUNCTION()
    int32 GetValue() const;
    
};

