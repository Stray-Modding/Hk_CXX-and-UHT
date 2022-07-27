#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BuilderPoly.h"
#include "BrushBuilder.generated.h"

UCLASS(Abstract, MinimalAPI)
class UBrushBuilder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString BitmapFilename;
    
    UPROPERTY()
    FString Tooltip;
    
    UPROPERTY(Transient)
    uint8 NotifyBadParams: 1;
    
protected:
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FBuilderPoly> Polys;
    
    UPROPERTY()
    FName Layer;
    
    UPROPERTY()
    uint8 MergeCoplanars: 1;
    
public:
    UBrushBuilder();
};

