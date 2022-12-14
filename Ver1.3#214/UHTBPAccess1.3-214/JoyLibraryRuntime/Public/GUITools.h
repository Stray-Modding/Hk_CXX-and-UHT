#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GUITools.generated.h"

class UWidget;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UGUITools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGUITools();
    UFUNCTION(BlueprintCallable)
    static void ForceSizeRefresh(UWidget* _widget);
    
};

