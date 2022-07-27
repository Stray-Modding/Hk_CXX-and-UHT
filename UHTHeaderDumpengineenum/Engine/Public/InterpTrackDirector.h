#pragma once
#include "CoreMinimal.h"
#include "InterpTrack.h"
#include "DirectorTrackCut.h"
#include "InterpTrackDirector.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackDirector : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FDirectorTrackCut> CutTrack;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 bSimulateCameraCutsOnClients: 1;
    
public:
    UInterpTrackDirector();
};

