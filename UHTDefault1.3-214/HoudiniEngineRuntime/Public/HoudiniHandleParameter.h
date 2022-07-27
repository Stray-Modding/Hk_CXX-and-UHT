#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoudiniHandleParameter.generated.h"

class UHoudiniParameter;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniHandleParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UHoudiniParameter* AssetParameter;
    
    UPROPERTY()
    int32 TupleIndex;
    
    UHoudiniHandleParameter();
};

