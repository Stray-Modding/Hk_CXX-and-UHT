#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimCurveCompressionSettings.generated.h"

class UAnimCurveCompressionCodec;

UCLASS()
class ENGINE_API UAnimCurveCompressionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    UAnimCurveCompressionCodec* Codec;
    
    UAnimCurveCompressionSettings();
};

