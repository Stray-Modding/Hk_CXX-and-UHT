#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GeometryCollectionSource.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath SourceGeometryObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInterface*> SourceMaterial;
    
    FGeometryCollectionSource();
};

