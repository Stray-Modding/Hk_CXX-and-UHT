#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolsContext.generated.h"

class UInteractiveGizmoManager;
class UInputRouter;
class UInteractiveToolManager;

UCLASS(Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolsContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInputRouter* InputRouter;
    
    UPROPERTY()
    UInteractiveToolManager* ToolManager;
    
    UPROPERTY()
    UInteractiveGizmoManager* GizmoManager;
    
protected:
    UPROPERTY()
    TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;
    
public:
    UInteractiveToolsContext();
};

