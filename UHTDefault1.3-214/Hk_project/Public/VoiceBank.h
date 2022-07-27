#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "VoiceBank.generated.h"

class USoundBase;

UCLASS(BlueprintType)
class HK_PROJECT_API UVoiceBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundBase*> VoiceSounds;
    
    UVoiceBank();
};

