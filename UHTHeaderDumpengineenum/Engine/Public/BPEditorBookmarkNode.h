#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BPEditorBookmarkNode.generated.h"

USTRUCT()
struct FBPEditorBookmarkNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY()
    FGuid ParentGuid;
    
    UPROPERTY()
    FText DisplayName;
    
    ENGINE_API FBPEditorBookmarkNode();
};

