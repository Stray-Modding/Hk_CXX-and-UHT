#pragma once
#include "CoreMinimal.h"
#include "Struct.h"
#include "Class.generated.h"

UCLASS(Within=Package)
class UClass : public UStruct {
    GENERATED_BODY()
public:
    UClass();
};

