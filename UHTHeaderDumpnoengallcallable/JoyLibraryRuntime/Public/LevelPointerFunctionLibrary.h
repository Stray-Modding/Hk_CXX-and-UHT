#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LevelPointer.h"
#include "LevelPointerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API ULevelPointerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULevelPointerFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLevelName(const FLevelPointer& _levelPointer);
    
};

