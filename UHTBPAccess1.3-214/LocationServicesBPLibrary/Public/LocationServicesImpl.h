#pragma once
#include "CoreMinimal.h"
#include "LocationServicesData_OnLocationChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LocationServicesImpl.generated.h"

UCLASS(Abstract, Blueprintable)
class ULocationServicesImpl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationServicesData_OnLocationChanged OnLocationChanged;
    
    ULocationServicesImpl();
};

