#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EditorMapPerformanceTestDefinition.generated.h"

USTRUCT(BlueprintType)
struct FEditorMapPerformanceTestDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath PerformanceTestmap;
    
    UPROPERTY(Config, EditAnywhere)
    int32 TestTimer;
    
    ENGINE_API FEditorMapPerformanceTestDefinition();
};

