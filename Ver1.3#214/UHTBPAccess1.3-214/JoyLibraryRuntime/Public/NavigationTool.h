#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "NavigationTool.generated.h"

class UObject;
class ARecastNavMesh;
class UShapeComponent;

UCLASS(Blueprintable)
class JOYLIBRARYRUNTIME_API UNavigationTool : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNavigationTool();
    UFUNCTION(BlueprintCallable)
    static void SetDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent, bool _dynamicObstacle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDynamicObstacle(UObject* WorldContextObject, UShapeComponent* _shapeComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARecastNavMesh* GetRecastNavMesh(UObject* WorldContextObject, const FString& _navMeshName);
    
};

