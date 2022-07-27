#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LevelSequencePlayerSnapshot.h"
#include "LevelSequenceBurnIn.generated.h"

class UObject;
class ALevelSequenceActor;
class ULevelSequenceBurnInInitSettings;

UCLASS(EditInlineNew)
class LEVELSEQUENCE_API ULevelSequenceBurnIn : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FLevelSequencePlayerSnapshot FrameInformation;
    
    UPROPERTY(BlueprintReadOnly)
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    ULevelSequenceBurnIn();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSettings(UObject* InSettings);
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<ULevelSequenceBurnInInitSettings> GetSettingsClass() const;
    
};

