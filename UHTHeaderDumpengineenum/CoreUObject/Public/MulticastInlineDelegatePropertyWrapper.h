#pragma once
#include "CoreMinimal.h"
#include "MulticastDelegatePropertyWrapper.h"
#include "MulticastInlineDelegatePropertyWrapper.generated.h"

UCLASS(NonTransient)
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper {
    GENERATED_BODY()
public:
    UMulticastInlineDelegatePropertyWrapper();
};

