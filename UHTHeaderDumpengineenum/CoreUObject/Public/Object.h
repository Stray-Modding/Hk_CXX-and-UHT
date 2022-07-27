#pragma once
#include "CoreMinimal.h"
#include "Object.generated.h"

UCLASS(Abstract, NoExport, Config=Engine)
class UObject : public UObjectBaseUtility {
    GENERATED_BODY()
public:
    UObject();
    UFUNCTION(BlueprintImplementableEvent)
    void ExecuteUbergraph(int32 EntryPoint);
    
};

