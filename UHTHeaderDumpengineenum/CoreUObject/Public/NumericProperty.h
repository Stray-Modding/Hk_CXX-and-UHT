#pragma once
#include "CoreMinimal.h"
#include "Property.h"
#include "NumericProperty.generated.h"

UCLASS(Abstract)
class UNumericProperty : public UProperty {
    GENERATED_BODY()
public:
    UNumericProperty();
};

