#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DataAsset.generated.h"

class UDataAsset;

UCLASS(Abstract, MinimalAPI)
class UDataAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable)
    TSubclassOf<UDataAsset> NativeClass;
    
public:
    UDataAsset();
};

