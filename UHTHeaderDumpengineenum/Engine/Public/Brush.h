#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "EBrushType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "GeomSelection.h"
#include "Brush.generated.h"

class UModel;
class UBrushComponent;

UCLASS()
class ENGINE_API ABrush : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBrushType> BrushType;
    
    UPROPERTY()
    FColor BrushColor;
    
    UPROPERTY()
    int32 PolyFlags;
    
    UPROPERTY()
    uint8 bColored: 1;
    
    UPROPERTY()
    uint8 bSolidWhenSelected: 1;
    
    UPROPERTY()
    uint8 bPlaceableFromClassBrowser: 1;
    
    UPROPERTY()
    uint8 bNotForClientOrServer: 1;
    
    UPROPERTY(Instanced)
    UModel* Brush;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
public:
    UPROPERTY()
    uint8 bInManipulation: 1;
    
    UPROPERTY()
    TArray<FGeomSelection> SavedSelections;
    
    ABrush();
};

