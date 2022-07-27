#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AnimSequenceLevelSequenceLink.generated.h"

UCLASS(EditInlineNew)
class LEVELSEQUENCE_API UAnimSequenceLevelSequenceLink : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SkelTrackGuid;
    
    UPROPERTY()
    FSoftObjectPath PathToLevelSequence;
    
    UAnimSequenceLevelSequenceLink();
};

