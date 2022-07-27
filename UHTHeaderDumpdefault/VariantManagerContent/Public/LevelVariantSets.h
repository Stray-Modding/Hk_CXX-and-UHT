#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelVariantSets.generated.h"

class UVariantSet;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API ULevelVariantSets : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UClass* DirectorClass;
    
    UPROPERTY()
    TArray<UVariantSet*> VariantSets;
    
public:
    ULevelVariantSets();
    UFUNCTION(BlueprintPure)
    UVariantSet* GetVariantSetByName(const FString& VariantSetName);
    
    UFUNCTION(BlueprintPure)
    UVariantSet* GetVariantSet(int32 VariantSetIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumVariantSets();
    
};

