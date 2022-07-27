#pragma once
#include "CoreMinimal.h"
#include "FieldSystemMetaData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFilterType -FallbackName=EFieldFilterType
#include "FieldSystemMetaDataFilter.generated.h"

class UFieldSystemMetaDataFilter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataFilter : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldFilterType> FilterType;
    
    UFieldSystemMetaDataFilter();
    UFUNCTION(BlueprintPure)
    UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType);
    
};

