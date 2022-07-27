#pragma once
#include "CoreMinimal.h"
#include "AnimNotify.h"
#include "AnimNotify_PlaySound.generated.h"

class USoundBase;

UCLASS(CollapseCategories, Config=Game)
class ENGINE_API UAnimNotify_PlaySound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachName;
    
    UAnimNotify_PlaySound();
};

