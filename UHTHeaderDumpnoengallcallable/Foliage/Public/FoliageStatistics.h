#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FoliageStatistics.generated.h"

class UObject;
class UStaticMesh;

UCLASS(Blueprintable)
class FOLIAGE_API UFoliageStatistics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFoliageStatistics();
    UFUNCTION(BlueprintCallable)
    static int32 FoliageOverlappingSphereCount(UObject* WorldContextObject, const UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static int32 FoliageOverlappingBoxCount(UObject* WorldContextObject, const UStaticMesh* StaticMesh, FBox Box);
    
};

