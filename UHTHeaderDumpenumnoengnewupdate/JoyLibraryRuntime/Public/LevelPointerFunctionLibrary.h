#pragma once
#include "CoreMinimal.h"
#include "LevelPointer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LevelPointerFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API ULevelPointerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelPointerFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FString GetLevelName(const FLevelPointer& _levelPointer);
    
};

