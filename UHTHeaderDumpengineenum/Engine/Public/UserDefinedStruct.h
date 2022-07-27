#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ScriptStruct -FallbackName=ScriptStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EUserDefinedStructureStatus.h"
#include "UserDefinedStruct.generated.h"

UCLASS()
class ENGINE_API UUserDefinedStruct : public UScriptStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<EUserDefinedStructureStatus> status;
    
    UPROPERTY()
    FGuid Guid;
    
    UUserDefinedStruct();
};

