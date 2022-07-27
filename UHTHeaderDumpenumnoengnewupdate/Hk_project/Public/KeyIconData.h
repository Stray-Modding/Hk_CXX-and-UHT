#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EGameControllerType.h"
#include "KeyIconData.generated.h"

class UIconData;

UCLASS()
class HK_PROJECT_API UKeyIconData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    UIconData* DefaultIcon;
    
    UPROPERTY(EditAnywhere)
    TMap<EGameControllerType, UIconData*> ControllerIcons;
    
    UKeyIconData();
};

