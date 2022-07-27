#pragma once
#include "CoreMinimal.h"
#include "BlueprintInputDelegateBinding.h"
#include "EInputEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "BlueprintInputKeyDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInputChord InputChord;
    
    UPROPERTY()
    TEnumAsByte<EInputEvent> InputKeyEvent;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FBlueprintInputKeyDelegateBinding();
};

