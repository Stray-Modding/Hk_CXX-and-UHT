#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NavigationTool.generated.h"

class UObject;
class UShapeComponent;
class ARecastNavMesh;

UCLASS(BlueprintType)
class JOYLIBRARYRUNTIME_API UNavigationTool : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNavigationTool();
    UFUNCTION(BlueprintCallable)
    static void SetDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent, bool _dynamicObstacle);
    
    UFUNCTION(BlueprintPure)
    static bool IsDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent);
    
    UFUNCTION(BlueprintPure)
    static ARecastNavMesh* GetRecastNavMesh(UObject* WorldContextObject, const FString& _navMeshName);
    
};

