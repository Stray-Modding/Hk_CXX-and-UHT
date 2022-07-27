#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "EStreamingVolumeUsage.h"
#include "LevelStreamingVolume.generated.h"

UCLASS(MinimalAPI)
class ALevelStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FName> StreamingLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEditorPreVisOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EStreamingVolumeUsage> StreamingUsage;
    
    ALevelStreamingVolume();
};

