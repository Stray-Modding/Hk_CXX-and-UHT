#pragma once
#include "CoreMinimal.h"
#include "InterpEdSelKey.generated.h"

class UInterpTrack;
class UInterpGroup;

USTRUCT()
struct FInterpEdSelKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInterpGroup* Group;
    
    UPROPERTY()
    UInterpTrack* Track;
    
    UPROPERTY()
    int32 KeyIndex;
    
    UPROPERTY()
    float UnsnappedPosition;
    
    ENGINE_API FInterpEdSelKey();
};

