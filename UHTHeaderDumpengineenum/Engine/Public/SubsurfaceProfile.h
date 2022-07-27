#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SubsurfaceProfileStruct.h"
#include "SubsurfaceProfile.generated.h"

UCLASS(MinimalAPI)
class USubsurfaceProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSubsurfaceProfileStruct Settings;
    
    USubsurfaceProfile();
};

