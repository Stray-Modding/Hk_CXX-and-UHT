#pragma once
#include "CoreMinimal.h"
#include "Info.h"
#include "VolumetricCloud.generated.h"

class UVolumetricCloudComponent;

UCLASS(MinimalAPI)
class AVolumetricCloud : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricCloudComponent;
    
public:
    AVolumetricCloud();
};

