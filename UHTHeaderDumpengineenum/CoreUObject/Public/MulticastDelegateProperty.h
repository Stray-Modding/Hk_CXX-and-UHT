#pragma once
#include "CoreMinimal.h"
#include "Property.h"
#include "MulticastDelegateProperty.generated.h"

UCLASS(Abstract)
class UMulticastDelegateProperty : public UProperty {
    GENERATED_BODY()
public:
    UMulticastDelegateProperty();
};

