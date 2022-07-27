#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldComposition.generated.h"

class ULevelStreaming;

UCLASS()
class ENGINE_API UWorldComposition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<ULevelStreaming*> TilesStreaming;
    
    UPROPERTY(Config)
    double TilesStreamingTimeThreshold;
    
    UPROPERTY(Config)
    bool bLoadAllTilesDuringCinematic;
    
    UPROPERTY(Config)
    bool bRebaseOriginIn3DSpace;
    
    UPROPERTY(Config)
    float RebaseOriginDistance;
    
    UWorldComposition();
};

