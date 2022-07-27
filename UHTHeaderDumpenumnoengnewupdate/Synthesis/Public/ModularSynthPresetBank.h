#pragma once
#include "CoreMinimal.h"
#include "ModularSynthPresetBankEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModularSynthPresetBank.generated.h"

UCLASS(BlueprintType)
class SYNTHESIS_API UModularSynthPresetBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FModularSynthPresetBankEntry> Presets;
    
    UModularSynthPresetBank();
};

