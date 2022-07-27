#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "EARPlaneOrientation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARPlaneGeometry.generated.h"

class UARPlaneGeometry;

UCLASS()
class AUGMENTEDREALITY_API UARPlaneGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EARPlaneOrientation Orientation;
    
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    FVector Extent;
    
    UPROPERTY()
    TArray<FVector> BoundaryPolygon;
    
    UPROPERTY()
    UARPlaneGeometry* SubsumedBy;
    
public:
    UARPlaneGeometry();
    UFUNCTION(BlueprintPure)
    UARPlaneGeometry* GetSubsumedBy() const;
    
    UFUNCTION(BlueprintPure)
    EARPlaneOrientation GetOrientation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCenter() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetBoundaryPolygonInLocalSpace() const;
    
};

