#pragma once
#include "CoreMinimal.h"
#include "MotoSynthRuntimeSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MotoSynthPreset.generated.h"

UCLASS(BlueprintType)
class MOTOSYNTH_API UMotoSynthPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMotoSynthRuntimeSettings Settings;
    
    UMotoSynthPreset();
};

