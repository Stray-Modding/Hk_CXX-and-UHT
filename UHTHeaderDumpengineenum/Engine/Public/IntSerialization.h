#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IntSerialization.generated.h"

UCLASS()
class ENGINE_API UIntSerialization : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 UnsignedInt16Variable;
    
    UPROPERTY()
    uint32 UnsignedInt32Variable;
    
    UPROPERTY()
    uint64 UnsignedInt64Variable;
    
    UPROPERTY()
    int8 SignedInt8Variable;
    
    UPROPERTY()
    int16 SignedInt16Variable;
    
    UPROPERTY()
    int64 SignedInt64Variable;
    
    UPROPERTY()
    uint8 UnsignedInt8Variable;
    
    UPROPERTY()
    int32 SignedInt32Variable;
    
    UIntSerialization();
};

