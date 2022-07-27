#pragma once
#include "CoreMinimal.h"
#include "EPlatformInterfaceDataType.h"
#include "PlatformInterfaceData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FPlatformInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName DataName;
    
    UPROPERTY()
    TEnumAsByte<EPlatformInterfaceDataType> Type;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    FString StringValue;
    
    UPROPERTY()
    UObject* ObjectValue;
    
    ENGINE_API FPlatformInterfaceData();
};

