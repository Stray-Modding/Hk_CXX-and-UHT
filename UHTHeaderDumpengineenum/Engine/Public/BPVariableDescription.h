#pragma once
#include "CoreMinimal.h"
#include "EdGraphPinType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ELifetimeCondition -FallbackName=ELifetimeCondition
#include "BPVariableMetaDataEntry.h"
#include "BPVariableDescription.generated.h"

USTRUCT()
struct FBPVariableDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName VarName;
    
    UPROPERTY()
    FGuid VarGuid;
    
    UPROPERTY(EditAnywhere)
    FEdGraphPinType VarType;
    
    UPROPERTY(EditAnywhere)
    FString FriendlyName;
    
    UPROPERTY(EditAnywhere)
    FText Category;
    
    UPROPERTY(EditAnywhere)
    uint64 PropertyFlags;
    
    UPROPERTY(EditAnywhere)
    FName RepNotifyFunc;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ELifetimeCondition> ReplicationCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    
    UPROPERTY(EditAnywhere)
    FString DefaultValue;
    
    ENGINE_API FBPVariableDescription();
};

