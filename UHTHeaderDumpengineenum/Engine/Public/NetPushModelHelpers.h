#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "NetPushModelHelpers.generated.h"

class UObject;

UCLASS(BlueprintType)
class ENGINE_API UNetPushModelHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNetPushModelHelpers();
    UFUNCTION(BlueprintCallable)
    static void MarkPropertyDirtyFromRepIndex(UObject* Object, int32 RepIndex, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static void MarkPropertyDirty(UObject* Object, FName PropertyName);
    
};

