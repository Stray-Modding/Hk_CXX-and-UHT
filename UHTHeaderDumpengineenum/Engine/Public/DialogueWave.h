#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DialogueContextMapping.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "DialogueWave.generated.h"

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class UDialogueWave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    uint8 bMature: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverride_SubtitleOverride: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SpokenText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SubtitleOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogueContextMapping> ContextMappings;
    
    UPROPERTY()
    FGuid LocalizationGUID;
    
    UDialogueWave();
};

