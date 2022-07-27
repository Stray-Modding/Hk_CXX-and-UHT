#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LevelSequenceAnimSequenceLinkItem.generated.h"

USTRUCT(BlueprintType)
struct LEVELSEQUENCE_API FLevelSequenceAnimSequenceLinkItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SkelTrackGuid;
    
    UPROPERTY()
    FSoftObjectPath PathToAnimSequence;
    
    UPROPERTY()
    bool bExportTransforms;
    
    UPROPERTY()
    bool bExportCurves;
    
    UPROPERTY()
    bool bRecordInWorldSpace;
    
    FLevelSequenceAnimSequenceLinkItem();
};

