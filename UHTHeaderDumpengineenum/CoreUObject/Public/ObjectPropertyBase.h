#pragma once
#include "CoreMinimal.h"
#include "Property.h"
#include "ObjectPropertyBase.generated.h"

UCLASS(Abstract)
class UObjectPropertyBase : public UProperty {
    GENERATED_BODY()
public:
    UObjectPropertyBase();
};

