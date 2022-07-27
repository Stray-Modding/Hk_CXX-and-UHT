#pragma once
#include "CoreMinimal.h"
#include "BPVariableMetaDataEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintCookedComponentInstancingData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SCS_Node.generated.h"

class UActorComponent;
class USCS_Node;

UCLASS(MinimalAPI)
class USCS_Node : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* ComponentClass;
    
    UPROPERTY(Export)
    UActorComponent* ComponentTemplate;
    
    UPROPERTY()
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;
    
    UPROPERTY()
    FName AttachToName;
    
    UPROPERTY()
    FName ParentComponentOrVariableName;
    
    UPROPERTY()
    FName ParentComponentOwnerClassName;
    
    UPROPERTY()
    bool bIsParentComponentNative;
    
    UPROPERTY()
    TArray<USCS_Node*> ChildNodes;
    
    UPROPERTY(EditAnywhere)
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    
    UPROPERTY()
    FGuid VariableGuid;
    
private:
    UPROPERTY()
    FName InternalVariableName;
    
public:
    USCS_Node();
};

