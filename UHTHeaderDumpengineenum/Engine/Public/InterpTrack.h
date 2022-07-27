#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETrackActiveCondition.h"
#include "InterpTrack.generated.h"

class UInterpTrack;
class UInterpTrackInst;

UCLASS(Abstract, BlueprintType, CollapseCategories, MinimalAPI)
class UInterpTrack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UInterpTrack*> SubTracks;
    
    UPROPERTY()
    TSubclassOf<UInterpTrackInst> TrackInstClass;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETrackActiveCondition> ActiveCondition;
    
    UPROPERTY()
    FString TrackTitle;
    
    UPROPERTY()
    uint8 bOnePerGroup: 1;
    
    UPROPERTY()
    uint8 bDirGroupOnly: 1;
    
private:
    UPROPERTY()
    uint8 bDisableTrack: 1;
    
    UPROPERTY(Transient)
    uint8 bIsSelected: 1;
    
public:
    UPROPERTY()
    uint8 bIsAnimControlTrack: 1;
    
    UPROPERTY()
    uint8 bSubTrackOnly: 1;
    
    UPROPERTY(Transient)
    uint8 bVisible: 1;
    
    UPROPERTY(Transient)
    uint8 bIsRecording: 1;
    
    UInterpTrack();
};

