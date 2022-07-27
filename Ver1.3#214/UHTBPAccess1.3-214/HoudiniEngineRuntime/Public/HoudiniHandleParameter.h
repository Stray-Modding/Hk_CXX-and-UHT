#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoudiniHandleParameter.generated.h"

class UHoudiniParameter;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniHandleParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHoudiniParameter* AssetParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TupleIndex;
    
    UHoudiniHandleParameter();
};

