#pragma once
#include "CoreMinimal.h"
#include "PropertyWrapper.h"
#include "MulticastDelegatePropertyWrapper.generated.h"

UCLASS(NonTransient)
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper {
    GENERATED_BODY()
public:
    UMulticastDelegatePropertyWrapper();
};

