#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimBoneCompressionCodec.generated.h"

UCLASS(Abstract, EditInlineNew)
class ENGINE_API UAnimBoneCompressionCodec : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UAnimBoneCompressionCodec();
};

