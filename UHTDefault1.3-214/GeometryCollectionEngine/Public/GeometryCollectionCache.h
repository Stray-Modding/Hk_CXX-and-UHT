#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=RecordedTransformTrack -FallbackName=RecordedTransformTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GeometryCollectionCache.generated.h"

class UGeometryCollection;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionCache : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRecordedTransformTrack RecordedData;
    
    UPROPERTY()
    UGeometryCollection* SupportedCollection;
    
    UPROPERTY()
    FGuid CompatibleCollectionState;
    
public:
    UGeometryCollectionCache();
};

