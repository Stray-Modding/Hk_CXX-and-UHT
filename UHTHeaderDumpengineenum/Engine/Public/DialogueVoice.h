#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EGrammaticalNumber.h"
#include "EGrammaticalGender.h"
#include "DialogueVoice.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UDialogueVoice : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<EGrammaticalGender::Type> Gender;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<EGrammaticalNumber::Type> Plurality;
    
    UPROPERTY()
    FGuid LocalizationGUID;
    
    UDialogueVoice();
};

