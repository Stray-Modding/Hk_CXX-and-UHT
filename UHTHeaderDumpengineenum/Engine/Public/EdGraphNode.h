#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENodeAdvancedPins.h"
#include "ENodeEnabledState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EdGraphNode.generated.h"

class UEdGraphPin_Deprecated;

UCLASS()
class ENGINE_API UEdGraphNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UEdGraphPin_Deprecated*> DeprecatedPins;
    
    UPROPERTY()
    int32 NodePosX;
    
    UPROPERTY()
    int32 NodePosY;
    
    UPROPERTY()
    int32 NodeWidth;
    
    UPROPERTY()
    int32 NodeHeight;
    
    UPROPERTY()
    TEnumAsByte<ENodeAdvancedPins::Type> AdvancedPinDisplay;
    
private:
    UPROPERTY()
    ENodeEnabledState EnabledState;
    
    UPROPERTY()
    uint8 bDisplayAsDisabled: 1;
    
    UPROPERTY()
    uint8 bUserSetEnabledState: 1;
    
    UPROPERTY()
    uint8 bIsNodeEnabled: 1;
    
public:
    UPROPERTY()
    uint8 bHasCompilerMessage: 1;
    
    UPROPERTY()
    FString NodeComment;
    
    UPROPERTY()
    int32 ErrorType;
    
    UPROPERTY()
    FString ErrorMsg;
    
    UPROPERTY()
    FGuid NodeGuid;
    
    UEdGraphNode();
};

