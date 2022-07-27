#pragma once
#include "CoreMinimal.h"
#include "NiagaraInputConditionMetadata.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraVariableMetaData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraVariableMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(EditAnywhere)
    bool bAdvancedDisplay;
    
    UPROPERTY(EditAnywhere)
    int32 EditorSortPriority;
    
    UPROPERTY(EditAnywhere)
    bool bInlineEditConditionToggle;
    
    UPROPERTY(EditAnywhere)
    FNiagaraInputConditionMetadata EditCondition;
    
    UPROPERTY(EditAnywhere)
    FNiagaraInputConditionMetadata VisibleCondition;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> PropertyMetaData;
    
    UPROPERTY(EditAnywhere)
    FName ParentAttribute;
    
private:
    UPROPERTY()
    FGuid VariableGuid;
    
    UPROPERTY()
    bool bIsStaticSwitch;
    
    UPROPERTY()
    int32 StaticSwitchDefaultValue;
    
public:
    FNiagaraVariableMetaData();
};

