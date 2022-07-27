#pragma once
#include "CoreMinimal.h"
#include "BPVariableMetaDataEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETimelineLengthMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "TTEventTrack.h"
#include "TTFloatTrack.h"
#include "TTVectorTrack.h"
#include "TTLinearColorTrack.h"
#include "ETickingGroup.h"
#include "TimelineTemplate.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UTimelineTemplate : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimelineLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETimelineLengthMode> LengthMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoPlay: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bReplicated: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreTimeDilation: 1;
    
    UPROPERTY()
    TArray<FTTEventTrack> EventTracks;
    
    UPROPERTY()
    TArray<FTTFloatTrack> FloatTracks;
    
    UPROPERTY()
    TArray<FTTVectorTrack> VectorTracks;
    
    UPROPERTY()
    TArray<FTTLinearColorTrack> LinearColorTracks;
    
    UPROPERTY(EditAnywhere)
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    
    UPROPERTY(DuplicateTransient)
    FGuid TimelineGuid;
    
    UPROPERTY()
    TEnumAsByte<ETickingGroup> TimelineTickGroup;
    
private:
    UPROPERTY()
    FName VariableName;
    
    UPROPERTY()
    FName DirectionPropertyName;
    
    UPROPERTY()
    FName UpdateFunctionName;
    
    UPROPERTY()
    FName FinishedFunctionName;
    
public:
    UTimelineTemplate();
};

