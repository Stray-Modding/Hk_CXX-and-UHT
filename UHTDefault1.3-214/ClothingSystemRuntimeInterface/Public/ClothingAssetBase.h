#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ClothingAssetBase.generated.h"

UCLASS(Abstract)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingAssetBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ImportedFilePath;
    
protected:
    UPROPERTY()
    FGuid AssetGuid;
    
public:
    UClothingAssetBase();
};

