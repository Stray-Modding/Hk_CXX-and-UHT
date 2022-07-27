#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterpGroupInst.generated.h"

class UInterpGroup;
class AActor;
class UInterpTrackInst;

UCLASS(MinimalAPI)
class UInterpGroupInst : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInterpGroup* Group;
    
    UPROPERTY()
    AActor* GroupActor;
    
    UPROPERTY()
    TArray<UInterpTrackInst*> TrackInst;
    
    UInterpGroupInst();
};

