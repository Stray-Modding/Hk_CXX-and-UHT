#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
#include "BinkFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BINKMEDIAPLAYER_API UBinkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBinkFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FTimespan BinkLoadingMovie_GetTime();
    
    UFUNCTION(BlueprintCallable)
    static FTimespan BinkLoadingMovie_GetDuration();
    
    UFUNCTION(BlueprintCallable)
    static void Bink_DrawOverlays();
    
};

