#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldResolutionType -FallbackName=EFieldResolutionType
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataProcessingResolution.generated.h"

class UFieldSystemMetaDataProcessingResolution;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldResolutionType> ResolutionType;
    
    UFieldSystemMetaDataProcessingResolution();
    UFUNCTION(BlueprintPure)
    UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> NewResolutionType);
    
};

