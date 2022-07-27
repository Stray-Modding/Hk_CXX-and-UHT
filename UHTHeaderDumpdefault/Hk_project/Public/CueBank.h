#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CueBank.generated.h"

class USoundCue;

UCLASS(BlueprintType)
class HK_PROJECT_API UCueBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundCue*> SoundCues;
    
    UCueBank();
};

