#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextureAddress.h"
#include "PhysicalMaterialMask.generated.h"

UCLASS(BlueprintType, CollapseCategories)
class ENGINE_API UPhysicalMaterialMask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UVChannelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPhysicalMaterialMask();
};

