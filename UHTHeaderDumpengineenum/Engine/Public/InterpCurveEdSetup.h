#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CurveEdTab.h"
#include "InterpCurveEdSetup.generated.h"

UCLASS(MinimalAPI)
class UInterpCurveEdSetup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCurveEdTab> Tabs;
    
    UPROPERTY()
    int32 ActiveTab;
    
    UInterpCurveEdSetup();
};

