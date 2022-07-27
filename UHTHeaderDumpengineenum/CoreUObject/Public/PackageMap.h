#pragma once
#include "CoreMinimal.h"
#include "Object.h"
#include "PackageMap.generated.h"

UCLASS(Abstract, Transient)
class UPackageMap : public UObject {
    GENERATED_BODY()
public:
    UPackageMap();
};

