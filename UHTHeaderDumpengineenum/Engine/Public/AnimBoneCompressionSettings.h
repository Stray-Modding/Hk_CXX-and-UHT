#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimBoneCompressionSettings.generated.h"

class UAnimBoneCompressionCodec;

UCLASS()
class ENGINE_API UAnimBoneCompressionSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UAnimBoneCompressionCodec*> Codecs;
    
    UAnimBoneCompressionSettings();
};

